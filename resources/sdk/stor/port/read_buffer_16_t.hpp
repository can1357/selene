#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_buffer_16_t.start.hpp"
namespace stor::port
{
    // [struct _READ_BUFFER_16]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct read_buffer_16_t                           
    {                                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                mode;               //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Mode
        _m02 uint3_t                mode_specific;      //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .ModeSpecific
        _m03 sdk::array<uint8_t, 8> buffer_offset;      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .BufferOffset
        _m04 sdk::array<uint8_t, 4> allocation_length;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .AllocationLength
        _m05 uint8_t                buffer_id;          //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .BufferId
        _m06 uint8_t                control;            //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_READ_BUFFER_16.$", 0x10, true, 0x8a317cf5b937869f );                  
        SDK_FIXED_SIZE( read_buffer_16_t, 0x10 );                  
    };                                                
};
#include "magic/read_buffer_16_t.end.hpp"
SDK_VERIFY( struct stor::port::read_buffer_16_t, 0x10 );
