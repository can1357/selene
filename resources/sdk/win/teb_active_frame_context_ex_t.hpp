#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/teb_active_frame_context_t.hpp"

#include "magic/teb_active_frame_context_ex_t.start.hpp"
namespace win
{
    // [struct _TEB_ACTIVE_FRAME_CONTEXT_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct teb_active_frame_context_ex_t                           
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                         
        _m00 struct nt::teb_active_frame_context_t basic_context;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BasicContext
        _m01 const char*                           source_location;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SourceLocation
                                                                   
        SDK_MAGIC_PROPERTIES( "_TEB_ACTIVE_FRAME_CONTEXT_EX.$", 0x18, true, 0xb11e585a07965fc7 );                
        SDK_FIXED_SIZE( teb_active_frame_context_ex_t, 0x18 );                
    };                                                             
};
#include "magic/teb_active_frame_context_ex_t.end.hpp"
SDK_VERIFY( struct win::teb_active_frame_context_ex_t, 0x18 );
