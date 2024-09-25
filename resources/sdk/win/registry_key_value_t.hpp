#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/registry_key_value_t.start.hpp"
namespace win
{
    // [struct RegistryKeyValue]
    // => Windows 10 v1607
    //
    struct registry_key_value_t
    {                          
        // Windows 10 v1607      
        //                  
        _m00 wchar_t* key;       //{ +0x0000    } | .key
        _m01 wchar_t* value;     //{ +0x0008    } | .value
                               
        SDK_MAGIC_PROPERTIES( "RegistryKeyValue.$", 0x0, false, 0xdeecc3fdd75b51dc );      
        SDK_FIXED_SIZE( registry_key_value_t, 0x10 );      
    };                         
};
#include "magic/registry_key_value_t.end.hpp"
SDK_VERIFY( struct win::registry_key_value_t, 0x10 );
