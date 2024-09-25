#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_timestamp_accuracy_t.start.hpp"
namespace win
{
    // [struct _CRYPT_TIMESTAMP_ACCURACY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_timestamp_accuracy_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t dw_seconds;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSeconds
        _m01 uint32_t dw_millis;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMillis
        _m02 uint32_t dw_micros;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwMicros
                                     
        SDK_MAGIC_PROPERTIES( "_CRYPT_TIMESTAMP_ACCURACY.$", 0xc, true, 0xcd98b576b77c732 );           
        SDK_FIXED_SIZE( crypt_timestamp_accuracy_t, 0xc );           
    };                               
};
#include "magic/crypt_timestamp_accuracy_t.end.hpp"
SDK_VERIFY( struct win::crypt_timestamp_accuracy_t, 0xc );
