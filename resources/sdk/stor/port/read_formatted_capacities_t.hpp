#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_formatted_capacities_t.start.hpp"
namespace stor::port
{
    // [struct _READ_FORMATTED_CAPACITIES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct read_formatted_capacities_t                
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                lun;                //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m02 sdk::array<uint8_t, 2> allocation_length;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AllocationLength
        _m03 uint8_t                control;            //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_READ_FORMATTED_CAPACITIES.$", 0xa, true, 0x50633db43bedd6cf );                  
        SDK_FIXED_SIZE( read_formatted_capacities_t, 0xa );                  
    };                                                
};
#include "magic/read_formatted_capacities_t.end.hpp"
SDK_VERIFY( struct stor::port::read_formatted_capacities_t, 0xa );
