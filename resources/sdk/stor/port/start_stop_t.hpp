#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/start_stop_t.start.hpp"
namespace stor::port
{
    // [struct _START_STOP]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct start_stop_t                  
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint8_t operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t immediate;            //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Immediate
        _m02 uint3_t logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m03 uint1_t start;                //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .Start
        _m04 uint1_t load_eject;           //{ +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  } | .LoadEject
        _m05 uint8_t control;              //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Control
                                         
        SDK_NONVOL_PROPERTIES( "_START_STOP.$", 0x6, true, 0xb82622c45b8d6bfd );                    
        SDK_FIXED_SIZE( start_stop_t, 0x6 );                    
    };                                   
};
#include "magic/start_stop_t.end.hpp"
SDK_VERIFY( struct stor::port::start_stop_t, 0x6 );
