#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_registry_store_client_gpt_para_t.start.hpp"
namespace win
{
    struct hkey_t;

    // [struct _CERT_REGISTRY_STORE_CLIENT_GPT_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_registry_store_client_gpt_para_t
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                     
        _m00 struct win::hkey_t* h_key_base;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hKeyBase
        _m01 wchar_t*            pwsz_reg_path;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszRegPath
                                                
        SDK_MAGIC_PROPERTIES( "_CERT_REGISTRY_STORE_CLIENT_GPT_PARA.$", 0x10, true, 0xa049fadb2390a7a8 );              
        SDK_FIXED_SIZE( cert_registry_store_client_gpt_para_t, 0x10 );              
    };                                          
};
#include "magic/cert_registry_store_client_gpt_para_t.end.hpp"
SDK_VERIFY( struct win::cert_registry_store_client_gpt_para_t, 0x10 );
