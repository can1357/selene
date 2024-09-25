#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unmap_t.start.hpp"
namespace stor::port
{
    // [struct _UNMAP]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct unmap_t                                    
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                anchor;             //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Anchor
        _m02 uint5_t                group_number;       //{ +0x0006@0  +0x0006@0  +0x0006@0  +0x0006@0  +0x0006@0  } | .GroupNumber
        _m03 sdk::array<uint8_t, 2> allocation_length;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AllocationLength
        _m04 uint8_t                control;            //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_UNMAP.$", 0xa, true, 0x7593527fc88925b2 );                  
        SDK_FIXED_SIZE( unmap_t, 0xa );                  
    };                                                
};
#include "magic/unmap_t.end.hpp"
SDK_VERIFY( struct stor::port::unmap_t, 0xa );
