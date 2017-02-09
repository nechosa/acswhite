cmake_minimum_required (VERSION 2.6)

set (PROJECT ACSWhite)

project (${PROJECT})

include_directories (../)

set (LIBRARIES
		library_1
                library_2)
set (QT5GUI
                qt5-gui)
foreach (LIBRARY ${LIBRARIES})
        add_subdirectory (../${LIBRARY}/build bin/${LIBRARY})
endforeach ()

foreach (LIBRARY ${QT5GUI})
        add_subdirectory (../${LIBRARY}/build bin/${LIBRARY})
endforeach ()

#add_subdirectory (${QT5GUI}/build bin/${QT5GUI})

if (MSVC)
	add_definitions (/W4)
elseif (CMAKE_COMPILER_IS_GNUCXX)
	add_definitions (-Wall -pedantic)
else ()
	message ("Unknown compiler")
endif ()

set (HEADERS)
set (SOURCES ../main.cpp)

source_group ("Header Files" FILES ${HEADERS})
source_group ("Source Files" FILES ${SOURCES})

add_executable (${PROJECT} ${HEADERS} ${SOURCES})

target_link_libraries (${PROJECT} ${LIBRARIES})
