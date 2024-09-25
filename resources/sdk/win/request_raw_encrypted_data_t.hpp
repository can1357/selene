#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/request_raw_encrypted_data_t.start.hpp"
namespace win
{
    // [struct _REQUEST_RAW_ENCRYPTED_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct request_raw_encrypted_data_t
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 int64_t  file_offset;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
        _m01 uint32_t length;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                       
        SDK_NONVOL_PROPERTIES( "_REQUEST_RAW_ENCRYPTED_DATA.$", 0x10, true, 0x8fdf76e8542d5f0a );            
        SDK_FIXED_SIZE( request_raw_encrypted_data_t, 0x10 );            
    };                                 
};
#include "magic/request_raw_encrypted_data_t.end.hpp"
SDK_VERIFY( struct win::request_raw_encrypted_data_t, 0x10 );
