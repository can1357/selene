#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_sequence_of_any_t.start.hpp"
namespace win
{
    struct cryptoapi_blob_t;

    // [struct _CRYPT_SEQUENCE_OF_ANY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_sequence_of_any_t                  
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                          
        _m00 uint32_t                      c_value;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cValue
        _m01 struct win::cryptoapi_blob_t* rg_value;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgValue
                                                    
        SDK_MAGIC_PROPERTIES( "_CRYPT_SEQUENCE_OF_ANY.$", 0x10, true, 0x8b28843256b87ddd );         
        SDK_FIXED_SIZE( crypt_sequence_of_any_t, 0x10 );         
    };                                              
};
#include "magic/crypt_sequence_of_any_t.end.hpp"
SDK_VERIFY( struct win::crypt_sequence_of_any_t, 0x10 );
