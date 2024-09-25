#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_wow64_flags_information_t.start.hpp"
namespace win
{
    // [struct _KEY_WOW64_FLAGS_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_wow64_flags_information_t
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t user_flags;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .UserFlags
                                        
        SDK_NONVOL_PROPERTIES( "_KEY_WOW64_FLAGS_INFORMATION.$", 0x4, true, 0x4c62b42327672ac1 );           
        SDK_FIXED_SIZE( key_wow64_flags_information_t, 0x4 );           
    };                                  
};
#include "magic/key_wow64_flags_information_t.end.hpp"
SDK_VERIFY( struct win::key_wow64_flags_information_t, 0x4 );
