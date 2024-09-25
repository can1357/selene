#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setvidpnsourceaddress_input_flags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SETVIDPNSOURCEADDRESS_INPUT_FLAGS]
    // => WDK 10 (NV)
    //
    struct setvidpnsourceaddress_input_flags_t   
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint1_t  flip_stereo;                 //{ +0x0000@0  } | .FlipStereo
        _m01 uint1_t  flip_stereo_temporary_mono;  //{ +0x0000@1  } | .FlipStereoTemporaryMono
        _m02 uint1_t  flip_stereo_prefer_right;    //{ +0x0000@2  } | .FlipStereoPreferRight
        _m03 uint1_t  retry_at_lower_irql;         //{ +0x0000@3  } | .RetryAtLowerIrql
        _m04 uint32_t value;                       //{ +0x0000    } | .Value
                                                 
        SDK_NONVOL_PROPERTIES( "_DXGK_SETVIDPNSOURCEADDRESS_INPUT_FLAGS.$", 0x0, false, 0x4ae6d476b8dd7a5c );                           
        SDK_FIXED_SIZE( setvidpnsourceaddress_input_flags_t, 0x4 );                           
    };                                           
};
#include "magic/setvidpnsourceaddress_input_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::setvidpnsourceaddress_input_flags_t, 0x4 );
