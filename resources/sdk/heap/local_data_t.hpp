#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_header_t.hpp"

namespace ntdll { struct lfh_block_zone_t; }
namespace ntdll { struct lfh_heap_t;       }

#include "magic/local_data_t.start.hpp"
namespace heap
{
    // [struct _HEAP_LOCAL_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct local_data_t                                                     
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                  
        _m00 union nt::slist_header_t                 deleted_sub_segments;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeletedSubSegments
        _m01 struct ntdll::lfh_block_zone_t volatile* crt_zone;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CrtZone
        _m02 struct ntdll::lfh_heap_t*                low_frag_heap;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LowFragHeap
        _m03 uint32_t                                 sequence;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Sequence
        _m04 uint32_t                                 delete_rate_threshold;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .DeleteRateThreshold
                                                                            
        SDK_MAGIC_PROPERTIES( "_HEAP_LOCAL_DATA.$", 0x30, true, 0xd6788a41ab63ac2e );                      
        SDK_FIXED_SIZE( local_data_t, 0x30 );                               
    };                                                                      
};
#include "magic/local_data_t.end.hpp"
SDK_VERIFY( struct heap::local_data_t, 0x30 );
