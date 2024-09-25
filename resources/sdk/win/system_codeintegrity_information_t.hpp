#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_codeintegrity_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_CODEINTEGRITY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_codeintegrity_information_t
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t length;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t code_integrity_options;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CodeIntegrityOptions
                                             
        SDK_MAGIC_PROPERTIES( "_SYSTEM_CODEINTEGRITY_INFORMATION.$", 0x8, true, 0x766d726edea9b88f );                       
        SDK_FIXED_SIZE( system_codeintegrity_information_t, 0x8 );                       
    };                                       
};
#include "magic/system_codeintegrity_information_t.end.hpp"
SDK_VERIFY( struct win::system_codeintegrity_information_t, 0x8 );
