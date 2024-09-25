#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_event_select_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_EVENT_SELECT_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_pipe_event_select_buffer_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t event_types;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventTypes
        _m01 uint64_t event_handle;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EventHandle
                                          
        SDK_MAGIC_PROPERTIES( "_FILE_PIPE_EVENT_SELECT_BUFFER.$", 0x10, true, 0x9df41a2184172af7 );             
        SDK_FIXED_SIZE( file_pipe_event_select_buffer_t, 0x10 );             
    };                                    
};
#include "magic/file_pipe_event_select_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_event_select_buffer_t, 0x10 );
