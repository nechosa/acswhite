cmake_minimum_required (VERSION 2.6)

set (PROJECT library_1)

project (${PROJECT})

set (HEADERS ../library_1.h)
set (SOURCES ../sources/library_1.cpp)

source_group ("Header Files" FILES ${HEADERS})
source_group ("Source Files" FILES ${SOURCES})

add_library (${PROJECT} ${HEADERS} ${SOURCES})
