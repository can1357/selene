#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_buffer_10_t.start.hpp"
namespace stor::port
{
    // [struct _READ_BUFFER_10]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct read_buffer_10_t                           
    {                                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                mode;               //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Mode
        _m02 uint3_t                mode_specific;      //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .ModeSpecific
        _m03 uint8_t                buffer_id;          //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .BufferId
        _m04 sdk::array<uint8_t, 3> buffer_offset;      //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .BufferOffset
        _m05 sdk::array<uint8_t, 3> allocation_length;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .AllocationLength
        _m06 uint8_t                control;            //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_READ_BUFFER_10.$", 0xa, true, 0xcfd21230efdcc0dc );                  
        SDK_FIXED_SIZE( read_buffer_10_t, 0xa );                  
    };                                                
};
#include "magic/read_buffer_10_t.end.hpp"
SDK_VERIFY( struct stor::port::read_buffer_10_t, 0xa );
