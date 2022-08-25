#pragma once

#include <memory>
#include <string>
#include <sstream>

#define private public

namespace de_privater
{
    class DePrivater
    {
    public:
        void DePrivateWrapper ( );

    private:
        bool DePrivate ( );
        void ProcessingCMakeFileDeprivateSignatures (
            std::shared_ptr<std::fstream> medias_and_transcripts_url_addresses_file_stream_ptr 
            , std::shared_ptr<std::stringstream> temporary_text_file_ptr 
        );
        void RestorePrivateKeywordInHeaderFile ( 
            std::shared_ptr<std::fstream> medias_and_transcripts_url_addresses_file_stream_ptr 
            , std::shared_ptr<std::stringstream> temporary_text_file_ptr 
        );
        void PrivateKeywordToPublicInHeaderFile ( 
            std::shared_ptr<std::fstream> medias_and_transcripts_url_addresses_file_stream_ptr 
            , std::shared_ptr<std::stringstream> temporary_text_file_ptr 
        );
        void OutloadChangesToCMakeFile ( 
            std::shared_ptr<std::fstream> medias_and_transcripts_url_addresses_file_stream_ptr 
            , std::shared_ptr<std::stringstream> temporary_text_file_ptr 
        );

    private:
        std::string cmake_lists_txt_full_name_ { "Src/Tests/CMakeLists.txt" };

        std::string define_private_to_public_row_ { "#define private public" };
        std::string undef_private_row_ { "#undef private" };

        std::string de_privater_header_source_row_ { "#_de_privater_header_file_#" };
        std::string de_privater_header_destination_row_ { "#_de_privater_header_destination_#" };

        std::string de_privater_header_source_comment_sub_string_ { "#_de_privater_header_file_comment_#" };
    };
}

#undef private
