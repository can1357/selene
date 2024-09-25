#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_content_info_sequence_of_any_t.start.hpp"
namespace win
{
    struct cryptoapi_blob_t;

    // [struct _CRYPT_CONTENT_INFO_SEQUENCE_OF_ANY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_content_info_sequence_of_any_t       
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                            
        _m00 char*                         psz_obj_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszObjId
        _m01 uint32_t                      c_value;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cValue
        _m02 struct win::cryptoapi_blob_t* rg_value;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .rgValue
                                                      
        SDK_MAGIC_PROPERTIES( "_CRYPT_CONTENT_INFO_SEQUENCE_OF_ANY.$", 0x18, true, 0xb2bf2f4cc8b801f1 );           
        SDK_FIXED_SIZE( crypt_content_info_sequence_of_any_t, 0x18 );           
    };                                                
};
#include "magic/crypt_content_info_sequence_of_any_t.end.hpp"
SDK_VERIFY( struct win::crypt_content_info_sequence_of_any_t, 0x18 );
