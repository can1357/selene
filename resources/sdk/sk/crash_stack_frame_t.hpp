#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crash_stack_frame_t.start.hpp"
namespace sk
{
    // [struct _SK_CRASH_STACK_FRAME]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crash_stack_frame_t  
    {                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t module_id;  //{ +0x0000    +0x0000    +0x0000    } | .ModuleId
        _m01 uint32_t rva;        //{ +0x0004    +0x0004    +0x0004    } | .Rva
        _m02 uint64_t pc;         //{ +0x0000    +0x0000    +0x0000    } | .Pc
                                
        SDK_MAGIC_PROPERTIES( "_SK_CRASH_STACK_FRAME.$", 0x8, true, 0x4975ddeb136c44a5 );          
        SDK_FIXED_SIZE( crash_stack_frame_t, 0x8 );          
    };                          
};
#include "magic/crash_stack_frame_t.end.hpp"
SDK_VERIFY( struct sk::crash_stack_frame_t, 0x8 );
