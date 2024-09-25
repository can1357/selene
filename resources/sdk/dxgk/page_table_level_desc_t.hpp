#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/page_table_level_desc_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PAGE_TABLE_LEVEL_DESC]
    // => WDK 10 (NV)
    //
    struct page_table_level_desc_t                         
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 uint32_t page_table_index_bit_count;            //{ +0x0000    } | .PageTableIndexBitCount
        _m01 uint32_t page_table_segment_id;                 //{ +0x0004    } | .PageTableSegmentId
        _m02 uint32_t paging_process_page_table_segment_id;  //{ +0x0008    } | .PagingProcessPageTableSegmentId
        _m03 uint32_t page_table_size_in_bytes;              //{ +0x000c    } | .PageTableSizeInBytes
        _m04 uint32_t page_table_alignment_in_bytes;         //{ +0x0010    } | .PageTableAlignmentInBytes
                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_PAGE_TABLE_LEVEL_DESC.$", 0x0, false, 0xc908dc2133a46a98 );                                     
        SDK_FIXED_SIZE( page_table_level_desc_t, 0x14 );                                     
    };                                                     
};
#include "magic/page_table_level_desc_t.end.hpp"
SDK_VERIFY( struct dxgk::page_table_level_desc_t, 0x14 );
