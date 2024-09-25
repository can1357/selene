#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/page_table_level_desc_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PAGE_TABLE_LEVEL_DESC]
    // => WDK 10 (NV)
    //
    struct page_table_level_desc_t            
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint32_t index_bit_count;          //{ +0x0000    } | .IndexBitCount
        _m01 uint64_t index_mask;               //{ +0x0008    } | .IndexMask
        _m02 uint64_t index_shift;              //{ +0x0010    } | .IndexShift
        _m03 uint64_t lower_levels_mask;        //{ +0x0018    } | .LowerLevelsMask
        _m04 uint64_t entry_coverage_in_pages;  //{ +0x0020    } | .EntryCoverageInPages
                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PAGE_TABLE_LEVEL_DESC.$", 0x0, false, 0x6a08be01f65ffa29 );                        
        SDK_FIXED_SIZE( page_table_level_desc_t, 0x28 );                        
    };                                        
};
#include "magic/page_table_level_desc_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::page_table_level_desc_t, 0x28 );
