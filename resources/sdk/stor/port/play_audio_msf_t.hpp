#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/play_audio_msf_t.start.hpp"
namespace stor::port
{
    // [struct _PLAY_AUDIO_MSF]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct play_audio_msf_t              
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint8_t operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m02 uint8_t starting_m;           //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .StartingM
        _m03 uint8_t starting_s;           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .StartingS
        _m04 uint8_t starting_f;           //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .StartingF
        _m05 uint8_t ending_m;             //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .EndingM
        _m06 uint8_t ending_s;             //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .EndingS
        _m07 uint8_t ending_f;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .EndingF
        _m08 uint8_t control;              //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                         
        SDK_NONVOL_PROPERTIES( "_PLAY_AUDIO_MSF.$", 0xa, true, 0x5e782b69bdf3c52b );                    
        SDK_FIXED_SIZE( play_audio_msf_t, 0xa );                    
    };                                   
};
#include "magic/play_audio_msf_t.end.hpp"
SDK_VERIFY( struct stor::port::play_audio_msf_t, 0xa );
