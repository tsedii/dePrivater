cmake_minimum_required( VERSION 3.11 )

set( TEST_SOURCE_FILES
    gTestsMain.cpp
    Sources/dePrivateTests.cpp

    ../DePrivater/Sources/dePrivater.cpp
#_de_privater_info_source_# 
    ../DePrivater/Headers/dePrivater.hpp
#_de_privater_info_destination_# DePrivater/dePrivater.hpp
)

add_executable(dePrivaterTests ${TEST_SOURCE_FILES})

target_link_libraries(dePrivaterTests gtest gmock pthread)
