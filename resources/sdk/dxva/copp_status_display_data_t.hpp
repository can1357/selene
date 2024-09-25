#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/copp_status_display_data_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_COPPStatusDisplayData]
    // => WDK 10 (NV)
    //
    struct copp_status_display_data_t           
    {                                           
        // WDK 10                               
        //                                      
        _m00 struct nt::guid_t r_app;             //{ +0x0000    } | .rApp
        _m01 uint32_t          dw_flags;          //{ +0x0010    } | .dwFlags
        _m02 uint32_t          display_width;     //{ +0x0014    } | .DisplayWidth
        _m03 uint32_t          display_height;    //{ +0x0018    } | .DisplayHeight
        _m04 uint32_t          format;            //{ +0x001c    } | .Format
        _m05 uint32_t          d3d_format;        //{ +0x0020    } | .d3dFormat
        _m06 uint32_t          freq_numerator;    //{ +0x0024    } | .FreqNumerator
        _m07 uint32_t          freq_denominator;  //{ +0x0028    } | .FreqDenominator
                                                
        SDK_NONVOL_PROPERTIES( "_DXVA_COPPStatusDisplayData.$", 0x0, false, 0xb2f2e6a45b204a66 );                 
        SDK_FIXED_SIZE( copp_status_display_data_t, 0x2c );                 
    };                                          
};
#include "magic/copp_status_display_data_t.end.hpp"
SDK_VERIFY( struct dxva::copp_status_display_data_t, 0x2c );
