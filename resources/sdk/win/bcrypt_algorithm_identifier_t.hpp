#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_algorithm_identifier_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_ALGORITHM_IDENTIFIER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_algorithm_identifier_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 wchar_t* psz_name;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszName
        _m01 uint32_t dw_class;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwClass
        _m02 uint32_t dw_flags;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwFlags
                                        
        SDK_MAGIC_PROPERTIES( "_BCRYPT_ALGORITHM_IDENTIFIER.$", 0x10, true, 0x9b2c2daaa9bd2061 );         
        SDK_FIXED_SIZE( bcrypt_algorithm_identifier_t, 0x10 );         
    };                                  
};
#include "magic/bcrypt_algorithm_identifier_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_algorithm_identifier_t, 0x10 );
