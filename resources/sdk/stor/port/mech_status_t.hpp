#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mech_status_t.start.hpp"
namespace stor::port
{
    // [struct _MECH_STATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mech_status_t                              
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                lun;                //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m02 sdk::array<uint8_t, 2> allocation_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocationLength
        _m03 uint8_t                control;            //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_MECH_STATUS.$", 0xc, true, 0xb9f3ce751ad6652a );                  
        SDK_FIXED_SIZE( mech_status_t, 0xc );                  
    };                                                
};
#include "magic/mech_status_t.end.hpp"
SDK_VERIFY( struct stor::port::mech_status_t, 0xc );
