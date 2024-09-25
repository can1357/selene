#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stowed_exception_information_header_t.start.hpp"
namespace win
{
    // [struct _STOWED_EXCEPTION_INFORMATION_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stowed_exception_information_header_t
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t size;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t signature;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Signature
                                                
        SDK_MAGIC_PROPERTIES( "_STOWED_EXCEPTION_INFORMATION_HEADER.$", 0x8, true, 0xd9d52ad827eafd94 );          
        SDK_FIXED_SIZE( stowed_exception_information_header_t, 0x8 );          
    };                                          
};
#include "magic/stowed_exception_information_header_t.end.hpp"
SDK_VERIFY( struct win::stowed_exception_information_header_t, 0x8 );
