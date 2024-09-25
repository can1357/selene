#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coserverinfo_t.start.hpp"
namespace win
{
    struct coauthinfo_t;

    // [struct _COSERVERINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coserverinfo_t                           
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                          
        _m00 uint32_t                  dw_reserved1;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwReserved1
        _m01 wchar_t*                  pwsz_name;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszName
        _m02 struct win::coauthinfo_t* p_auth_info;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pAuthInfo
        _m03 uint32_t                  dw_reserved2;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwReserved2
                                                    
        SDK_MAGIC_PROPERTIES( "_COSERVERINFO.$", 0x20, true, 0xba9e61415c8715d7 );             
        SDK_FIXED_SIZE( coserverinfo_t, 0x20 );             
    };                                              
};
#include "magic/coserverinfo_t.end.hpp"
SDK_VERIFY( struct win::coserverinfo_t, 0x20 );
