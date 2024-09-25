#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sd_change_machine_sid_input_t.start.hpp"
namespace win
{
    // [struct _SD_CHANGE_MACHINE_SID_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sd_change_machine_sid_input_t         
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint16_t current_machine_sid_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentMachineSIDOffset
        _m01 uint16_t current_machine_sid_length;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .CurrentMachineSIDLength
        _m02 uint16_t new_machine_sid_offset;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NewMachineSIDOffset
        _m03 uint16_t new_machine_sid_length;      //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .NewMachineSIDLength
                                                 
        SDK_NONVOL_PROPERTIES( "_SD_CHANGE_MACHINE_SID_INPUT.$", 0x8, true, 0xba28a07ff31f9fa2 );                           
        SDK_FIXED_SIZE( sd_change_machine_sid_input_t, 0x8 );                           
    };                                           
};
#include "magic/sd_change_machine_sid_input_t.end.hpp"
SDK_VERIFY( struct win::sd_change_machine_sid_input_t, 0x8 );
