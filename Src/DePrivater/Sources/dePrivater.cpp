#include "dePrivater.hpp"

#include <iostream>
#include <stdexcept>

#include "utils.hpp"
#include "logger.hpp"


namespace de_privater
{
    void DePrivater::DePrivateWrapper ( )
    {
        try
        {
            DePrivate ( );
        }
        catch ( const std::exception& e )
        {
            std::cerr << e.what() << std::endl;
        }
        catch ( ... )
        {
            std::cerr << "Unknown error" << std::endl;
        }
    }

    bool DePrivater::DePrivate ( )
    {
        std::shared_ptr<std::fstream> medias_and_transcripts_url_addresses_file_stream_ptr ( 
            utils::filesystem::GetFileStream ( cmake_lists_txt_full_name_, std::ios::in )
        );

        std::shared_ptr<std::stringstream> temporary_text_file_ptr = std::make_shared<std::stringstream> ( );

        ProcessingCMakeFileDeprivateSignatures ( medias_and_transcripts_url_addresses_file_stream_ptr, temporary_text_file_ptr );

        OutloadChangesToCMakeFile ( medias_and_transcripts_url_addresses_file_stream_ptr, temporary_text_file_ptr );

        return true; // For running always successful empty google test
    }

    void DePrivater::ProcessingCMakeFileDeprivateSignatures (
        std::shared_ptr<std::fstream> medias_and_transcripts_url_addresses_file_stream_ptr 
        , std::shared_ptr<std::stringstream> temporary_text_file_ptr 
    )
    {
        throw std::logic_error ( 
            FOR_LOG_LINE_FUNC_FILE ( std::string ( "\n It's not implemented yet" ) )
        );

        std::string medias_and_transcripts_url_addresses_file_line;

        auto const string_begin { 0 };
        
        while ( std::getline ( *medias_and_transcripts_url_addresses_file_stream_ptr, medias_and_transcripts_url_addresses_file_line ) )
        {
            *temporary_text_file_ptr << medias_and_transcripts_url_addresses_file_line << std::endl;

            if ( medias_and_transcripts_url_addresses_file_line.find ( de_privater_header_source_row_ ) != std::string::npos )
            {
                if ( !std::getline ( *medias_and_transcripts_url_addresses_file_stream_ptr, medias_and_transcripts_url_addresses_file_line ) )
                {
                    throw std::logic_error ( 
                        FOR_LOG_LINE_FUNC_FILE ( std::string ( "\n Unexpected end of " ) + cmake_lists_txt_full_name_ )
                    );
                }
                else if ( medias_and_transcripts_url_addresses_file_line.find ( de_privater_header_source_comment_sub_string_ ) != std::string::npos )
                {
                    RestorePrivateKeywordInHeaderFile ( medias_and_transcripts_url_addresses_file_stream_ptr, temporary_text_file_ptr );
                }
                else
                {
                    PrivateKeywordToPublicInHeaderFile ( medias_and_transcripts_url_addresses_file_stream_ptr, temporary_text_file_ptr );
                }

                medias_and_transcripts_url_addresses_file_line.insert ( string_begin, de_privater_header_source_comment_sub_string_ );

                *temporary_text_file_ptr << medias_and_transcripts_url_addresses_file_line << std::endl;
            }
        }
    }

    void DePrivater::RestorePrivateKeywordInHeaderFile ( 
        std::shared_ptr<std::fstream> medias_and_transcripts_url_addresses_file_stream_ptr 
        , std::shared_ptr<std::stringstream> temporary_text_file_ptr 
    )
    {
        throw std::logic_error ( 
            FOR_LOG_LINE_FUNC_FILE ( std::string ( "\n It's not implemented yet" ) )
        );
    }

    void DePrivater::PrivateKeywordToPublicInHeaderFile ( 
        std::shared_ptr<std::fstream> medias_and_transcripts_url_addresses_file_stream_ptr 
        , std::shared_ptr<std::stringstream> temporary_text_file_ptr 
    )
    {
        throw std::logic_error ( 
            FOR_LOG_LINE_FUNC_FILE ( std::string ( "\n It's not implemented yet" ) )
        );
    }

    void DePrivater::OutloadChangesToCMakeFile ( 
        std::shared_ptr<std::fstream> medias_and_transcripts_url_addresses_file_stream_ptr 
        , std::shared_ptr<std::stringstream> temporary_text_file_ptr 
    )
    {
        throw std::logic_error ( 
            FOR_LOG_LINE_FUNC_FILE ( std::string ( "\n It's not implemented yet" ) )
        );

        medias_and_transcripts_url_addresses_file_stream_ptr->close();

        medias_and_transcripts_url_addresses_file_stream_ptr = utils::filesystem::GetFileStream( cmake_lists_txt_full_name_, std::ios::out | std::ios::trunc );

        *medias_and_transcripts_url_addresses_file_stream_ptr << temporary_text_file_ptr->str();
    }
}
