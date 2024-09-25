#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/root_info_luid_t.start.hpp"
namespace win
{
    // [struct _ROOT_INFO_LUID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct root_info_luid_t     
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t low_part;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LowPart
        _m01 int32_t  high_part;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HighPart
                                
        SDK_MAGIC_PROPERTIES( "_ROOT_INFO_LUID.$", 0x8, true, 0x5c4e6f4550ed3326 );          
        SDK_FIXED_SIZE( root_info_luid_t, 0x8 );          
    };                          
};
#include "magic/root_info_luid_t.end.hpp"
SDK_VERIFY( struct win::root_info_luid_t, 0x8 );
