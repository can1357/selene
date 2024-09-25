#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/machine_frame_t.start.hpp"
namespace nt
{
    // [struct _MACHINE_FRAME]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct machine_frame_t    
    {                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint64_t rip;      //{ +0x0000    +0x0000    +0x0000    } | .Rip
        _m01 uint16_t seg_cs;   //{ +0x0008    +0x0008    +0x0008    } | .SegCs
        _m02 uint32_t e_flags;  //{ +0x0010    +0x0010    +0x0010    } | .EFlags
        _m03 uint64_t rsp;      //{ +0x0018    +0x0018    +0x0018    } | .Rsp
        _m04 uint16_t seg_ss;   //{ +0x0020    +0x0020    +0x0020    } | .SegSs
                              
        SDK_MAGIC_PROPERTIES( "_MACHINE_FRAME.$", 0x28, true, 0x287b3efb8bcae50 );        
        SDK_FIXED_SIZE( machine_frame_t, 0x28 );        
    };                        
};
#include "magic/machine_frame_t.end.hpp"
SDK_VERIFY( struct nt::machine_frame_t, 0x28 );
