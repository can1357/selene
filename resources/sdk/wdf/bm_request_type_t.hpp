#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bm_request_type_t.start.hpp"
namespace wdf
{
    // [union _BM_REQUEST_TYPE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union bm_request_type_t
    {                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //             
        _m00 uint8_t b;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .B
                           
        SDK_MAGIC_PROPERTIES( "_BM_REQUEST_TYPE.$", 0x1, true, 0xb60ec3e278bddebd );  
        SDK_FIXED_SIZE( bm_request_type_t, 0x1 );  
    };                     
};
#include "magic/bm_request_type_t.end.hpp"
SDK_VERIFY( union wdf::bm_request_type_t, 0x1 );
