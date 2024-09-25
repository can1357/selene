#pragma once
#include <sdkgen/support_library.hpp>
#include "dispatcher_header_t.hpp"

#include "magic/kqueue_t.start.hpp"
namespace nt
{
    // [struct _KQUEUE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kqueue_t                                          
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 struct nt::dispatcher_header_t header;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 nt::list_entry_t               entry_list_head;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .EntryListHead
        _m02 volatile uint32_t              current_count;     //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .CurrentCount
        _m03 uint32_t                       maximum_count;     //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .MaximumCount
        _m04 nt::list_entry_t               thread_list_head;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ThreadListHead
                                                             
        SDK_NONVOL_PROPERTIES( "_KQUEUE.$", 0x40, true, 0x2cbc949066f16c4b );                 
        SDK_FIXED_SIZE( kqueue_t, 0x40 );                    
    };                                                       
};
#include "magic/kqueue_t.end.hpp"
SDK_VERIFY( struct nt::kqueue_t, 0x40 );
