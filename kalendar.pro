######################################################################
#  KaJe 2012                                                         #
#                                                                    #
#  Vytvořen: po 31.12.2012 08:28:05                                  #
#                                                                    #
#  Posledni upravy: Pá 01.úno.2013 07:56:52                        **
######################################################################
TEMPLATE	= app
DESTDIR	= dist
TARGET	= kalendar
CONFIG	+= qt debug
INCLUDEPATH	+= ./bibliothek
DEPENDPATH	+= ./bibliothek

# Input
RESOURCES += kalendar.qrc

HEADERS +=  mainform.h \
			daydata.h \
			commonmodel.h \
			inputdlg.h \
			dayitem.h \
			monatform.h \
			asqlengine.h \
			daymodel.h \
			sqlengine.h \
			kjguilib.h \
			kjsqllib.h \
			kjsyslog.h \
			qprogressindicator.h

SOURCES +=  mainform.cpp \
			daydata.cpp \
			commonmodel.cpp \
			inputdlg.cpp \
			dayitem.cpp \
			monatform.cpp \
			kjguilib.cpp \
			kjsqllib.cpp \
			kjsyslog.cpp \
			qprogressindicator.cpp \
			asqlengine.cpp \
			daymodel.cpp \
			sqlengine.cpp \
			main.cpp

FORMS +=    ui/mainform.ui \
			ui/inputdlg.ui \
			ui/monatform.ui 

OBJECTS_DIR	= obj
MOC_DIR	= obj
UI_DIR	= obj
QT += sql
target.path=~/dist
