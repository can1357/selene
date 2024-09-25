#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_pcp_tpm_fw_version_info_t.start.hpp"
namespace win
{
    // [struct __NCRYPT_PCP_TPM_FW_VERSION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_pcp_tpm_fw_version_info_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint16_t major1;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .major1
        _m01 uint16_t major2;                //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .major2
        _m02 uint16_t minor1;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .minor1
        _m03 uint16_t minor2;                //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .minor2
                                           
        SDK_MAGIC_PROPERTIES( "__NCRYPT_PCP_TPM_FW_VERSION_INFO.$", 0x8, true, 0x856cb73fa71af000 );       
        SDK_FIXED_SIZE( ncrypt_pcp_tpm_fw_version_info_t, 0x8 );       
    };                                     
};
#include "magic/ncrypt_pcp_tpm_fw_version_info_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_pcp_tpm_fw_version_info_t, 0x8 );
