#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_attribute_t.start.hpp"
namespace win
{
    struct cryptoapi_blob_t;

    // [struct _CRYPT_ATTRIBUTE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_attribute_t                          
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                            
        _m00 char*                         psz_obj_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszObjId
        _m01 uint32_t                      c_value;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cValue
        _m02 struct win::cryptoapi_blob_t* rg_value;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .rgValue
                                                      
        SDK_MAGIC_PROPERTIES( "_CRYPT_ATTRIBUTE.$", 0x18, true, 0x34170c43d1c9d5e9 );           
        SDK_FIXED_SIZE( crypt_attribute_t, 0x18 );           
    };                                                
};
#include "magic/crypt_attribute_t.end.hpp"
SDK_VERIFY( struct win::crypt_attribute_t, 0x18 );
