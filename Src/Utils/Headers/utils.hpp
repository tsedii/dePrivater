#pragma once

#include <memory>
#include <fstream>
#include <string>


namespace utils
{
    namespace filesystem
    {
        std::shared_ptr<std::fstream> GetFileStream ( const std::string& file_name
            , std::ios_base::openmode mode = std::ios::in | std::ios::out 
        );
    }
}
