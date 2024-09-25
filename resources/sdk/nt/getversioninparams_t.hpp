#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getversioninparams_t.start.hpp"
namespace nt
{
    // [struct _GETVERSIONINPARAMS]
    // => WDK 10 (NV)
    //
    struct getversioninparams_t                       
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint8_t                 b_version;         //{ +0x0000    } | .bVersion
        _m01 uint8_t                 b_revision;        //{ +0x0001    } | .bRevision
        _m02 uint8_t                 b_reserved;        //{ +0x0002    } | .bReserved
        _m03 uint8_t                 b_ide_device_map;  //{ +0x0003    } | .bIDEDeviceMap
        _m04 uint32_t                f_capabilities;    //{ +0x0004    } | .fCapabilities
        _m05 sdk::array<uint32_t, 4> dw_reserved;       //{ +0x0008    } | .dwReserved
                                                      
        SDK_NONVOL_PROPERTIES( "_GETVERSIONINPARAMS.$", 0x0, false, 0xf8d609d1f1cb865f );                 
        SDK_FIXED_SIZE( getversioninparams_t, 0x18 );                 
    };                                                
};
#include "magic/getversioninparams_t.end.hpp"
SDK_VERIFY( struct nt::getversioninparams_t, 0x18 );
