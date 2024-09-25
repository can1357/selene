#pragma once
#include <sdkgen/support_library.hpp>
#include "error_status_t.hpp"
#include "pmem_page_range_t.hpp"
#include "pmem_error_section_validbits_t.hpp"

#include "magic/pmem_error_section_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PMEM_ERROR_SECTION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pmem_error_section_t                                             
    {                                                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                  
        _m00 union whea::pmem_error_section_validbits_t    valid_bits;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
        _m01 sdk::array<uint8_t, 64>                       location_info;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LocationInfo
        _m02 union whea::error_status_t                    error_status;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ErrorStatus
        _m03 uint32_t                                      nfit_handle;       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .NFITHandle
        _m04 uint32_t                                      page_range_count;  //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .PageRangeCount
        _m05 sdk::array<struct whea::pmem_page_range_t, 1> page_range;        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .PageRange
                                                                            
        SDK_NONVOL_PROPERTIES( "_WHEA_PMEM_ERROR_SECTION.$", 0x70, true, 0x3e423ba831f10fed );                 
        SDK_FIXED_SIZE( pmem_error_section_t, 0x70 );                       
    };                                                                      
};
#include "magic/pmem_error_section_t.end.hpp"
SDK_VERIFY( struct whea::pmem_error_section_t, 0x70 );
