#DEPENDPATH += $$PWD
INCLUDEPATH += $$PWD

win32-msvc*{
    LIBS += -L$$PWD -l2016
} else:win32-g++ {
    LIBS += -L$$PWD -llib2016
}

#SOURCES += $$PWD/2016.cpp

#HEADERS += $$PWD/2016.h \
#    $$PWD/armand.h \
#    $$PWD/armand2.h \
#    $$PWD/armand3.h \
#    $$PWD/brecht.h \
#    $$PWD/david_vader.h \
#    $$PWD/erik_nies.h \
#    $$PWD/jarne.h \
#    $$PWD/jimmy.h \
#    $$PWD/jolien.h \
#    $$PWD/jonas.h \
#    $$PWD/jorim.h \
#    $$PWD/koen.h \
#    $$PWD/laura.h \
#    $$PWD/lode.h \
#    $$PWD/Poker2.h \
#    $$PWD/Poker3.h \
#    $$PWD/Vanaf_Straight_Raise_JORNE_FRANSSEN.h \
#    $$PWD/wardm.h \
#    $$PWD/wouter.h \
#    $$PWD/yasin_noob.h
