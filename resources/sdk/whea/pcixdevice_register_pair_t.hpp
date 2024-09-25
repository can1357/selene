#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcixdevice_register_pair_t.start.hpp"
namespace whea
{
    // [struct WHEA_PCIXDEVICE_REGISTER_PAIR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pcixdevice_register_pair_t
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint64_t _register;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Register
        _m01 uint64_t data;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Data
                                     
        SDK_NONVOL_PROPERTIES( "WHEA_PCIXDEVICE_REGISTER_PAIR.$", 0x10, true, 0xb4671e3c8f7ddab7 );          
        SDK_FIXED_SIZE( pcixdevice_register_pair_t, 0x10 );          
    };                               
};
#include "magic/pcixdevice_register_pair_t.end.hpp"
SDK_VERIFY( struct whea::pcixdevice_register_pair_t, 0x10 );
