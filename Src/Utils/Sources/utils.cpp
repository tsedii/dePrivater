#include "utils.hpp"

#define FOR_LOG_LINE_FUNC_FILE(MESSAGE) \
    [=](std::string message) -> std::string { return ( \
        message \
        + std::string ( "\n code line : " ) + std::to_string ( __LINE__ ) \
        + std::string ( "\n function name : " ) + std::string ( __func__ ) \
        + std::string ( "\n source file : " ) + std::string ( __FILE__ ) \
    ); \
    }(MESSAGE)


namespace utils
{
    namespace filesystem
    {
        std::shared_ptr<std::fstream> GetFileStream ( const std::string& file_name, std::ios_base::openmode mode )
        {
            std::shared_ptr<std::fstream> file_stream_ptr ( 
                std::make_shared<std::fstream> ( file_name, mode )
            );

            if ( !file_stream_ptr )
            {
                throw std::logic_error ( 
                    FOR_LOG_LINE_FUNC_FILE ( std::string ( "can't create std::shared_ptr for std::fstream for open " ) 
                        + file_name 
                    )
                );
            }
            else if ( !file_stream_ptr->is_open() )
            {
                throw std::logic_error ( std::string( "failed to open " ) + file_name );
            }
            
            return file_stream_ptr;
        }
    }
}
