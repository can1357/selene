#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gdi_nonremote_t.start.hpp"
namespace win
{
    // [struct _GDI_NONREMOTE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gdi_nonremote_t     
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 int32_t f_context;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fContext
                               
        SDK_MAGIC_PROPERTIES( "_GDI_NONREMOTE.$", 0x10, true, 0x7e331895bb1c6733 );          
        SDK_FIXED_SIZE( gdi_nonremote_t, 0x10 );          
    };                         
};
#include "magic/gdi_nonremote_t.end.hpp"
SDK_VERIFY( struct win::gdi_nonremote_t, 0x10 );
