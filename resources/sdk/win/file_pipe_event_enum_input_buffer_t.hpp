#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_event_enum_input_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_EVENT_ENUM_INPUT_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_pipe_event_enum_input_buffer_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint64_t event_handle;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventHandle
                                              
        SDK_MAGIC_PROPERTIES( "_FILE_PIPE_EVENT_ENUM_INPUT_BUFFER.$", 0x8, true, 0x57e10f933bafc462 );             
        SDK_FIXED_SIZE( file_pipe_event_enum_input_buffer_t, 0x8 );             
    };                                        
};
#include "magic/file_pipe_event_enum_input_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_event_enum_input_buffer_t, 0x8 );
