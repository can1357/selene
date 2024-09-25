#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hot_patch_hashes_t.start.hpp"
namespace image
{
    // [struct _IMAGE_HOT_PATCH_HASHES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hot_patch_hashes_t               
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m00 sdk::array<uint8_t, 32> sha256;  //{ +0x0000    +0x0000    +0x0000    } | .SHA256
        _m01 sdk::array<uint8_t, 20> sha1;    //{ +0x0020    +0x0020    +0x0020    } | .SHA1
                                            
        SDK_MAGIC_PROPERTIES( "_IMAGE_HOT_PATCH_HASHES.$", 0x34, true, 0x17f00fa286c3a5d4 );       
        SDK_FIXED_SIZE( hot_patch_hashes_t, 0x34 );       
    };                                      
};
#include "magic/hot_patch_hashes_t.end.hpp"
SDK_VERIFY( struct image::hot_patch_hashes_t, 0x34 );
