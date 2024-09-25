#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ks_framing_range_t.start.hpp"
namespace ndis
{
    // [struct KS_FRAMING_RANGE]
    // => Windows 10 v1607
    //
    struct ks_framing_range_t        
    {                                
        // Windows 10 v1607               
        //                           
        _m00 uint32_t min_frame_size;  //{ +0x0000    } | .MinFrameSize
        _m01 uint32_t max_frame_size;  //{ +0x0004    } | .MaxFrameSize
        _m02 uint32_t stepping;        //{ +0x0008    } | .Stepping
                                     
        SDK_MAGIC_PROPERTIES( "KS_FRAMING_RANGE.$", 0x0, false, 0xbaca5b0688b28ddd );               
        SDK_FIXED_SIZE( ks_framing_range_t, 0xc );               
    };                               
};
#include "magic/ks_framing_range_t.end.hpp"
SDK_VERIFY( struct ndis::ks_framing_range_t, 0xc );
