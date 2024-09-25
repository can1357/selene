#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_params_t.start.hpp"
namespace win
{
    // [struct ARM_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct arm_params_t                      
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                   
        _m00 uint16_t            num_entries;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumEntries
        _m01 char                slots;        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Slots
        _m02 sdk::array<char, 1> entry;        //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Entry
                                             
        SDK_MAGIC_PROPERTIES( "ARM_PARAMS.$", 0x4, true, 0x858ff79f676574e );            
        SDK_FIXED_SIZE( arm_params_t, 0x4 );            
    };                                       
};
#include "magic/arm_params_t.end.hpp"
SDK_VERIFY( struct win::arm_params_t, 0x4 );
