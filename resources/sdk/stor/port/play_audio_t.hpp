#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/play_audio_t.start.hpp"
namespace stor::port
{
    // [struct _PLAY_AUDIO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct play_audio_t                                    
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                 
        _m00 uint8_t                operation_code;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                logical_unit_number;     //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m02 sdk::array<uint8_t, 4> starting_block_address;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StartingBlockAddress
        _m03 sdk::array<uint8_t, 2> play_length;             //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .PlayLength
        _m04 uint8_t                control;                 //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                           
        SDK_NONVOL_PROPERTIES( "_PLAY_AUDIO.$", 0xa, true, 0xceb7e4d75ed3f3c );                       
        SDK_FIXED_SIZE( play_audio_t, 0xa );                       
    };                                                     
};
#include "magic/play_audio_t.end.hpp"
SDK_VERIFY( struct stor::port::play_audio_t, 0xa );
