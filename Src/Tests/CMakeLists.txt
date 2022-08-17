cmake_minimum_required ( VERSION 3.11 )

set ( TEST_SOURCE_FILES
    gTestsMain.cpp
    Sources/dePrivateTests.cpp

    ../Utils/Sources/utils.cpp

    ../DePrivater/Sources/dePrivater.cpp
#_de_privater_header_source_# Next row should contain .hpp-file where all private keywords must be changed to public keyword
    ../DePrivater/Headers/dePrivater.hpp
#_de_privater_header_destination_# DePrivater/dePrivater.hpp

    ../Utils/Headers/utils.hpp
)

add_executable ( dePrivaterTests ${TEST_SOURCE_FILES} )

target_link_libraries ( dePrivaterTests gtest gmock pthread )
