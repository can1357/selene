#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_capacity16_t.start.hpp"
namespace stor::port
{
    // [struct _READ_CAPACITY16]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct read_capacity16_t                          
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                service_action;     //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .ServiceAction
        _m02 sdk::array<uint8_t, 8> logical_block;      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LogicalBlock
        _m03 sdk::array<uint8_t, 4> allocation_length;  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .AllocationLength
        _m04 uint1_t                pmi;                //{ +0x000e@0  +0x000e@0  +0x000e@0  +0x000e@0  +0x000e@0  } | .PMI
        _m05 uint8_t                control;            //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_READ_CAPACITY16.$", 0x10, true, 0xd2400e10611f47b9 );                  
        SDK_FIXED_SIZE( read_capacity16_t, 0x10 );                  
    };                                                
};
#include "magic/read_capacity16_t.end.hpp"
SDK_VERIFY( struct stor::port::read_capacity16_t, 0x10 );
