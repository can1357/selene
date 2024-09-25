#pragma once
#include <sdkgen/support_library.hpp>
#include "system_pooltag_t.hpp"

#include "magic/system_pooltag_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_POOLTAG_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_pooltag_information_t                           
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                        
        _m00 uint32_t                                    count;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 sdk::array<struct win::system_pooltag_t, 1> tag_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TagInfo
                                                                  
        SDK_MAGIC_PROPERTIES( "_SYSTEM_POOLTAG_INFORMATION.$", 0x30, true, 0xf17f4c8036157379 );         
        SDK_FIXED_SIZE( system_pooltag_information_t, 0x30 );         
    };                                                            
};
#include "magic/system_pooltag_information_t.end.hpp"
SDK_VERIFY( struct win::system_pooltag_information_t, 0x30 );
