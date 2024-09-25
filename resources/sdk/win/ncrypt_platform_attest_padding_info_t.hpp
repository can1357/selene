#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_platform_attest_padding_info_t.start.hpp"
namespace win
{
    // [struct _NCRYPT_PLATFORM_ATTEST_PADDING_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_platform_attest_padding_info_t
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t magic;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .magic
        _m01 uint32_t pcr_mask;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .pcrMask
                                                
        SDK_MAGIC_PROPERTIES( "_NCRYPT_PLATFORM_ATTEST_PADDING_INFO.$", 0x8, true, 0xc19f600cfa0a9f01 );         
        SDK_FIXED_SIZE( ncrypt_platform_attest_padding_info_t, 0x8 );         
    };                                          
};
#include "magic/ncrypt_platform_attest_padding_info_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_platform_attest_padding_info_t, 0x8 );
