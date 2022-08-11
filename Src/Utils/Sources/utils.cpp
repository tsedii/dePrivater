#include "utils.hpp"


namespace utils
{
    namespace filesystem
    {
        std::shared_ptr<std::ifstream> GetFileStream(const std::string& file_name)
        {
            std::shared_ptr<std::ifstream> file_stream_ptr( 
                std::make_shared<std::ifstream>(file_name)
            );

            if ( !file_stream_ptr->is_open() )
            {
                throw std::logic_error ( std::string( "failed to open " ) + file_name );
            }
            
            return file_stream_ptr;
        }
    }
}
