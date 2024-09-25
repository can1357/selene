#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_tpm_specification_info_t.start.hpp"
namespace win
{
    // [struct _CERT_TPM_SPECIFICATION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_tpm_specification_info_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 wchar_t* pwsz_family;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pwszFamily
        _m01 uint32_t dw_level;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwLevel
        _m02 uint32_t dw_revision;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwRevision
                                        
        SDK_MAGIC_PROPERTIES( "_CERT_TPM_SPECIFICATION_INFO.$", 0x10, true, 0x726b6df271316638 );            
        SDK_FIXED_SIZE( cert_tpm_specification_info_t, 0x10 );            
    };                                  
};
#include "magic/cert_tpm_specification_info_t.end.hpp"
SDK_VERIFY( struct win::cert_tpm_specification_info_t, 0x10 );
