#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/net_buffer_shared_memory_t.start.hpp"
namespace ndis
{
    struct net_buffer_shared_memory_t;

    // [struct _NET_BUFFER_SHARED_MEMORY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_shared_memory_t                                            
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                       
        _m00 struct ndis::net_buffer_shared_memory_t* next_shared_memory_segment;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextSharedMemorySegment
        _m01 uint32_t                                 shared_memory_flags;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SharedMemoryFlags
        _m02 void*                                    shared_memory_handle;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SharedMemoryHandle
        _m03 uint32_t                                 shared_memory_offset;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SharedMemoryOffset
        _m04 uint32_t                                 shared_memory_length;        //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SharedMemoryLength
                                                                                 
        SDK_MAGIC_PROPERTIES( "_NET_BUFFER_SHARED_MEMORY.$", 0x20, true, 0xd9d106e629c05d6f );                           
        SDK_FIXED_SIZE( net_buffer_shared_memory_t, 0x20 );                           
    };                                                                           
};
#include "magic/net_buffer_shared_memory_t.end.hpp"
SDK_VERIFY( struct ndis::net_buffer_shared_memory_t, 0x20 );
