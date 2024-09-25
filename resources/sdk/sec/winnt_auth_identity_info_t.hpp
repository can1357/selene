#pragma once
#include <sdkgen/support_library.hpp>
#include "winnt_auth_identity_a_t.hpp"
#include "winnt_auth_identity_w_t.hpp"
#include "winnt_auth_identity_ex2_t.hpp"
#include "winnt_auth_identity_exa_t.hpp"
#include "winnt_auth_identity_exw_t.hpp"

#include "magic/winnt_auth_identity_info_t.start.hpp"
namespace sec
{
    // [union _SEC_WINNT_AUTH_IDENTITY_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union winnt_auth_identity_info_t                           
    {                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                     
        _m00 struct sec::winnt_auth_identity_exw_t auth_id_exw;  //{ +0x0000    +0x0000    +0x0000    } | .AuthIdExw
        _m01 struct sec::winnt_auth_identity_exa_t auth_id_exa;  //{ +0x0000    +0x0000    +0x0000    } | .AuthIdExa
        _m02 struct sec::winnt_auth_identity_a_t   auth_id_a;    //{ +0x0000    +0x0000    +0x0000    } | .AuthId_a
        _m03 struct sec::winnt_auth_identity_w_t   auth_id_w;    //{ +0x0000    +0x0000    +0x0000    } | .AuthId_w
        _m04 struct sec::winnt_auth_identity_ex2_t auth_id_ex2;  //{ +0x0000    +0x0000    +0x0000    } | .AuthIdEx2
                                                               
        SDK_MAGIC_PROPERTIES( "_SEC_WINNT_AUTH_IDENTITY_INFO.$", 0x48, true, 0xca005720cf443642 );            
        SDK_FIXED_SIZE( winnt_auth_identity_info_t, 0x48 );            
    };                                                         
};
#include "magic/winnt_auth_identity_info_t.end.hpp"
SDK_VERIFY( union sec::winnt_auth_identity_info_t, 0x48 );
