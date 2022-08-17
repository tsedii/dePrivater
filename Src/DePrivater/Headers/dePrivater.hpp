#pragma once

#include <string>

#define private public

namespace de_privater
{
    class DePrivater
    {
    public:
        void DePrivateWrapper();

    private:
        bool DePrivate();

    private:
        std::string cmake_lists_txt_full_name_ { "Src/Tests/CMakeLists.txt" };

        std::string define_private_to_public_row_ { "#define private public" };
        std::string undef_private_row_ { "#undef private" };

        std::string de_privater_header_source_row_ { "#_de_privater_header_source_#" };
        std::string de_privater_header_destination_row_ { "#_de_privater_header_destination_#" };

        std::string de_privater_header_source_comment_row_ { "#_de_privater_header_source_comment_#" };
    };
}

#undef private
