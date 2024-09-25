#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_object_locator_provider_table_t.start.hpp"
namespace win
{
    struct cryptoapi_blob_t;

    // [struct _CRYPT_OBJECT_LOCATOR_PROVIDER_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_object_locator_provider_table_t                             
    {                                                                        
        using pfn_crypt_object_locator_provider_get_t =             sdk::function<int32_t(void*, struct win::cryptoapi_blob_t*, uint32_t, struct win::cryptoapi_blob_t*, uint8_t**, uint32_t*, const wchar_t**, struct win::cryptoapi_blob_t**)>*;                    
        using pfn_crypt_object_locator_provider_free_identifier_t = sdk::function<void(void*, struct win::cryptoapi_blob_t*)>*;                    
        using pfn_free_identifier_t =                               pfn_crypt_object_locator_provider_free_identifier_t ;                    
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                   
        _m00 uint32_t                                    cb_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 pfn_crypt_object_locator_provider_get_t     pfn_get;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnGet
        _m02 sdk::function<void(uint32_t, void*)>*       pfn_release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnRelease
        _m03 sdk::function<void(void*, const wchar_t*)>* pfn_free_password;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pfnFreePassword
        _m04 sdk::function<void(void*, uint8_t*)>*       pfn_free;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pfnFree
        _m05 pfn_free_identifier_t                       pfn_free_identifier;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pfnFreeIdentifier
                                                                             
        SDK_MAGIC_PROPERTIES( "_CRYPT_OBJECT_LOCATOR_PROVIDER_TABLE.$", 0x30, true, 0xe58e7498cf79bfda );                    
        SDK_FIXED_SIZE( crypt_object_locator_provider_table_t, 0x30 );                    
    };                                                                       
};
#include "magic/crypt_object_locator_provider_table_t.end.hpp"
SDK_VERIFY( struct win::crypt_object_locator_provider_table_t, 0x30 );
