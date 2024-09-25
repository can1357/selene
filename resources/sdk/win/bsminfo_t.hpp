#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/luid_t.hpp"

#include "magic/bsminfo_t.start.hpp"
namespace win
{
    struct hwnd_t;
    struct hdesk_t;

    // [struct BSMINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bsminfo_t                      
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                
        _m00 uint32_t             cb_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::hdesk_t* hdesk;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hdesk
        _m02 struct win::hwnd_t*  hwnd;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hwnd
        _m03 struct nt::luid_t    luid;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .luid
                                          
        SDK_MAGIC_PROPERTIES( "BSMINFO.$", 0x20, true, 0x2bed1637ed80c9e6 );        
        SDK_FIXED_SIZE( bsminfo_t, 0x20 );        
    };                                    
};
#include "magic/bsminfo_t.end.hpp"
SDK_VERIFY( struct win::bsminfo_t, 0x20 );
