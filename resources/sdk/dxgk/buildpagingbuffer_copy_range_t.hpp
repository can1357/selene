#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/buildpagingbuffer_copy_range_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BUILDPAGINGBUFFER_COPY_RANGE]
    // => WDK 10 (NV)
    //
    struct buildpagingbuffer_copy_range_t    
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t num_page_table_entries;  //{ +0x0000    } | .NumPageTableEntries
        _m01 uint64_t src_page_table_address;  //{ +0x0008    } | .SrcPageTableAddress
        _m02 uint64_t dst_page_table_address;  //{ +0x0010    } | .DstPageTableAddress
        _m03 uint32_t src_start_pte_index;     //{ +0x0018    } | .SrcStartPteIndex
        _m04 uint32_t dst_start_pte_index;     //{ +0x001c    } | .DstStartPteIndex
                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_BUILDPAGINGBUFFER_COPY_RANGE.$", 0x0, false, 0xf601b3b830d1530d );                       
        SDK_FIXED_SIZE( buildpagingbuffer_copy_range_t, 0x20 );                       
    };                                       
};
#include "magic/buildpagingbuffer_copy_range_t.end.hpp"
SDK_VERIFY( struct dxgk::buildpagingbuffer_copy_range_t, 0x20 );
