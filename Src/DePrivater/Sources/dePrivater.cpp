#include "dePrivater.hpp"

#include <iostream>
#include <stdexcept>
#include <fstream>


namespace de_privater
{
    void DePrivater::DePrivateWrapper()
    {
        try
        {
            DePrivate();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        catch(...)
        {
            std::cerr << "Unknown error" << '\n';
        }
    }

    bool DePrivater::DePrivate()
    {
        std::string medias_and_transcripts_url_addresses_file_line;

        std::ifstream medias_and_transcripts_url_addresses_file_stream(cmake_lists_txt_full_name_);
        
        while (std::getline(medias_and_transcripts_url_addresses_file_stream, medias_and_transcripts_url_addresses_file_line))
        {
            std::cout << medias_and_transcripts_url_addresses_file_line << std::endl;
        }

        return true;
    }
}
