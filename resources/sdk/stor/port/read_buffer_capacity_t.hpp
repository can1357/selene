#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_buffer_capacity_t.start.hpp"
namespace stor::port
{
    // [struct _READ_BUFFER_CAPACITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct read_buffer_capacity_t                     
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                block_info;         //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .BlockInfo
        _m02 sdk::array<uint8_t, 2> allocation_length;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AllocationLength
        _m03 uint8_t                control;            //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_READ_BUFFER_CAPACITY.$", 0xa, true, 0xf1a3cc85291d88e7 );                  
        SDK_FIXED_SIZE( read_buffer_capacity_t, 0xa );                  
    };                                                
};
#include "magic/read_buffer_capacity_t.end.hpp"
SDK_VERIFY( struct stor::port::read_buffer_capacity_t, 0xa );
