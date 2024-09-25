#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3dk/mt/page_table_level_desc_t.hpp"

#include "magic/escape_gpummucaps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_ESCAPE_GPUMMUCAPS]
    // => WDK 10 (NV)
    //
    struct escape_gpummucaps_t                                             
    {                                                                      
        using page_table_level_desk_t = sdk::array<struct d3dk::mt::page_table_level_desc_t, 6>;                                     
                                                                           
        // WDK 10                                                          
        //                                                                 
        _m00 uint8_t                  read_only_memory_supported;            //{ +0x0000    } | .ReadOnlyMemorySupported
        _m01 uint8_t                  no_execute_memory_supported;           //{ +0x0001    } | .NoExecuteMemorySupported
        _m02 uint8_t                  zero_in_pte_supported;                 //{ +0x0002    } | .ZeroInPteSupported
        _m03 uint8_t                  cache_coherent_memory_supported;       //{ +0x0003    } | .CacheCoherentMemorySupported
        _m04 uint8_t                  large_page_supported;                  //{ +0x0004    } | .LargePageSupported
        _m05 uint8_t                  dual_pte_supported;                    //{ +0x0005    } | .DualPteSupported
        _m06 uint8_t                  allow_non_aligned_large_page_address;  //{ +0x0006    } | .AllowNonAlignedLargePageAddress
        _m07 uint32_t                 virtual_address_bit_count;             //{ +0x0008    } | .VirtualAddressBitCount
        _m08 uint32_t                 page_table_level_count;                //{ +0x000c    } | .PageTableLevelCount
        _m09 page_table_level_desk_t  page_table_level_desk;                 //{ +0x0010    } | .PageTableLevelDesk
                                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_ESCAPE_GPUMMUCAPS.$", 0x0, false, 0xc52925126926b75f );                                     
        SDK_FIXED_SIZE( escape_gpummucaps_t, 0x100 );                                     
    };                                                                     
};
#include "magic/escape_gpummucaps_t.end.hpp"
SDK_VERIFY( struct dxgk::escape_gpummucaps_t, 0x100 );
