#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/driverstatus_t.start.hpp"
namespace nt
{
    // [struct _DRIVERSTATUS]
    // => WDK 10 (NV)
    //
    struct driverstatus_t                           
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint8_t                 b_driver_error;  //{ +0x0000    } | .bDriverError
        _m01 uint8_t                 b_ide_error;     //{ +0x0001    } | .bIDEError
        _m02 sdk::array<uint8_t, 2>  b_reserved;      //{ +0x0002    } | .bReserved
        _m03 sdk::array<uint32_t, 2> dw_reserved;     //{ +0x0004    } | .dwReserved
                                                    
        SDK_NONVOL_PROPERTIES( "_DRIVERSTATUS.$", 0x0, false, 0x83276f4ce5578f0 );               
        SDK_FIXED_SIZE( driverstatus_t, 0xc );               
    };                                              
};
#include "magic/driverstatus_t.end.hpp"
SDK_VERIFY( struct nt::driverstatus_t, 0xc );
