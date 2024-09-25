#pragma once
#include <sdkgen/support_library.hpp>
#include "dispatcher_header_t.hpp"

#include "magic/kpriqueue_t.start.hpp"
namespace nt
{
    // [struct _KPRIQUEUE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kpriqueue_t                                         
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                     
        _m00 struct nt::dispatcher_header_t   header;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::array<nt::list_entry_t, 32> entry_list_head;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EntryListHead
        _m02 sdk::array<volatile int32_t, 32> current_count;     //{ +0x0218    +0x0218    +0x0218    +0x0218    } | .CurrentCount
        _m03 uint32_t                         maximum_count;     //{ +0x0298    +0x0298    +0x0298    +0x0298    } | .MaximumCount
        _m04 nt::list_entry_t                 thread_list_head;  //{ +0x02a0    +0x02a0    +0x02a0    +0x02a0    } | .ThreadListHead
                                                               
        SDK_MAGIC_PROPERTIES( "_KPRIQUEUE.$", 0x2b0, true, 0xb2105a41fac0127 );                 
        SDK_DYNAMIC_SIZE( kpriqueue_t );                       
    };                                                         
};
#include "magic/kpriqueue_t.end.hpp"
