#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_event_enum_output_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_EVENT_ENUM_OUTPUT_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_pipe_event_enum_output_buffer_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t event_types;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventTypes
                                               
        SDK_MAGIC_PROPERTIES( "_FILE_PIPE_EVENT_ENUM_OUTPUT_BUFFER.$", 0x4, true, 0xefbe83f21db1a6b9 );            
        SDK_FIXED_SIZE( file_pipe_event_enum_output_buffer_t, 0x4 );            
    };                                         
};
#include "magic/file_pipe_event_enum_output_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_event_enum_output_buffer_t, 0x4 );
