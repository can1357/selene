#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_header_t.hpp"
#include "../ntdll/interlock_seq_t.hpp"
#include "../nt/single_list_entry_t.hpp"

#include "magic/subsegment_t.start.hpp"
namespace heap
{
    struct userdata_header_t;
    struct local_segment_info_t;

    // [struct _HEAP_SUBSEGMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct subsegment_t                                               
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                            
        _m00 struct heap::local_segment_info_t*     local_info;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LocalInfo
        _m01 struct heap::userdata_header_t*        user_blocks;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UserBlocks
        _m02 union nt::slist_header_t               delay_free_list;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DelayFreeList
        _m03 volatile struct ntdll::interlock_seq_t aggregate_exchg;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .AggregateExchg
        _m04 volatile uint16_t                      block_size;         //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .BlockSize
        _m05 uint16_t                               flags;              //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .Flags
        _m06 uint16_t                               block_count;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BlockCount
        _m07 uint8_t                                size_index;         //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .SizeIndex
        _m08 uint8_t                                affinity_index;     //{ +0x002b    +0x002b    +0x002b    +0x002b    } | .AffinityIndex
        _m09 sdk::array<uint32_t, 2>                alignment;          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Alignment
        _m10 volatile uint32_t                      lock;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Lock
        _m11 struct nt::single_list_entry_t         s_free_list_entry;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SFreeListEntry
                                                                      
        SDK_MAGIC_PROPERTIES( "_HEAP_SUBSEGMENT.$", 0x40, true, 0x3aa3b6cb9c3b92e0 );                  
        SDK_FIXED_SIZE( subsegment_t, 0x40 );                         
    };                                                                
};
#include "magic/subsegment_t.end.hpp"
SDK_VERIFY( struct heap::subsegment_t, 0x40 );
