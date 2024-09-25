#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crash_module_t.start.hpp"
namespace sk
{
    // [struct _SK_CRASH_MODULE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crash_module_t                            
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 sdk::array<wchar_t, 32> image_name;       //{ +0x0000    +0x0000    +0x0000    } | .ImageName
        _m01 uint32_t                size_of_image;    //{ +0x0040    +0x0040    +0x0040    } | .SizeOfImage
        _m02 uint32_t                time_date_stamp;  //{ +0x0044    +0x0044    +0x0044    } | .TimeDateStamp
                                                     
        SDK_MAGIC_PROPERTIES( "_SK_CRASH_MODULE.$", 0x48, true, 0x971a2eacad6975c0 );                
        SDK_FIXED_SIZE( crash_module_t, 0x48 );                
    };                                               
};
#include "magic/crash_module_t.end.hpp"
SDK_VERIFY( struct sk::crash_module_t, 0x48 );
