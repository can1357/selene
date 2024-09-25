#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_disk_information_t.start.hpp"
namespace stor::port
{
    // [struct _READ_DISK_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct read_disk_information_t                    
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                lun;                //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m02 sdk::array<uint8_t, 2> allocation_length;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AllocationLength
        _m03 uint8_t                control;            //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_READ_DISK_INFORMATION.$", 0xa, true, 0xca760a0ce742d9eb );                  
        SDK_FIXED_SIZE( read_disk_information_t, 0xa );                  
    };                                                
};
#include "magic/read_disk_information_t.end.hpp"
SDK_VERIFY( struct stor::port::read_disk_information_t, 0xa );
