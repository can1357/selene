#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_tpm_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_TPM_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_tpm_information_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flags;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                                   
        SDK_MAGIC_PROPERTIES( "_SYSTEM_TPM_INFORMATION.$", 0x4, true, 0x7dba6fa567c86daa );      
        SDK_FIXED_SIZE( system_tpm_information_t, 0x4 );      
    };                             
};
#include "magic/system_tpm_information_t.end.hpp"
SDK_VERIFY( struct win::system_tpm_information_t, 0x4 );
