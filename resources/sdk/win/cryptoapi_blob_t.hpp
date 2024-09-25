#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cryptoapi_blob_t.start.hpp"
namespace win
{
    // [struct _CRYPTOAPI_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cryptoapi_blob_t   
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t cb_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbData
        _m01 uint8_t* pb_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbData
                              
        SDK_MAGIC_PROPERTIES( "_CRYPTOAPI_BLOB.$", 0x10, true, 0x75e5b824ab235b4e );        
        SDK_FIXED_SIZE( cryptoapi_blob_t, 0x10 );        
    };                        
};
#include "magic/cryptoapi_blob_t.end.hpp"
SDK_VERIFY( struct win::cryptoapi_blob_t, 0x10 );
