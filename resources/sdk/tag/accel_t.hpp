#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/accel_t.start.hpp"
namespace tag
{
    // [struct tagACCEL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct accel_t           
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint8_t  f_virt;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fVirt
        _m01 uint16_t key;     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .key
        _m02 uint16_t cmd;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cmd
                             
        SDK_MAGIC_PROPERTIES( "tagACCEL.$", 0x6, true, 0xf325495f2b77c1fa );       
        SDK_FIXED_SIZE( accel_t, 0x6 );       
    };                       
};
#include "magic/accel_t.end.hpp"
SDK_VERIFY( struct tag::accel_t, 0x6 );
