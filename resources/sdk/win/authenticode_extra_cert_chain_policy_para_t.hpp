#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/authenticode_extra_cert_chain_policy_para_t.start.hpp"
namespace win
{
    struct cmsg_signer_info_t;

    // [struct _AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct authenticode_extra_cert_chain_policy_para_t              
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                          
        _m00 uint32_t                        cb_size;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                        dw_reg_policy_settings;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwRegPolicySettings
        _m02 struct win::cmsg_signer_info_t* p_signer_info;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pSignerInfo
                                                                    
        SDK_MAGIC_PROPERTIES( "_AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_PARA.$", 0x10, true, 0x9fff1656654ecba8 );                       
        SDK_FIXED_SIZE( authenticode_extra_cert_chain_policy_para_t, 0x10 );                       
    };                                                              
};
#include "magic/authenticode_extra_cert_chain_policy_para_t.end.hpp"
SDK_VERIFY( struct win::authenticode_extra_cert_chain_policy_para_t, 0x10 );
