#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_pcp_raw_policydigest_t.start.hpp"
namespace win
{
    // [struct __NCRYPT_PCP_RAW_POLICYDIGEST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_pcp_raw_policydigest_t
    {                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t dw_version;         //{ +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 uint32_t cb_digest;          //{ +0x0004    +0x0004    +0x0004    } | .cbDigest
                                        
        SDK_MAGIC_PROPERTIES( "__NCRYPT_PCP_RAW_POLICYDIGEST.$", 0x8, true, 0xe6eeb7029b06af7f );           
        SDK_FIXED_SIZE( ncrypt_pcp_raw_policydigest_t, 0x8 );           
    };                                  
};
#include "magic/ncrypt_pcp_raw_policydigest_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_pcp_raw_policydigest_t, 0x8 );
