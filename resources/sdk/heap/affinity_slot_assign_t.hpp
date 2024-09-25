#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/affinity_slot_assign_t.start.hpp"
namespace heap
{
    // [struct _HEAP_AFFINITY_SLOT_ASSIGN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct affinity_slot_assign_t                          
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                 
        _m00 struct win::system_trace_header_t header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             heap_handle;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HeapHandle
        _m02 void*                             sub_segment;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SubSegment
        _m03 uint32_t                          slot_index;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SlotIndex
                                                           
        SDK_MAGIC_PROPERTIES( "_HEAP_AFFINITY_SLOT_ASSIGN.$", 0x34, true, 0xc8122dbf136c1563 );            
        SDK_FIXED_SIZE( affinity_slot_assign_t, 0x34 );            
    };                                                     
};
#include "magic/affinity_slot_assign_t.end.hpp"
SDK_VERIFY( struct heap::affinity_slot_assign_t, 0x34 );
