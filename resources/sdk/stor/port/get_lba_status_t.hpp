#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_lba_status_t.start.hpp"
namespace stor::port
{
    // [struct _GET_LBA_STATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct get_lba_status_t                           
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                service_action;     //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .ServiceAction
        _m02 sdk::array<uint8_t, 8> starting_lba;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StartingLBA
        _m03 sdk::array<uint8_t, 4> allocation_length;  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .AllocationLength
        _m04 uint8_t                control;            //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_GET_LBA_STATUS.$", 0x10, true, 0x3b3ced49a33f1932 );                  
        SDK_FIXED_SIZE( get_lba_status_t, 0x10 );                  
    };                                                
};
#include "magic/get_lba_status_t.end.hpp"
SDK_VERIFY( struct stor::port::get_lba_status_t, 0x10 );
