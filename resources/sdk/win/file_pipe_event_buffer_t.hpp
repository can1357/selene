#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_event_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_EVENT_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_pipe_event_buffer_t    
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t named_pipe_state;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NamedPipeState
        _m01 uint32_t entry_type;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .EntryType
        _m02 uint32_t byte_count;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ByteCount
        _m03 uint32_t key_value;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .KeyValue
        _m04 uint32_t number_requests;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberRequests
                                       
        SDK_NONVOL_PROPERTIES( "_FILE_PIPE_EVENT_BUFFER.$", 0x14, true, 0xcf08d1c1e70df8e9 );                 
        SDK_FIXED_SIZE( file_pipe_event_buffer_t, 0x14 );                 
    };                                 
};
#include "magic/file_pipe_event_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_event_buffer_t, 0x14 );
