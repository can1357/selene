#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_system_store_info_t.start.hpp"
namespace win
{
    // [struct _CERT_SYSTEM_STORE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_system_store_info_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t cb_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
                                   
        SDK_MAGIC_PROPERTIES( "_CERT_SYSTEM_STORE_INFO.$", 0x4, true, 0x3d2cc3f81827b542 );        
        SDK_FIXED_SIZE( cert_system_store_info_t, 0x4 );        
    };                             
};
#include "magic/cert_system_store_info_t.end.hpp"
SDK_VERIFY( struct win::cert_system_store_info_t, 0x4 );
