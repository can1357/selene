#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bank_select_t.start.hpp"
namespace video
{
    // [struct _VIDEO_BANK_SELECT]
    // => WDK 10 (NV)
    //
    struct bank_select_t                            
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint32_t length;                         //{ +0x0000    } | .Length
        _m01 uint32_t size;                           //{ +0x0004    } | .Size
        _m02 uint32_t banking_flags;                  //{ +0x0008    } | .BankingFlags
        _m03 uint32_t banking_type;                   //{ +0x000c    } | .BankingType
        _m04 uint32_t planar_hc_banking_type;         //{ +0x0010    } | .PlanarHCBankingType
        _m05 uint32_t bitmap_width_in_bytes;          //{ +0x0014    } | .BitmapWidthInBytes
        _m06 uint32_t bitmap_size;                    //{ +0x0018    } | .BitmapSize
        _m07 uint32_t granularity;                    //{ +0x001c    } | .Granularity
        _m08 uint32_t planar_hc_granularity;          //{ +0x0020    } | .PlanarHCGranularity
        _m09 uint32_t code_offset;                    //{ +0x0024    } | .CodeOffset
        _m10 uint32_t planar_hc_bank_code_offset;     //{ +0x0028    } | .PlanarHCBankCodeOffset
        _m11 uint32_t planar_hc_enable_code_offset;   //{ +0x002c    } | .PlanarHCEnableCodeOffset
        _m12 uint32_t planar_hc_disable_code_offset;  //{ +0x0030    } | .PlanarHCDisableCodeOffset
                                                    
        SDK_NONVOL_PROPERTIES( "_VIDEO_BANK_SELECT.$", 0x0, false, 0x7933476b0dc2d1f0 );                              
        SDK_FIXED_SIZE( bank_select_t, 0x34 );                              
    };                                              
};
#include "magic/bank_select_t.end.hpp"
SDK_VERIFY( struct video::bank_select_t, 0x34 );
