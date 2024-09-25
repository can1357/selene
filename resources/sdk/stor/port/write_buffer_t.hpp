#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/write_buffer_t.start.hpp"
namespace stor::port
{
    // [struct _WRITE_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct write_buffer_t                                 
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                mode;                   //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Mode
        _m02 uint3_t                mode_specific;          //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .ModeSpecific
        _m03 uint8_t                buffer_id;              //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .BufferID
        _m04 sdk::array<uint8_t, 3> buffer_offset;          //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .BufferOffset
        _m05 sdk::array<uint8_t, 3> parameter_list_length;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .ParameterListLength
        _m06 uint8_t                control;                //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_WRITE_BUFFER.$", 0xa, true, 0x19187255543b1677 );                      
        SDK_FIXED_SIZE( write_buffer_t, 0xa );                      
    };                                                    
};
#include "magic/write_buffer_t.end.hpp"
SDK_VERIFY( struct stor::port::write_buffer_t, 0xa );
