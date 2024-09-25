#pragma once
#include <sdkgen/support_library.hpp>
#include "task_t.hpp"

#include "magic/task_offload_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TASK_OFFLOAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct task_offload_t                              
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 uint32_t               version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t               size;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 enum ndis::task_t      task;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Task
        _m03 uint32_t               offset_next_task;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .OffsetNextTask
        _m04 uint32_t               task_buffer_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TaskBufferLength
        _m05 sdk::array<uint8_t, 1> task_buffer;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .TaskBuffer
                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_TASK_OFFLOAD.$", 0x18, true, 0xe38f15485cc92cef );                   
        SDK_FIXED_SIZE( task_offload_t, 0x18 );                   
    };                                                 
};
#include "magic/task_offload_t.end.hpp"
SDK_VERIFY( struct ndis::task_offload_t, 0x18 );
