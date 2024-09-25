#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createdeviceflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_CREATEDEVICEFLAGS]
    // => WDK 10 (NV)
    //
    struct createdeviceflags_t      
    {                               
        // WDK 10                   
        //                          
        _m00 uint1_t  system_device;  //{ +0x0000@0  } | .SystemDevice
        _m01 uint1_t  gdi_device;     //{ +0x0000@1  } | .GdiDevice
        _m02 uint32_t value;          //{ +0x0000    } | .Value
                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_CREATEDEVICEFLAGS.$", 0x0, false, 0x665d58cdfd78b5f8 );              
        SDK_FIXED_SIZE( createdeviceflags_t, 0x4 );              
    };                              
};
#include "magic/createdeviceflags_t.end.hpp"
SDK_VERIFY( struct dxgk::createdeviceflags_t, 0x4 );
