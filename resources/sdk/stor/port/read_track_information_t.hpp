#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_track_information_t.start.hpp"
namespace stor::port
{
    // [struct _READ_TRACK_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct read_track_information_t                   
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint2_t                track;              //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Track
        _m02 uint3_t                lun;                //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m03 sdk::array<uint8_t, 4> block_address;      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .BlockAddress
        _m04 sdk::array<uint8_t, 2> allocation_length;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AllocationLength
        _m05 uint8_t                control;            //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_READ_TRACK_INFORMATION.$", 0xa, true, 0x5ed0aed37484d39f );                  
        SDK_FIXED_SIZE( read_track_information_t, 0xa );                  
    };                                                
};
#include "magic/read_track_information_t.end.hpp"
SDK_VERIFY( struct stor::port::read_track_information_t, 0xa );
