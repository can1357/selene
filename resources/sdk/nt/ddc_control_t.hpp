#pragma once
#include <sdkgen/support_library.hpp>
#include "i2c_callbacks_t.hpp"

#include "magic/ddc_control_t.start.hpp"
namespace nt
{
    // [struct _DDC_CONTROL]
    // => WDK 10 (NV)
    //
    struct ddc_control_t                              
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint32_t                   size;           //{ +0x0000    } | .Size
        _m01 struct nt::i2c_callbacks_t i2c_callbacks;  //{ +0x0008    } | .I2CCallbacks
        _m02 uint8_t                    edid_segment;   //{ +0x0028    } | .EdidSegment
                                                      
        SDK_NONVOL_PROPERTIES( "_DDC_CONTROL.$", 0x0, false, 0x617c2bc22ebfa87c );              
        SDK_FIXED_SIZE( ddc_control_t, 0x30 );              
    };                                                
};
#include "magic/ddc_control_t.end.hpp"
SDK_VERIFY( struct nt::ddc_control_t, 0x30 );
