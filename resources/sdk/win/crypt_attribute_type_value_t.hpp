#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/crypt_attribute_type_value_t.start.hpp"
namespace win
{
    // [struct _CRYPT_ATTRIBUTE_TYPE_VALUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_attribute_type_value_t              
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 char*                        psz_obj_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszObjId
        _m01 struct win::cryptoapi_blob_t value;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Value
                                                     
        SDK_MAGIC_PROPERTIES( "_CRYPT_ATTRIBUTE_TYPE_VALUE.$", 0x18, true, 0xb9f426409a5eb8c );           
        SDK_FIXED_SIZE( crypt_attribute_type_value_t, 0x18 );           
    };                                               
};
#include "magic/crypt_attribute_type_value_t.end.hpp"
SDK_VERIFY( struct win::crypt_attribute_type_value_t, 0x18 );
