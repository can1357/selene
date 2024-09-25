#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/registry_key_t.start.hpp"
namespace win
{
    struct hkey_t;

    // [class RegistryKey]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class registry_key_t                       
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                     
        _m00 struct win::hkey_t volatile* hkey;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._hkey
                                               
        SDK_MAGIC_PROPERTIES( "RegistryKey.$", 0x8, true, 0x7ed63b721613aabb );     
        SDK_FIXED_SIZE( registry_key_t, 0x8 );     
    };                                         
};
#include "magic/registry_key_t.end.hpp"
SDK_VERIFY( class win::registry_key_t, 0x8 );
