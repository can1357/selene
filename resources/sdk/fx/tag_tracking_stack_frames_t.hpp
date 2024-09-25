#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tag_tracking_stack_frames_t.start.hpp"
namespace fx
{
    // [struct FxTagTrackingStackFrames]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tag_tracking_stack_frames_t           
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                       
        _m00 uint16_t                 num_frames;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumFrames
        _m01 sdk::array<uint64_t, 16> frames;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Frames
                                                 
        SDK_MAGIC_PROPERTIES( "FxTagTrackingStackFrames.$", 0x88, true, 0xdc956b5b5018ab33 );           
        SDK_FIXED_SIZE( tag_tracking_stack_frames_t, 0x88 );           
    };                                           
};
#include "magic/tag_tracking_stack_frames_t.end.hpp"
SDK_VERIFY( struct fx::tag_tracking_stack_frames_t, 0x88 );
