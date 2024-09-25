#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_codeintegrity_unlock_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_CODEINTEGRITY_UNLOCK_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_codeintegrity_unlock_information_t 
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 uint32_t                flags;            //{ +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t                 locked;           //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Locked
        _m02 uint1_t                 unlock_applied;   //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .UnlockApplied
        _m03 uint1_t                 unlock_id_valid;  //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .UnlockIdValid
        _m04 sdk::array<uint8_t, 32> unlock_id;        //{ +0x0004    +0x0004    +0x0004    } | .UnlockId
                                                     
        SDK_MAGIC_PROPERTIES( "_SYSTEM_CODEINTEGRITY_UNLOCK_INFORMATION.$", 0x24, true, 0x4a9251d307e8a3e7 );                
        SDK_FIXED_SIZE( system_codeintegrity_unlock_information_t, 0x24 );                
    };                                               
};
#include "magic/system_codeintegrity_unlock_information_t.end.hpp"
SDK_VERIFY( struct win::system_codeintegrity_unlock_information_t, 0x24 );
