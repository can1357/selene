#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_system_store_relocate_para_t.start.hpp"
namespace win
{
    struct hkey_t;

    // [struct _CERT_SYSTEM_STORE_RELOCATE_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_system_store_relocate_para_t       
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                         
        _m00 struct win::hkey_t* h_key_base;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hKeyBase
        _m01 void*               pv_base;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pvBase
        _m02 void*               pv_system_store;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pvSystemStore
        _m03 const char*         psz_system_store;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszSystemStore
        _m04 const wchar_t*      pwsz_system_store;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszSystemStore
                                                   
        SDK_MAGIC_PROPERTIES( "_CERT_SYSTEM_STORE_RELOCATE_PARA.$", 0x10, true, 0x3211741b6bf512e6 );                  
        SDK_FIXED_SIZE( cert_system_store_relocate_para_t, 0x10 );                  
    };                                             
};
#include "magic/cert_system_store_relocate_para_t.end.hpp"
SDK_VERIFY( struct win::cert_system_store_relocate_para_t, 0x10 );
