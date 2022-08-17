#pragma once

#include <memory>
#include <fstream>
#include <string>


namespace utils
{
    namespace filesystem
    {
        std::shared_ptr<std::ifstream> GetFileStream ( const std::string& file_name );
    }
}
