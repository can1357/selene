#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_type_caps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DEVICE_TYPE_CAPS]
    // => WDK 10 (NV)
    //
    struct device_type_caps_t    
    {                            
        // WDK 10                
        //                       
        _m00 uint1_t  discrete;    //{ +0x0000@0  } | .Discrete
        _m01 uint1_t  detachable;  //{ +0x0000@1  } | .Detachable
        _m02 uint32_t value;       //{ +0x0000    } | .Value
                                 
        SDK_NONVOL_PROPERTIES( "_DXGK_DEVICE_TYPE_CAPS.$", 0x0, false, 0xda9e6583bf4d503c );           
        SDK_FIXED_SIZE( device_type_caps_t, 0x4 );           
    };                           
};
#include "magic/device_type_caps_t.end.hpp"
SDK_VERIFY( struct dxgk::device_type_caps_t, 0x4 );
