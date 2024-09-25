#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/retpoline_routines_t.start.hpp"
namespace rtl
{
    // [struct _RTL_RETPOLINE_ROUTINES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct retpoline_routines_t                            
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                 
        _m00 uint32_t                 unwind_data_offset;    //{ +0x0000    +0x0000    +0x0000    } | .UnwindDataOffset
        _m01 sdk::array<uint32_t, 16> switchtable_jump;      //{ +0x0004    +0x0004    +0x0004    } | .SwitchtableJump
        _m02 uint32_t                 cfg_indirect_rax;      //{ +0x0044    +0x0044    +0x0044    } | .CfgIndirectRax
        _m03 uint32_t                 non_cfg_indirect_rax;  //{ +0x0048    +0x0048    +0x0048    } | .NonCfgIndirectRax
        _m04 uint32_t                 import_r10;            //{ +0x004c    +0x004c    +0x004c    } | .ImportR10
                                                           
        // Windows 11                                      
        //                                                 
        _m05 uint32_t                 jump_hpat;             //{ +0x0050    } | .JumpHpat
                                                           
        SDK_MAGIC_PROPERTIES( "_RTL_RETPOLINE_ROUTINES.$", 0x50, true, 0x6e950e21b87191a3 );                     
        SDK_DYNAMIC_SIZE( retpoline_routines_t );                     
    };                                                     
};
#include "magic/retpoline_routines_t.end.hpp"
