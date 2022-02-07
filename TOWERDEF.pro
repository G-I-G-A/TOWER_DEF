TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

#WINDOWS
# put SFML file in the same location as project
LIBS += -L"..\SFML-2.5.1\lib" #change this
LIBS += -L"..\SFML-2.5.1\bin" #change this

#MAC
#LIBS += -L"/usr/local/lib"

CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-system -lsfml-network -lsfml-window
CONFIG(debug  , debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-system -lsfml-network -lsfml-window

#WINDOWS
INCLUDEPATH += "..\SFML-2.5.1\include" #change this
DEPENDPATH += "..\SFML-2.5.1\include" #change this


SOURCES += \
        Field/field.cpp \
        Field/renderfield.cpp \
        Game/game.cpp \
        Tower/attacktower.cpp \
        Tower/canontower.cpp \
        Tower/freezetower.cpp \
        Tower/freezetower.cpp \
        Tower/guntower.cpp \
        Tower/machineguntower.cpp \
        Tower/maintower.cpp \
        Tower/poisontower.cpp \
        Tower/poisontower.cpp \
        Tower/tower.cpp \
        Tower/tower.cpp \
        Tower/ultimetower.cpp \
        main.cpp

HEADERS += \
    Field/field.h \
    Field/renderfield.h \
    Game/game.h \
    Tower/attacktower.h \
    Tower/canontower.h \
    Tower/freezetower.h \
    Tower/freezetower.h \
    Tower/guntower.h \
    Tower/machineguntower.h \
    Tower/maintower.h \
    Tower/poisontower.h \
    Tower/poisontower.h \
    Tower/tower.h \
    Tower/tower.h \
    Tower/ultimetower.h
