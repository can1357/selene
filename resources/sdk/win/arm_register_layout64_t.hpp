#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_register_layout64_t.start.hpp"
namespace win
{
    // [class ArmRegisterLayout64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class arm_register_layout64_t    
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint8_t  ngrn;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NGRN
        _m01 uint8_t  nsrn;            //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .NSRN
        _m02 uint16_t entries;         //{ +0x0010    +0x000a    +0x000a    +0x000a    } | .Entries
        _m03 uint32_t nsaa;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NSAA
        _m04 uint32_t current_offset;  //{ +0x0014    +0x0010    +0x0010    +0x0010    } | .CurrentOffset
        _m05 int32_t  run_count;       //{ +0x0018    +0x0014    +0x0014    +0x0014    } | .RunCount
        _m06 int32_t  in_run;          //{ +0x001c    +0x0018    +0x0018    +0x0018    } | .InRun
        _m07 uint16_t total_slots;     //{ +0x0020    +0x001c    +0x001c    +0x001c    } | .TotalSlots
                                     
        SDK_MAGIC_PROPERTIES( "ArmRegisterLayout64.$", 0x38, true, 0xb8726d654f90a277 );               
        SDK_DYNAMIC_SIZE( arm_register_layout64_t );               
    };                               
};
#include "magic/arm_register_layout64_t.end.hpp"
