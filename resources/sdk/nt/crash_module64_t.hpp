#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crash_module64_t.start.hpp"
namespace nt
{
    // [struct _CRASH_MODULE64]
    // => WDK 10 (NV)
    //
    struct crash_module64_t                     
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint64_t         base_of_image;      //{ +0x0000    } | .BaseOfImage
        _m01 uint32_t         size_of_image;      //{ +0x0008    } | .SizeOfImage
        _m02 uint32_t         image_name_length;  //{ +0x000c    } | .ImageNameLength
        _m03 sdk::array<char> image_name;         //{ +0x0010    } | .ImageName
                                                
        SDK_NONVOL_PROPERTIES( "_CRASH_MODULE64.$", 0x0, false, 0x69424e0bcecd0d84 );                  
        SDK_FIXED_SIZE( crash_module64_t, 0x10 );                  
    };                                          
};
#include "magic/crash_module64_t.end.hpp"
SDK_VERIFY( struct nt::crash_module64_t, 0x10 );
