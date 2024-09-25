#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/teb_active_frame_t.start.hpp"
namespace nt
{
    struct teb_active_frame_t;
    struct teb_active_frame_context_t;

    // [struct _TEB_ACTIVE_FRAME]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct teb_active_frame_t                        
    {                                                
        using context_t = sdk::variant<struct nt::teb_active_frame_context_t*, const struct nt::teb_active_frame_context_t*>;         
                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                           
        _m00 uint32_t                       flags;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 struct nt::teb_active_frame_t* previous;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Previous
        _m02 context_t                      context;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Context
                                                     
        SDK_NONVOL_PROPERTIES( "_TEB_ACTIVE_FRAME.$", 0x18, true, 0x68954b71887fd242 );         
        SDK_FIXED_SIZE( teb_active_frame_t, 0x18 );         
    };                                               
};
#include "magic/teb_active_frame_t.end.hpp"
SDK_VERIFY( struct nt::teb_active_frame_t, 0x18 );
