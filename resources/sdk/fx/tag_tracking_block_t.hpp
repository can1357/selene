#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tag_tracking_block_t.start.hpp"
namespace fx
{
    struct tag_tracking_block_t;
    struct tag_tracking_stack_frames_t;

    // [struct FxTagTrackingBlock]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tag_tracking_block_t                                   
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                        
        _m00 struct fx::tag_tracking_block_t*        next;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 void*                                   tag;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Tag
        _m02 sdk::variant<char*, const char*>        file;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .File
        _m03 int32_t                                 line;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Line
        _m04 int64_t                                 time_locked;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TimeLocked
        _m05 struct fx::tag_tracking_stack_frames_t* stack_frames;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .StackFrames
                                                                  
        SDK_MAGIC_PROPERTIES( "FxTagTrackingBlock.$", 0x30, true, 0x7ace64e5ac15e86f );             
        SDK_FIXED_SIZE( tag_tracking_block_t, 0x30 );             
    };                                                            
};
#include "magic/tag_tracking_block_t.end.hpp"
SDK_VERIFY( struct fx::tag_tracking_block_t, 0x30 );
