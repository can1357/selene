#pragma once
#include <sdkgen/support_library.hpp>
#include "crash_module_t.hpp"
#include "crash_stack_frame_t.hpp"

#include "magic/crash_minidump_t.start.hpp"
namespace sk
{
    // [struct _SK_CRASH_MINIDUMP]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crash_minidump_t                                               
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                
        _m00 uint32_t                                        size;          //{ +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                                        version;       //{ +0x0004    +0x0004    +0x0004    } | .Version
        _m02 uint32_t                                        module_count;  //{ +0x0008    +0x0008    +0x0008    } | .ModuleCount
        _m03 uint32_t                                        frame_count;   //{ +0x000c    +0x000c    +0x000c    } | .FrameCount
        _m04 sdk::array<struct sk::crash_module_t, 16>       modules;       //{ +0x0010    +0x0010    +0x0010    } | .Modules
        _m05 sdk::array<struct sk::crash_stack_frame_t, 366> stack_frames;  //{ +0x0490    +0x0490    +0x0490    } | .StackFrames
                                                                          
        SDK_MAGIC_PROPERTIES( "_SK_CRASH_MINIDUMP.$", 0x1000, true, 0xc227677cfd14d0e6 );             
        SDK_FIXED_SIZE( crash_minidump_t, 0x1000 );                       
    };                                                                    
};
#include "magic/crash_minidump_t.end.hpp"
SDK_VERIFY( struct sk::crash_minidump_t, 0x1000 );
