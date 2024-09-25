#pragma once
#include <sdkgen/support_library.hpp>
#include "tag_ref_type_t.hpp"

#include "magic/tag_history_t.start.hpp"
namespace fx
{
    struct tag_tracking_stack_frames_t;

    // [struct FxTagHistory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tag_history_t                                          
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                        
        _m00 enum fx::tag_ref_type_t                 ref_type;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RefType
        _m01 uint32_t                                ref_count;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RefCount
        _m02 sdk::variant<char*, const char*>        file;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .File
        _m03 int32_t                                 line;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Line
        _m04 void*                                   tag;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Tag
        _m05 int64_t                                 time;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Time
        _m06 struct fx::tag_tracking_stack_frames_t* stack_frames;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .StackFrames
                                                                  
        SDK_MAGIC_PROPERTIES( "FxTagHistory.$", 0x30, true, 0x5e82ba5502d46787 );             
        SDK_FIXED_SIZE( tag_history_t, 0x30 );                    
    };                                                            
};
#include "magic/tag_history_t.end.hpp"
SDK_VERIFY( struct fx::tag_history_t, 0x30 );
