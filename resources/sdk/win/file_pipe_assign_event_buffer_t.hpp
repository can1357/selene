#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_assign_event_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_ASSIGN_EVENT_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_pipe_assign_event_buffer_t
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 void*    event_handle;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EventHandle
        _m01 uint32_t key_value;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyValue
                                          
        SDK_NONVOL_PROPERTIES( "_FILE_PIPE_ASSIGN_EVENT_BUFFER.$", 0x10, true, 0xb34b4286888a091a );             
        SDK_FIXED_SIZE( file_pipe_assign_event_buffer_t, 0x10 );             
    };                                    
};
#include "magic/file_pipe_assign_event_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_assign_event_buffer_t, 0x10 );
