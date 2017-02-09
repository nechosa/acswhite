cmake_minimum_required (VERSION 2.6)

set (PROJECT qt5-gui)

project (${PROJECT})

set (HEADERS ../qt5-gui.h)
set (SOURCES ../sources/qt5-gui.cpp)

source_group ("Header Files" FILES ${HEADERS})
source_group ("Source Files" FILES ${SOURCES})

add_library (${PROJECT} ${HEADERS} ${SOURCES})
