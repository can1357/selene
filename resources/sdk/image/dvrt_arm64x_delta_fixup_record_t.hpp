#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dvrt_arm64x_delta_fixup_record_t.start.hpp"
namespace image
{
    // [struct _IMAGE_DVRT_ARM64X_DELTA_FIXUP_RECORD]
    // => Windows 11
    //
    struct dvrt_arm64x_delta_fixup_record_t
    {                                      
        // Windows 11        
        //                   
        _m00 uint12_t offset;                //{ +0x0000@0  } | .Offset
        _m01 uint2_t  type;                  //{ +0x0000@12 } | .Type
        _m02 uint1_t  sign;                  //{ +0x0000@14 } | .Sign
        _m03 uint1_t  scale;                 //{ +0x0000@15 } | .Scale
                                           
        SDK_MAGIC_PROPERTIES( "_IMAGE_DVRT_ARM64X_DELTA_FIXUP_RECORD.$", 0x0, false, 0xd2498ab65f7eb1a0 );       
        SDK_FIXED_SIZE( dvrt_arm64x_delta_fixup_record_t, 0x2 );       
    };                                     
};
#include "magic/dvrt_arm64x_delta_fixup_record_t.end.hpp"
SDK_VERIFY( struct image::dvrt_arm64x_delta_fixup_record_t, 0x2 );
