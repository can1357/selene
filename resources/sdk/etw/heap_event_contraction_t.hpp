#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/heap_event_contraction_t.start.hpp"
namespace etw
{
    // [struct _ETW_HEAP_EVENT_CONTRACTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_event_contraction_t                              
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                       
        _m00 struct win::system_trace_header_t header;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             heap_handle;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HeapHandle
        _m02 uint64_t                          de_commit_size;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DeCommitSize
        _m03 void*                             de_commit_address;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DeCommitAddress
        _m04 uint64_t                          free_space;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .FreeSpace
        _m05 uint64_t                          committed_space;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CommittedSpace
        _m06 uint64_t                          reserved_space;     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ReservedSpace
        _m07 uint32_t                          no_of_uc_rs;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .NoOfUCRs
        _m08 uint64_t                          allocated_space;    //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .AllocatedSpace
                                                                 
        SDK_MAGIC_PROPERTIES( "_ETW_HEAP_EVENT_CONTRACTION.$", 0x5c, true, 0xd106c991480440a1 );                  
        SDK_FIXED_SIZE( heap_event_contraction_t, 0x5c );                  
    };                                                           
};
#include "magic/heap_event_contraction_t.end.hpp"
SDK_VERIFY( struct etw::heap_event_contraction_t, 0x5c );
