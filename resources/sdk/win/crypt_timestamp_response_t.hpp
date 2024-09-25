#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_bit_blob_t.hpp"
#include "cryptoapi_blob_t.hpp"

#include "magic/crypt_timestamp_response_t.start.hpp"
namespace win
{
    // [struct _CRYPT_TIMESTAMP_RESPONSE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_timestamp_response_t                  
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m00 uint32_t                     dw_status;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwStatus
        _m01 uint32_t                     c_free_text;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cFreeText
        _m02 wchar_t**                    rg_free_text;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgFreeText
        _m03 struct win::crypt_bit_blob_t failure_info;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FailureInfo
        _m04 struct win::cryptoapi_blob_t content_info;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ContentInfo
                                                       
        SDK_MAGIC_PROPERTIES( "_CRYPT_TIMESTAMP_RESPONSE.$", 0x38, true, 0x9055552dc8055830 );             
        SDK_FIXED_SIZE( crypt_timestamp_response_t, 0x38 );             
    };                                                 
};
#include "magic/crypt_timestamp_response_t.end.hpp"
SDK_VERIFY( struct win::crypt_timestamp_response_t, 0x38 );
