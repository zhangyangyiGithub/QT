QT       += core

CONFIG += c++11

SOURCES += \
    main.cpp


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



   Osg_RootDir     =  $$PWD/OpenSceneGraph
   Osg_3rdParty    =  $${Osg_RootDir}/3rdParty
   INCLUDEPATH     += $${Osg_3rdParty}/include
   INCLUDEPATH     += $${Osg_RootDir}/3.6.4/include
   OsgLibPath      =  $${Osg_RootDir}/3.6.4/lib

CONFIG(debug, debug|release){
    LIBS += $${OsgLibPath}/debug/osgViewerd.lib
    LIBS += $${OsgLibPath}/debug/osgDBd.lib
    LIBS += $${OsgLibPath}/debug/OpenThreadsd.lib
    LIBS += $${OsgLibPath}/debug/osgd.lib
    LIBS += $${OsgLibPath}/debug/osgManipulatord.lib
    LIBS += $${OsgLibPath}/debug/osgTextd.lib
    LIBS += $${OsgLibPath}/debug/osgGAd.lib
    LIBS += $${OsgLibPath}/debug/osgUtild.lib
    LIBS += $${OsgLibPath}/debug/osgUId.lib
    }
else{
    LIBS += $${OsgLibPath}/release/osgViewer.lib
    LIBS += $${OsgLibPath}/release/osgDB.lib
    LIBS += $${OsgLibPath}/release/OpenThreads.lib
    LIBS += $${OsgLibPath}/release/osg.lib
    LIBS += $${OsgLibPath}/release/osgManipulator.lib
    LIBS += $${OsgLibPath}/release/osgText.lib
    LIBS += $${OsgLibPath}/release/osgGA.lib
    LIBS += $${OsgLibPath}/release/osgUtil.lib
    LIBS += $${OsgLibPath}/release/osgUI.lib
    }
