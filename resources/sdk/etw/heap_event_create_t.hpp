#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/heap_event_create_t.start.hpp"
namespace etw
{
    // [struct _ETW_HEAP_EVENT_CREATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_event_create_t                                
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                    
        _m00 struct win::system_trace_header_t header;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             heap_handle;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HeapHandle
        _m02 uint32_t                          flags;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Flags
        _m03 uint64_t                          reserve_size;    //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ReserveSize
        _m04 uint64_t                          commit_size;     //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .CommitSize
        _m05 uint64_t                          allocated_size;  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .AllocatedSize
                                                              
        SDK_MAGIC_PROPERTIES( "_ETW_HEAP_EVENT_CREATE.$", 0x44, true, 0x18d6123495bd5001 );               
        SDK_FIXED_SIZE( heap_event_create_t, 0x44 );               
    };                                                        
};
#include "magic/heap_event_create_t.end.hpp"
SDK_VERIFY( struct etw::heap_event_create_t, 0x44 );
