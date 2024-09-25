#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "../ex/rundown_ref_t.hpp"
#include "../nt/slist_header_t.hpp"

#include "magic/kernel_globals_t.start.hpp"
namespace pf
{
    // [struct _PF_KERNEL_GLOBALS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kernel_globals_t                                       
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                        
        _m00 uint64_t                 access_buffer_age_threshold;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AccessBufferAgeThreshold
        _m01 struct ex::rundown_ref_t access_buffer_ref;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AccessBufferRef
        _m02 struct nt::kevent_t      access_buffer_exists_event;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AccessBufferExistsEvent
        _m03 uint32_t                 access_buffer_max;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AccessBufferMax
        _m04 union nt::slist_header_t access_buffer_list;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AccessBufferList
        _m05 int32_t                  stream_sequence_number;       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .StreamSequenceNumber
        _m06 uint32_t                 flags;                        //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .Flags
        _m07 int32_t                  scenario_prefetch_count;      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ScenarioPrefetchCount
                                                                  
        SDK_MAGIC_PROPERTIES( "_PF_KERNEL_GLOBALS.$", 0x60, true, 0x7e2588602f0bc6a7 );                            
        SDK_FIXED_SIZE( kernel_globals_t, 0x60 );                            
    };                                                            
};
#include "magic/kernel_globals_t.end.hpp"
SDK_VERIFY( struct pf::kernel_globals_t, 0x60 );
