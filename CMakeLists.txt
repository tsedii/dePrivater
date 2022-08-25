cmake_minimum_required( VERSION 3.11 )

project( dePrivater VERSION 0.1.0 )

set( CMAKE_CXX_STANDARD 20 )

set( SOURCE_FILES 
    Src/main.cpp
    Src/DePrivater/Sources/dePrivater.cpp
    Src/Utils/Sources/utils.cpp
)

include_directories( 
    Src/DePrivater/Headers/
    Src/Logger/Headers/
    Src/Utils/Headers/
)

add_executable( ${PROJECT_NAME} ${SOURCE_FILES} )


##########
# GTests
##########

add_subdirectory(Src/Tests)
