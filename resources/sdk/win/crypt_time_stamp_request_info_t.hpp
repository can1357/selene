#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/crypt_time_stamp_request_info_t.start.hpp"
namespace win
{
    struct crypt_attribute_t;

    // [struct _CRYPT_TIME_STAMP_REQUEST_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_time_stamp_request_info_t                           
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                           
        _m00 char*                          psz_time_stamp_algorithm;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszTimeStampAlgorithm
        _m01 char*                          psz_content_type;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszContentType
        _m02 struct win::cryptoapi_blob_t   content;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Content
        _m03 uint32_t                       c_attribute;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cAttribute
        _m04 struct win::crypt_attribute_t* rg_attribute;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .rgAttribute
                                                                     
        SDK_MAGIC_PROPERTIES( "_CRYPT_TIME_STAMP_REQUEST_INFO.$", 0x30, true, 0xfe6e477ef588d279 );                         
        SDK_FIXED_SIZE( crypt_time_stamp_request_info_t, 0x30 );                         
    };                                                               
};
#include "magic/crypt_time_stamp_request_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_time_stamp_request_info_t, 0x30 );
