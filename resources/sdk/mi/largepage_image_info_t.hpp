#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/largepage_image_info_t.start.hpp"
namespace mi
{
    // [struct _MI_LARGEPAGE_IMAGE_INFO]
    // => Windows 10 v1607
    //
    struct largepage_image_info_t            
    {                                        
        // Windows 10 v1607                       
        //                                   
        _m00 uint8_t  large_image_bias;        //{ +0x0000    } | .LargeImageBias
        _m01 uint64_t actual_image_view_size;  //{ +0x0008    } | .ActualImageViewSize
                                             
        SDK_MAGIC_PROPERTIES( "_MI_LARGEPAGE_IMAGE_INFO.$", 0x0, false, 0xa562addeb857af0f );                       
        SDK_FIXED_SIZE( largepage_image_info_t, 0x10 );                       
    };                                       
};
#include "magic/largepage_image_info_t.end.hpp"
SDK_VERIFY( struct mi::largepage_image_info_t, 0x10 );
