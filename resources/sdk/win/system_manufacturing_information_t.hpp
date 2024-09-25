#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_manufacturing_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_MANUFACTURING_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_manufacturing_information_t
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                 
        _m00 uint32_t         options;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Options
        _m01 nt::unicode_view profile_name;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProfileName
                                             
        SDK_MAGIC_PROPERTIES( "_SYSTEM_MANUFACTURING_INFORMATION.$", 0x18, true, 0xce87ef5d6b57dd09 );             
        SDK_FIXED_SIZE( system_manufacturing_information_t, 0x18 );             
    };                                       
};
#include "magic/system_manufacturing_information_t.end.hpp"
SDK_VERIFY( struct win::system_manufacturing_information_t, 0x18 );
