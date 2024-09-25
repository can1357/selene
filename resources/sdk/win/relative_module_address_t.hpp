#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/relative_module_address_t.start.hpp"
namespace win
{
    // [struct _RELATIVE_MODULE_ADDRESS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct relative_module_address_t             
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                       
        _m00 uint32_t                address;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .address
        _m01 sdk::array<wchar_t, 32> module_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .moduleName
                                                 
        SDK_MAGIC_PROPERTIES( "_RELATIVE_MODULE_ADDRESS.$", 0x48, true, 0x9d573626b8da1115 );            
        SDK_FIXED_SIZE( relative_module_address_t, 0x48 );            
    };                                           
};
#include "magic/relative_module_address_t.end.hpp"
SDK_VERIFY( struct win::relative_module_address_t, 0x48 );
