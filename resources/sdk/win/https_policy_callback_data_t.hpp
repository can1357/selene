#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/https_policy_callback_data_t.start.hpp"
namespace win
{
    // [struct _HTTPSPolicyCallbackData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct https_policy_callback_data_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t cb_struct;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbStruct
        _m01 uint32_t cb_size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m02 uint32_t dw_auth_type;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwAuthType
        _m03 uint32_t fdw_checks;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .fdwChecks
        _m04 wchar_t* pwsz_server_name;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pwszServerName
                                       
        SDK_MAGIC_PROPERTIES( "_HTTPSPolicyCallbackData.$", 0x18, true, 0x92cde130bfbd214c );                 
        SDK_FIXED_SIZE( https_policy_callback_data_t, 0x18 );                 
    };                                 
};
#include "magic/https_policy_callback_data_t.end.hpp"
SDK_VERIFY( struct win::https_policy_callback_data_t, 0x18 );
