#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/persistence_info_t.start.hpp"
namespace whea
{
    // [union _WHEA_PERSISTENCE_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union persistence_info_t       
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint16_t signature;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Signature
        _m01 uint24_t length;        //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Length
        _m02 uint16_t identifier;    //{ +0x0000@40 +0x0000@40 +0x0000@40 +0x0000@40 +0x0000@40 } | .Identifier
        _m03 uint2_t  attributes;    //{ +0x0000@56 +0x0000@56 +0x0000@56 +0x0000@56 +0x0000@56 } | .Attributes
        _m04 uint1_t  do_not_log;    //{ +0x0000@58 +0x0000@58 +0x0000@58 +0x0000@58 +0x0000@58 } | .DoNotLog
        _m05 uint64_t as_ulonglong;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONGLONG
                                   
        SDK_NONVOL_PROPERTIES( "_WHEA_PERSISTENCE_INFO.$", 0x8, true, 0x24948817cba988b );             
        SDK_FIXED_SIZE( persistence_info_t, 0x8 );             
    };                             
};
#include "magic/persistence_info_t.end.hpp"
SDK_VERIFY( union whea::persistence_info_t, 0x8 );
