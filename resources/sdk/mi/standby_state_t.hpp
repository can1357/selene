#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../rtl/bitmap_t.hpp"
#include "../nt/slist_header_t.hpp"

namespace mm { struct page_access_info_header_t; }

#include "magic/standby_state_t.start.hpp"
namespace mi
{
    // [struct _MI_STANDBY_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct standby_state_t                                                           
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                           
        _m00 uint64_t                              first_decay_page;                   //{ +0x0020    +0x0000    +0x0000    +0x0000    } | .FirstDecayPage
        _m01 union nt::slist_header_t              pfn_decay_free_s_list;              //{ +0x0030    +0x0010    +0x0010    +0x0010    } | .PfnDecayFreeSList
        _m02 struct mm::page_access_info_header_t* pfn_repurpose_log;                  //{ +0x0040    +0x0020    +0x0138    +0x0020    } | .PfnRepurposeLog
        _m03 struct nt::kdpc_t                     allocate_pfn_repurpose_dpc;         //{ +0x0048    +0x0028    +0x0140    +0x0028    } | .AllocatePfnRepurposeDpc
                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                           
        _m04 union nt::slist_header_t              page_heat_list_slist;               //{ +0x0070    +0x0180    +0x0070    } | .PageHeatListSlist
        _m05 volatile int32_t                      page_heat_list_disable_allocation;  //{ +0x0080    +0x0190    +0x0080    } | .PageHeatListDisableAllocation
                                                                                     
        // Windows 10 v1607                                                          
        //                                                                           
        _m06 volatile uint64_t                     transition_shared_pages;            //{ +0x0000    } | .TransitionSharedPages
        _m07 sdk::array<uint64_t, 3>               transition_shared_pages_peak;       //{ +0x0008    } | .TransitionSharedPagesPeak
                                                                                     
        // Windows 11                                                                
        //                                                                           
        _m08 volatile int32_t                      decay_pfn_lock;                     //{ +0x0020    } | .DecayPfnLock
        _m09 struct rtl::bitmap_t                  decay_pfns_to_be_freed;             //{ +0x0028    } | .DecayPfnsToBeFreed
        _m10 sdk::array<uint32_t, 64>              decay_pfns_to_be_freed_buffer;      //{ +0x0038    } | .DecayPfnsToBeFreedBuffer
                                                                                     
        SDK_MAGIC_PROPERTIES( "_MI_STANDBY_STATE.$", 0x90, true, 0xbfebbd99e90c57c6 );                                  
        SDK_DYNAMIC_SIZE( standby_state_t );                                         
    };                                                                               
};
#include "magic/standby_state_t.end.hpp"
