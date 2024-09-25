#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/error_status_t.start.hpp"
namespace whea
{
    // [union _WHEA_ERROR_STATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union error_status_t           
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint64_t error_status;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ErrorStatus
        _m01 uint8_t  error_type;    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .ErrorType
        _m02 uint1_t  address;       //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Address
        _m03 uint1_t  control;       //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .Control
        _m04 uint1_t  data;          //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .Data
        _m05 uint1_t  responder;     //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .Responder
        _m06 uint1_t  requester;     //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .Requester
        _m07 uint1_t  first_error;   //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .FirstError
        _m08 uint1_t  overflow;      //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .Overflow
                                   
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_STATUS.$", 0x8, true, 0x6985f58ec76cf755 );             
        SDK_FIXED_SIZE( error_status_t, 0x8 );             
    };                             
};
#include "magic/error_status_t.end.hpp"
SDK_VERIFY( union whea::error_status_t, 0x8 );
