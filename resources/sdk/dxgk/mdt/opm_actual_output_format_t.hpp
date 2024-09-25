#pragma once
#include <sdkgen/support_library.hpp>
#include "opm_random_number_t.hpp"
#include "opm_interleave_format_t.hpp"

#include "magic/opm_actual_output_format_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_ACTUAL_OUTPUT_FORMAT]
    // => WDK 10 (NV)
    //
    struct opm_actual_output_format_t                                         
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 struct dxgk::mdt::opm_random_number_t   rn_random_number;          //{ +0x0000    } | .rnRandomNumber
        _m01 uint32_t                                ul_status_flags;           //{ +0x0010    } | .ulStatusFlags
        _m02 uint32_t                                ul_display_width;          //{ +0x0014    } | .ulDisplayWidth
        _m03 uint32_t                                ul_display_height;         //{ +0x0018    } | .ulDisplayHeight
        _m04 enum dxgk::mdt::opm_interleave_format_t if_interleave_format;      //{ +0x001c    } | .ifInterleaveFormat
        _m05 uint32_t                                d3d_format;                //{ +0x0020    } | .d3dFormat
        _m06 uint32_t                                ul_frequency_numerator;    //{ +0x0024    } | .ulFrequencyNumerator
        _m07 uint32_t                                ul_frequency_denominator;  //{ +0x0028    } | .ulFrequencyDenominator
                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_ACTUAL_OUTPUT_FORMAT.$", 0x0, false, 0x8950650c5cefd3af );                         
        SDK_FIXED_SIZE( opm_actual_output_format_t, 0x2c );                         
    };                                                                        
};
#include "magic/opm_actual_output_format_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_actual_output_format_t, 0x2c );
