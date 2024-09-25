#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/heap_event_snapshot_t.start.hpp"
namespace etw
{
    // [struct _ETW_HEAP_EVENT_SNAPSHOT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_event_snapshot_t                                
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                      
        _m00 struct win::system_trace_header_t header;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             heap_handle;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HeapHandle
        _m02 uint64_t                          free_space;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FreeSpace
        _m03 uint64_t                          committed_space;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CommittedSpace
        _m04 uint64_t                          reserved_space;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ReservedSpace
        _m05 uint32_t                          flags;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Flags
        _m06 uint32_t                          process_id;        //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .ProcessId
        _m07 uint64_t                          large_ucr_space;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .LargeUCRSpace
        _m08 uint32_t                          free_list_length;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .FreeListLength
        _m09 uint32_t                          ucr_length;        //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .UCRLength
        _m10 uint64_t                          allocated_space;   //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .AllocatedSpace
                                                                
        SDK_MAGIC_PROPERTIES( "_ETW_HEAP_EVENT_SNAPSHOT.$", 0x60, true, 0xb2e30457820ddb88 );                 
        SDK_FIXED_SIZE( heap_event_snapshot_t, 0x60 );                 
    };                                                          
};
#include "magic/heap_event_snapshot_t.end.hpp"
SDK_VERIFY( struct etw::heap_event_snapshot_t, 0x60 );
