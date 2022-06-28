#include <osg/Geode>
#include <osg/Geometry>
#include <osgText/Text>
#include <osgViewer/Viewer>
#include <locale.h>
#include <osgDB/ReadFile>

using namespace osg;
using namespace osgViewer;
using namespace osgDB;

void setupProperties(osgText::Text& textObject,osgText::Font* font,float size,const osg::Vec3& pos )

{
    textObject.setFont(font);//
    textObject.setCharacterSize(size);//字体大小
    textObject.setPosition(pos);
    textObject.setColor(osg::Vec4(1.0,1.0,1.0,1.0));
    textObject.setAlignment(osgText::Text::CENTER_BOTTOM);//文字显示方向
    //textObject.setAxisAlignment(osgText::Text::SCREEN);//获取文字对称成方式正对屏幕方向
    //textObject.setCharacterSizeMode(osgText::Text::SCREEN_COORDS);//跟随视角不断变化，离物体越远，文字越大
    textObject.setAutoRotateToScreen(true);//跟随视角不断变化，但离物体越远，文字越小，和现实当中像类似
    textObject.setBackdropType(osgText::Text::OUTLINE);//对文字进行描边
    textObject.setBackdropColor(osg::Vec4(1.0,0.0,0.0,1.0));//描边颜色
    textObject.setDrawMode(osgText::Text::TEXT | osgText::Text::BOUNDINGBOX);//添加文字边框
    textObject.setAxisAlignment(osgText::Text::XZ_PLANE);//获取文字对称成方式
}



void createContent(osgText::Text& textObject,const char* string)

{
    int requiredSize=mbstowcs(NULL,string,0);//如果mbstowcs第一参数为NULL那么返回字符串的数目
    wchar_t* wText=new wchar_t[requiredSize+1];
    mbstowcs(wText,string,requiredSize+1);//由char转换成wchar类型
    textObject.setText(wText);
    delete wText;
}



int main()

{
    setlocale(LC_ALL,".936");//　配置地域化信息
    const char* titleString="hsj";
    const char* textString="666666";
    osgText::Font* fontHei=osgText::readFontFile("C:\\WINDOWS\\Fonts\\simhei.ttf");
    osgText::Font* fontKai=osgText::readFontFile("C:\\WINDOWS\\Fonts\\simkai.ttf");

    osg::ref_ptr<osgText::Text> title=new osgText::Text;
    setupProperties(*title,fontHei,20.0f,osg::Vec3(0.0,0.0,0.0));
    createContent(*title,titleString);
    osg::ref_ptr<osgText::Text> text=new osgText::Text;
    setupProperties(*text,fontKai,15.0,osg::Vec3(0.0,0.0,-80.0f));
    createContent(*text,textString);
    osg::ref_ptr<osg::Geode> geode=new osg::Geode;
    geode->addDrawable(osg::createTexturedQuadGeometry(osg::Vec3(-150.0,1.0,-130.0),osg::Vec3(300.0,0.0,0.0),osg::Vec3(0.0,0.0,200.0),1.0,1.0));//创建一个写字板

    geode->addDrawable(title.get());
    geode->addDrawable(text.get());
    osgViewer::Viewer viewer;
    viewer.setSceneData(geode.get());
    return viewer.run();

}
