#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ssl_ecckey_blob_t.start.hpp"
namespace win
{
    // [struct _SSL_ECCKEY_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ssl_ecckey_blob_t        
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t dw_curve_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwCurveType
        _m01 uint32_t cb_key;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbKey
                                    
        SDK_MAGIC_PROPERTIES( "_SSL_ECCKEY_BLOB.$", 0x8, true, 0xb19d663f2af92edf );              
        SDK_FIXED_SIZE( ssl_ecckey_blob_t, 0x8 );              
    };                              
};
#include "magic/ssl_ecckey_blob_t.end.hpp"
SDK_VERIFY( struct win::ssl_ecckey_blob_t, 0x8 );
