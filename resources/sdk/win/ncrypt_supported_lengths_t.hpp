#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_supported_lengths_t.start.hpp"
namespace win
{
    // [struct __NCRYPT_SUPPORTED_LENGTHS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_supported_lengths_t   
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t dw_min_length;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwMinLength
        _m01 uint32_t dw_max_length;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMaxLength
        _m02 uint32_t dw_increment;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwIncrement
        _m03 uint32_t dw_default_length;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwDefaultLength
                                        
        SDK_MAGIC_PROPERTIES( "__NCRYPT_SUPPORTED_LENGTHS.$", 0x10, true, 0xb05efe9ba6de63a9 );                  
        SDK_FIXED_SIZE( ncrypt_supported_lengths_t, 0x10 );                  
    };                                  
};
#include "magic/ncrypt_supported_lengths_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_supported_lengths_t, 0x10 );
