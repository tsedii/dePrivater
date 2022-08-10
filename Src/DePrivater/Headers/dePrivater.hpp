#pragma once

#include <string>


namespace de_privater
{
    class DePrivater
    {
    public:
        void DePrivateWrapper();

//    private:
        bool DePrivate();

    private:
        std::string cmake_lists_txt_full_name_{"Src/Tests/CMakeLists.txt"};
    };
}
