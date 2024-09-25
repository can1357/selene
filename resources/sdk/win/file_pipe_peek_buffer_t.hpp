#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_peek_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_PEEK_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_pipe_peek_buffer_t                   
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                           
        _m00 uint32_t            named_pipe_state;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NamedPipeState
        _m01 uint32_t            read_data_available;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ReadDataAvailable
        _m02 uint32_t            number_of_messages;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfMessages
        _m03 uint32_t            message_length;       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .MessageLength
        _m04 sdk::array<char, 1> data;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Data
                                                     
        SDK_NONVOL_PROPERTIES( "_FILE_PIPE_PEEK_BUFFER.$", 0x14, true, 0x7864026e2d4a70e3 );                    
        SDK_FIXED_SIZE( file_pipe_peek_buffer_t, 0x14 );                    
    };                                               
};
#include "magic/file_pipe_peek_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_peek_buffer_t, 0x14 );
