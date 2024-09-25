#pragma once
#include <sdkgen/support_library.hpp>
#include "pagetableupdatemode_t.hpp"

#include "magic/gpummucaps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GPUMMUCAPS]
    // => WDK 10 (NV)
    //
    struct gpummucaps_t                                                                                
    {                                                                                                  
        struct u0_legacy_behaviors_t                                                                   
        {                                                                                              
            // WDK 10                                                                                  
            //                                                                                         
            _m16 uint1_t source_page_table_va_in_transfer;                                               //{ +0x0000@0  } | .SourcePageTableVaInTransfer
                                                                                                       
            SDK_NONVOL_PROPERTIES( "_DXGK_GPUMMUCAPS.LegacyBehaviors.$", 0x0, false, 0xbca4827889a1b2ea );                                                                              
            SDK_FIXED_SIZE( u0_legacy_behaviors_t, 0x4 );                                                                              
        };                                                                                             
                                                                                                       
        // WDK 10                                                                                      
        //                                                                                             
        _m00 uint1_t                                      read_only_memory_supported;                    //{ +0x0000@0  } | .ReadOnlyMemorySupported
        _m01 uint1_t                                      no_execute_memory_supported;                   //{ +0x0000@1  } | .NoExecuteMemorySupported
        _m02 uint1_t                                      zero_in_pte_supported;                         //{ +0x0000@2  } | .ZeroInPteSupported
        _m03 uint1_t                                      explicit_page_table_invalidation;              //{ +0x0000@3  } | .ExplicitPageTableInvalidation
        _m04 uint1_t                                      cache_coherent_memory_supported;               //{ +0x0000@4  } | .CacheCoherentMemorySupported
        _m05 uint1_t                                      page_table_update_require_address_space_idle;  //{ +0x0000@5  } | .PageTableUpdateRequireAddressSpaceIdle
        _m06 uint1_t                                      large_page_supported;                          //{ +0x0000@6  } | .LargePageSupported
        _m07 uint1_t                                      dual_pte_supported;                            //{ +0x0000@7  } | .DualPteSupported
        _m08 uint1_t                                      allow_non_aligned_large_page_address;          //{ +0x0000@8  } | .AllowNonAlignedLargePageAddress
        _m09 uint1_t                                      sys_mem64kb_page_supported;                    //{ +0x0000@9  } | .SysMem64KBPageSupported
        _m10 uint1_t                                      invalid_tlb_entries_not_cached;                //{ +0x0000@10 } | .InvalidTlbEntriesNotCached
        _m11 uint32_t                                     value;                                         //{ +0x0000    } | .Value
        _m12 enum dxgk::pagetableupdatemode_t             page_table_update_mode;                        //{ +0x0004    } | .PageTableUpdateMode
        _m13 uint32_t                                     virtual_address_bit_count;                     //{ +0x0008    } | .VirtualAddressBitCount
        _m14 uint32_t                                     leaf_page_table_size_for64k_pages_in_bytes;    //{ +0x000c    } | .LeafPageTableSizeFor64KPagesInBytes
        _m15 uint32_t                                     page_table_level_count;                        //{ +0x0010    } | .PageTableLevelCount
        _m17 u0_legacy_behaviors_t                        legacy_behaviors;                              //{ +0x0014    } | .LegacyBehaviors
                                                                                                       
        SDK_NONVOL_PROPERTIES( "_DXGK_GPUMMUCAPS.$", 0x0, false, 0x6027ef277dc0b0bd );                                             
        SDK_FIXED_SIZE( gpummucaps_t, 0x18 );                                                          
    };                                                                                                 
};
#include "magic/gpummucaps_t.end.hpp"
SDK_VERIFY( struct dxgk::gpummucaps_t::u0_legacy_behaviors_t, 0x4 );
SDK_VERIFY( struct dxgk::gpummucaps_t, 0x18 );
