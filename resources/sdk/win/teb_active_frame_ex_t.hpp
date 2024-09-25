#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/teb_active_frame_t.hpp"

#include "magic/teb_active_frame_ex_t.start.hpp"
namespace win
{
    // [struct _TEB_ACTIVE_FRAME_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct teb_active_frame_ex_t                                
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                      
        _m00 struct nt::teb_active_frame_t basic_frame;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BasicFrame
        _m01 void*                         extension_identifier;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ExtensionIdentifier
                                                                
        SDK_MAGIC_PROPERTIES( "_TEB_ACTIVE_FRAME_EX.$", 0x20, true, 0x3cfa70acbecbb3cf );                     
        SDK_FIXED_SIZE( teb_active_frame_ex_t, 0x20 );                     
    };                                                          
};
#include "magic/teb_active_frame_ex_t.end.hpp"
SDK_VERIFY( struct win::teb_active_frame_ex_t, 0x20 );
