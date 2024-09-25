#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pm_counted_string_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PM_COUNTED_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pm_counted_string_t              
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m00 uint16_t                length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 sdk::array<wchar_t, 65> string;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .String
                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_PM_COUNTED_STRING.$", 0x84, true, 0x5a801bca5eb3e247 );       
        SDK_FIXED_SIZE( pm_counted_string_t, 0x84 );       
    };                                      
};
#include "magic/pm_counted_string_t.end.hpp"
SDK_VERIFY( struct ndis::pm_counted_string_t, 0x84 );
