#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crash_module32_t.start.hpp"
namespace nt
{
    // [struct _CRASH_MODULE32]
    // => WDK 10 (NV)
    //
    struct crash_module32_t                     
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint32_t         base_of_image;      //{ +0x0000    } | .BaseOfImage
        _m01 uint32_t         size_of_image;      //{ +0x0004    } | .SizeOfImage
        _m02 uint32_t         image_name_length;  //{ +0x0008    } | .ImageNameLength
        _m03 sdk::array<char> image_name;         //{ +0x000c    } | .ImageName
                                                
        SDK_NONVOL_PROPERTIES( "_CRASH_MODULE32.$", 0x0, false, 0x4a92cb2fc57a6378 );                  
        SDK_FIXED_SIZE( crash_module32_t, 0xc );                  
    };                                          
};
#include "magic/crash_module32_t.end.hpp"
SDK_VERIFY( struct nt::crash_module32_t, 0xc );
