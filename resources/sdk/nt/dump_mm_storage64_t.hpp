#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dump_mm_storage64_t.start.hpp"
namespace nt
{
    // [struct _DUMP_MM_STORAGE64]
    // => WDK 10 (NV)
    //
    struct dump_mm_storage64_t                    
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint32_t version;                      //{ +0x0000    } | .Version
        _m01 uint32_t size;                         //{ +0x0004    } | .Size
        _m02 uint32_t mm_special_pool_tag;          //{ +0x0008    } | .MmSpecialPoolTag
        _m03 uint32_t mi_triage_action_taken;       //{ +0x000c    } | .MiTriageActionTaken
        _m04 uint32_t mm_verify_driver_level;       //{ +0x0010    } | .MmVerifyDriverLevel
        _m05 uint32_t kernel_verifier;              //{ +0x0014    } | .KernelVerifier
        _m06 uint64_t mm_maximum_non_paged_pool;    //{ +0x0018    } | .MmMaximumNonPagedPool
        _m07 uint64_t mm_allocated_non_paged_pool;  //{ +0x0020    } | .MmAllocatedNonPagedPool
        _m08 uint64_t paged_pool_maximum;           //{ +0x0028    } | .PagedPoolMaximum
        _m09 uint64_t paged_pool_allocated;         //{ +0x0030    } | .PagedPoolAllocated
        _m10 uint64_t committed_pages;              //{ +0x0038    } | .CommittedPages
        _m11 uint64_t committed_pages_peak;         //{ +0x0040    } | .CommittedPagesPeak
        _m12 uint64_t commit_limit_maximum;         //{ +0x0048    } | .CommitLimitMaximum
                                                  
        SDK_NONVOL_PROPERTIES( "_DUMP_MM_STORAGE64.$", 0x0, false, 0xfd477612f85b33d4 );                            
        SDK_FIXED_SIZE( dump_mm_storage64_t, 0x50 );                            
    };                                            
};
#include "magic/dump_mm_storage64_t.end.hpp"
SDK_VERIFY( struct nt::dump_mm_storage64_t, 0x50 );
