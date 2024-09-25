#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/blank_media_t.start.hpp"
namespace stor::port
{
    // [struct _BLANK_MEDIA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct blank_media_t                             
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 uint8_t                operation_code;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                blank_type;        //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .BlankType
        _m02 uint1_t                immediate;         //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .Immediate
        _m03 sdk::array<uint8_t, 4> address_or_track;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .AddressOrTrack
        _m04 uint8_t                control;           //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                     
        SDK_NONVOL_PROPERTIES( "_BLANK_MEDIA.$", 0xc, true, 0x890e077fe27da27e );                 
        SDK_FIXED_SIZE( blank_media_t, 0xc );                 
    };                                               
};
#include "magic/blank_media_t.end.hpp"
SDK_VERIFY( struct stor::port::blank_media_t, 0xc );
