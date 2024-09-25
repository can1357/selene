#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flashwinfo_t.start.hpp"
namespace win
{
    struct hwnd_t;

    // [struct FLASHWINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flashwinfo_t                     
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                  
        _m00 uint32_t            cb_size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::hwnd_t* hwnd;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwnd
        _m02 uint32_t            dw_flags;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwFlags
        _m03 uint32_t            u_count;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .uCount
        _m04 uint32_t            dw_timeout;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwTimeout
                                            
        SDK_MAGIC_PROPERTIES( "FLASHWINFO.$", 0x20, true, 0x3154a873678cfaaf );           
        SDK_FIXED_SIZE( flashwinfo_t, 0x20 );           
    };                                      
};
#include "magic/flashwinfo_t.end.hpp"
SDK_VERIFY( struct win::flashwinfo_t, 0x20 );
