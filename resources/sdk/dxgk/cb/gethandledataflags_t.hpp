#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gethandledataflags_t.start.hpp"
namespace dxgk::cb
{
    // [struct _DXGKCB_GETHANDLEDATAFLAGS]
    // => WDK 10 (NV)
    //
    struct gethandledataflags_t       
    {                                 
        // WDK 10                     
        //                            
        _m00 uint1_t  device_specific;  //{ +0x0000@0  } | .DeviceSpecific
        _m01 uint32_t value;            //{ +0x0000    } | .Value
                                      
        SDK_NONVOL_PROPERTIES( "_DXGKCB_GETHANDLEDATAFLAGS.$", 0x0, false, 0x20afc23070d0fac2 );                
        SDK_FIXED_SIZE( gethandledataflags_t, 0x4 );                
    };                                
};
#include "magic/gethandledataflags_t.end.hpp"
SDK_VERIFY( struct dxgk::cb::gethandledataflags_t, 0x4 );
