#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/erase_t.start.hpp"
namespace stor::port
{
    // [struct _ERASE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct erase_t                       
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint8_t operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t _long;                //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Long
        _m02 uint1_t immediate;            //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .Immediate
        _m03 uint3_t logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m04 uint8_t control;              //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Control
                                         
        SDK_NONVOL_PROPERTIES( "_ERASE.$", 0x6, true, 0xc6083ac3a4b96308 );                    
        SDK_FIXED_SIZE( erase_t, 0x6 );                    
    };                                   
};
#include "magic/erase_t.end.hpp"
SDK_VERIFY( struct stor::port::erase_t, 0x6 );
