#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hot_patch_info_t.start.hpp"
namespace image
{
    // [struct _IMAGE_HOT_PATCH_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hot_patch_info_t            
    {                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t version;           //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t size;              //{ +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t sequence_number;   //{ +0x0008    +0x0008    +0x0008    } | .SequenceNumber
        _m03 uint32_t base_image_list;   //{ +0x000c    +0x000c    +0x000c    } | .BaseImageList
        _m04 uint32_t base_image_count;  //{ +0x0010    +0x0010    +0x0010    } | .BaseImageCount
        _m05 uint32_t buffer_offset;     //{ +0x0014    +0x0014    +0x0014    } | .BufferOffset
        _m06 uint32_t extra_patch_size;  //{ +0x0018    +0x0018    +0x0018    } | .ExtraPatchSize
                                       
        SDK_MAGIC_PROPERTIES( "_IMAGE_HOT_PATCH_INFO.$", 0x1c, true, 0x8571a22943464c4b );                 
        SDK_FIXED_SIZE( hot_patch_info_t, 0x1c );                 
    };                                 
};
#include "magic/hot_patch_info_t.end.hpp"
SDK_VERIFY( struct image::hot_patch_info_t, 0x1c );
