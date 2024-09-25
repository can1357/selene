#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/media_removal_t.start.hpp"
namespace stor::port
{
    // [struct _MEDIA_REMOVAL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct media_removal_t               
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint8_t operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m02 uint1_t prevent;              //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .Prevent
        _m03 uint1_t persistant;           //{ +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  } | .Persistant
        _m04 uint8_t control;              //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Control
                                         
        SDK_NONVOL_PROPERTIES( "_MEDIA_REMOVAL.$", 0x6, true, 0xafe3e8ed916e7676 );                    
        SDK_FIXED_SIZE( media_removal_t, 0x6 );                    
    };                                   
};
#include "magic/media_removal_t.end.hpp"
SDK_VERIFY( struct stor::port::media_removal_t, 0x6 );
