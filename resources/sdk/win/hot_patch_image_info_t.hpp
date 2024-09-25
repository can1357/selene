#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hot_patch_image_info_t.start.hpp"
namespace win
{
    // [struct _HOT_PATCH_IMAGE_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hot_patch_image_info_t     
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t check_sum;        //{ +0x0000    +0x0000    +0x0000    } | .CheckSum
        _m01 uint32_t time_date_stamp;  //{ +0x0004    +0x0004    +0x0004    } | .TimeDateStamp
                                      
        SDK_MAGIC_PROPERTIES( "_HOT_PATCH_IMAGE_INFO.$", 0x8, true, 0x15e42d2fc0020b50 );                
        SDK_FIXED_SIZE( hot_patch_image_info_t, 0x8 );                
    };                                
};
#include "magic/hot_patch_image_info_t.end.hpp"
SDK_VERIFY( struct win::hot_patch_image_info_t, 0x8 );
