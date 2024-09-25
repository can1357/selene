#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_flags_information_t.start.hpp"
namespace win
{
    // [struct _KEY_FLAGS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_flags_information_t  
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t wow64_flags;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Wow64Flags
        _m01 uint32_t key_flags;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .KeyFlags
        _m02 uint32_t control_flags;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ControlFlags
                                    
        SDK_MAGIC_PROPERTIES( "_KEY_FLAGS_INFORMATION.$", 0xc, true, 0xb748875fb130247e );              
        SDK_FIXED_SIZE( key_flags_information_t, 0xc );              
    };                              
};
#include "magic/key_flags_information_t.end.hpp"
SDK_VERIFY( struct win::key_flags_information_t, 0xc );
