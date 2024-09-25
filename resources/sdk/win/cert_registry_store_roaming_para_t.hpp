#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_registry_store_roaming_para_t.start.hpp"
namespace win
{
    struct hkey_t;

    // [struct _CERT_REGISTRY_STORE_ROAMING_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_registry_store_roaming_para_t         
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                            
        _m00 struct win::hkey_t* h_key;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hKey
        _m01 wchar_t*            pwsz_store_directory;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszStoreDirectory
                                                      
        SDK_MAGIC_PROPERTIES( "_CERT_REGISTRY_STORE_ROAMING_PARA.$", 0x10, true, 0xdef211c98bd60c3d );                     
        SDK_FIXED_SIZE( cert_registry_store_roaming_para_t, 0x10 );                     
    };                                                
};
#include "magic/cert_registry_store_roaming_para_t.end.hpp"
SDK_VERIFY( struct win::cert_registry_store_roaming_para_t, 0x10 );
