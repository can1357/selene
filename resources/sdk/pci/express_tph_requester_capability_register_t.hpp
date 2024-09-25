#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_tph_requester_capability_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_tph_requester_capability_register_t  
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                             
        _m00 uint1_t  no_st_mode_supported;              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .NoStModeSupported
        _m01 uint1_t  interupt_vector_mode_supported;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .InteruptVectorModeSupported
        _m02 uint1_t  device_specific_mode_supported;    //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeviceSpecificModeSupported
        _m03 uint5_t  rsvd;                              //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Rsvd
        _m04 uint1_t  extended_tph_requester_supported;  //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .ExtendedTPHRequesterSupported
        _m05 uint2_t  st_table_location;                 //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .StTableLocation
        _m06 uint5_t  rsvd2;                             //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .Rsvd2
        _m07 uint11_t st_table_size;                     //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .StTableSize
        _m08 uint5_t  rsvd3;                             //{ +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 } | .Rsvd3
        _m09 uint32_t as_ulong;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                       
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER.$", 0x4, true, 0xfcd0b4b17a60a331 );                                 
        SDK_FIXED_SIZE( express_tph_requester_capability_register_t, 0x4 );                                 
    };                                                 
};
#include "magic/express_tph_requester_capability_register_t.end.hpp"
SDK_VERIFY( union pci::express_tph_requester_capability_register_t, 0x4 );
