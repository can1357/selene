#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/teb_active_frame_context_t.start.hpp"
namespace nt
{
    // [struct _TEB_ACTIVE_FRAME_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct teb_active_frame_context_t                    
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                               
        _m00 uint32_t                         flags;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 sdk::variant<char*, const char*> frame_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FrameName
                                                         
        SDK_NONVOL_PROPERTIES( "_TEB_ACTIVE_FRAME_CONTEXT.$", 0x10, true, 0x82cb7bafc61055e8 );           
        SDK_FIXED_SIZE( teb_active_frame_context_t, 0x10 );           
    };                                                   
};
#include "magic/teb_active_frame_context_t.end.hpp"
SDK_VERIFY( struct nt::teb_active_frame_context_t, 0x10 );
