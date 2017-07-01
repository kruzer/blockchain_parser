QT += core
QT -= gui

TARGET = bParser
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Base58.cpp \
    BitcoinAddress.cpp \
    BlockChain.cpp \
    BlockChainAddresses.cpp \
    MemoryMap.cpp \
    RIPEMD160.cpp \
    SHA256.cpp

HEADERS += \
    SimpleHash.h \
    Base58.h \
    BitcoinAddress.h \
    BlockChain.h \
    BlockChainAddresses.h \
    HeapSort.h \
    MemoryMap.h \
    RIPEMD160.h \
    SHA256.h

