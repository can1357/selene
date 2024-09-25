#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/n_crypt_algorithm_name_t.start.hpp"
namespace win
{
    // [struct _NCryptAlgorithmName]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct n_crypt_algorithm_name_t     
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 wchar_t* psz_name;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszName
        _m01 uint32_t dw_class;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwClass
        _m02 uint32_t dw_alg_operations;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwAlgOperations
        _m03 uint32_t dw_flags;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwFlags
                                        
        SDK_MAGIC_PROPERTIES( "_NCryptAlgorithmName.$", 0x18, true, 0x497fdf2034ee5c80 );                  
        SDK_FIXED_SIZE( n_crypt_algorithm_name_t, 0x18 );                  
    };                                  
};
#include "magic/n_crypt_algorithm_name_t.end.hpp"
SDK_VERIFY( struct win::n_crypt_algorithm_name_t, 0x18 );
