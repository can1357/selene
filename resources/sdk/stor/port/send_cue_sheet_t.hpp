#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/send_cue_sheet_t.start.hpp"
namespace stor::port
{
    // [struct _SEND_CUE_SHEET]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct send_cue_sheet_t                        
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 uint8_t                operation_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 sdk::array<uint8_t, 3> cue_sheet_size;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .CueSheetSize
        _m02 uint8_t                control;         //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                   
        SDK_NONVOL_PROPERTIES( "_SEND_CUE_SHEET.$", 0xa, true, 0x105598ebf56dd3dd );               
        SDK_FIXED_SIZE( send_cue_sheet_t, 0xa );               
    };                                             
};
#include "magic/send_cue_sheet_t.end.hpp"
SDK_VERIFY( struct stor::port::send_cue_sheet_t, 0xa );
