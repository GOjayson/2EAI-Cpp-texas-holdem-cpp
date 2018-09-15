#DEPENDPATH += $$PWD
INCLUDEPATH += $$PWD

win32-msvc*{
    LIBS += -L$$PWD -l2017
} else:win32-g++ {
    LIBS += -L$$PWD -llib2017
}