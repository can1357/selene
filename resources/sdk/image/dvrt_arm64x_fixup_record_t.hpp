#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dvrt_arm64x_fixup_record_t.start.hpp"
namespace image
{
    // [struct _IMAGE_DVRT_ARM64X_FIXUP_RECORD]
    // => Windows 11
    //
    struct dvrt_arm64x_fixup_record_t
    {                                
        // Windows 11        
        //                   
        _m00 uint12_t offset;          //{ +0x0000@0  } | .Offset
        _m01 uint2_t  type;            //{ +0x0000@12 } | .Type
        _m02 uint2_t  size;            //{ +0x0000@14 } | .Size
                                     
        SDK_MAGIC_PROPERTIES( "_IMAGE_DVRT_ARM64X_FIXUP_RECORD.$", 0x0, false, 0x74db13755ead1025 );       
        SDK_FIXED_SIZE( dvrt_arm64x_fixup_record_t, 0x2 );       
    };                               
};
#include "magic/dvrt_arm64x_fixup_record_t.end.hpp"
SDK_VERIFY( struct image::dvrt_arm64x_fixup_record_t, 0x2 );
