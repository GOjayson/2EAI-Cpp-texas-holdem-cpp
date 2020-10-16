TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
	deck.cpp \
	game.cpp \
	hand.cpp \
	jayson.cpp \
	poker_rank.cpp \
	table.cpp \
	tournament.cpp

HEADERS += \
	card.h \
	deck.h \
	game.h \
	hand.h \
	jayson.h \
	player.h \
	playerid.h \
	poker_rank.h \
	table.h \
	tournament.h \
	vader.h \
	noob.h
