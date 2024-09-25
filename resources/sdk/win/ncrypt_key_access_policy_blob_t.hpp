#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_key_access_policy_blob_t.start.hpp"
namespace win
{
    // [struct __NCRYPT_KEY_ACCESS_POLICY_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_key_access_policy_blob_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t dw_version;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 uint32_t dw_policy_flags;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwPolicyFlags
        _m02 uint32_t cb_user_sid;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbUserSid
        _m03 uint32_t cb_application_sid;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cbApplicationSid
                                          
        SDK_MAGIC_PROPERTIES( "__NCRYPT_KEY_ACCESS_POLICY_BLOB.$", 0x10, true, 0xf506f1cc313ce852 );                   
        SDK_FIXED_SIZE( ncrypt_key_access_policy_blob_t, 0x10 );                   
    };                                    
};
#include "magic/ncrypt_key_access_policy_blob_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_key_access_policy_blob_t, 0x10 );
