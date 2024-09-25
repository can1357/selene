#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_interface_reg_t.start.hpp"
namespace win
{
    // [struct _CRYPT_INTERFACE_REG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_interface_reg_t       
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                             
        _m00 uint32_t  dw_interface;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwInterface
        _m01 uint32_t  dw_flags;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 uint32_t  c_functions;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cFunctions
        _m03 wchar_t** rgpsz_functions;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .rgpszFunctions
                                       
        SDK_MAGIC_PROPERTIES( "_CRYPT_INTERFACE_REG.$", 0x18, true, 0x968379da071f5b28 );                
        SDK_FIXED_SIZE( crypt_interface_reg_t, 0x18 );                
    };                                 
};
#include "magic/crypt_interface_reg_t.end.hpp"
SDK_VERIFY( struct win::crypt_interface_reg_t, 0x18 );
