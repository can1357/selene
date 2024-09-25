#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mminpage_flags_t.start.hpp"
namespace nt
{
    // [struct _MMINPAGE_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mminpage_flags_t                     
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                      
        _m00 uint1_t get_extents;                 //{ +0x0000@1  +0x0000@0  +0x0000@0  +0x0000@0  } | .GetExtents
        _m01 uint2_t prefetch_system_vm_type;     //{ +0x0001@0  +0x0000@1  +0x0000@1  +0x0000@1  } | .PrefetchSystemVmType
        _m02 uint1_t va_prefetch_read_block;      //{ +0x0001@2  +0x0000@3  +0x0000@3  +0x0000@3  } | .VaPrefetchReadBlock
        _m03 uint1_t collided_flow_through;       //{ +0x0001@3  +0x0000@4  +0x0000@4  +0x0000@4  } | .CollidedFlowThrough
        _m04 uint1_t force_collisions;            //{ +0x0001@4  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceCollisions
        _m05 uint1_t in_page_expanded;            //{ +0x0001@5  +0x0000@6  +0x0000@6  +0x0000@6  } | .InPageExpanded
        _m06 uint1_t issued_at_low_priority;      //{ +0x0001@6  +0x0000@7  +0x0000@7  +0x0000@7  } | .IssuedAtLowPriority
        _m07 uint1_t fault_from_store;            //{ +0x0001@7  +0x0000@8  +0x0000@8  +0x0000@8  } | .FaultFromStore
        _m08 uint3_t page_priority;               //{ +0x0002@0  +0x0000@9  +0x0000@9  +0x0000@9  } | .PagePriority
        _m09 uint3_t clustered_page_priority;     //{ +0x0002@4  +0x0000@12 +0x0000@12 +0x0000@12 } | .ClusteredPagePriority
        _m10 uint1_t make_cluster_valid;          //{ +0x0002@7  +0x0000@15 +0x0000@15 +0x0000@15 } | .MakeClusterValid
        _m11 uint1_t perform_relocations;         //{ +0x0002@3  +0x0000@16 +0x0000@16 +0x0000@16 } | .PerformRelocations
        _m12 uint1_t zero_last_page;              //{ +0x0003@0  +0x0000@17 +0x0000@17 +0x0000@17 } | .ZeroLastPage
        _m13 uint1_t user_fault;                  //{ +0x0003@1  +0x0000@18 +0x0000@18 +0x0000@18 } | .UserFault
        _m14 uint1_t standby_protection_needed;   //{ +0x0003@2  +0x0000@19 +0x0000@19 +0x0000@19 } | .StandbyProtectionNeeded
        _m15 uint1_t pte_changed;                 //{ +0x0003@3  +0x0000@20 +0x0000@20 +0x0000@20 } | .PteChanged
        _m16 uint1_t page_file_fault;             //{ +0x0003@4  +0x0000@21 +0x0000@21 +0x0000@21 } | .PageFileFault
        _m17 uint1_t page_file_page_hash_active;  //{ +0x0003@5  +0x0000@22 +0x0000@22 +0x0000@22 } | .PageFilePageHashActive
        _m18 uint1_t coalesced_io;                //{ +0x0003@6  +0x0000@23 +0x0000@23 +0x0000@23 } | .CoalescedIo
        _m19 uint1_t vm_lock_not_needed;          //{ +0x0003@7  +0x0000@24 +0x0000@24 +0x0000@24 } | .VmLockNotNeeded
                                                
        // Windows 10 v1607                           
        //                                      
        _m20 uint1_t inject_retry;                //{ +0x0000@0  } | .InjectRetry
        _m21 uint6_t cross_thread_padding;        //{ +0x0000@2  } | .CrossThreadPadding
                                                
        SDK_MAGIC_PROPERTIES( "_MMINPAGE_FLAGS.$", 0x4, true, 0xaa8a3fe3fae00ae3 );                           
        SDK_FIXED_SIZE( mminpage_flags_t, 0x4 );                           
    };                                          
};
#include "magic/mminpage_flags_t.end.hpp"
SDK_VERIFY( struct nt::mminpage_flags_t, 0x4 );
