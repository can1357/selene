#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_blob_array_t.start.hpp"
namespace win
{
    struct cryptoapi_blob_t;

    // [struct _CRYPT_BLOB_ARRAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_blob_array_t                      
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                         
        _m00 uint32_t                      c_blob;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cBlob
        _m01 struct win::cryptoapi_blob_t* rg_blob;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgBlob
                                                   
        SDK_MAGIC_PROPERTIES( "_CRYPT_BLOB_ARRAY.$", 0x10, true, 0xdeb60f9dd83f71aa );        
        SDK_FIXED_SIZE( crypt_blob_array_t, 0x10 );        
    };                                             
};
#include "magic/crypt_blob_array_t.end.hpp"
SDK_VERIFY( struct win::crypt_blob_array_t, 0x10 );
