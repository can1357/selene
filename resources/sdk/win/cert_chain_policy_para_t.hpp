#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_chain_policy_para_t.start.hpp"
namespace win
{
    // [struct _CERT_CHAIN_POLICY_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_chain_policy_para_t        
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t cb_size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_flags;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 void*    pv_extra_policy_para;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pvExtraPolicyPara
                                           
        SDK_MAGIC_PROPERTIES( "_CERT_CHAIN_POLICY_PARA.$", 0x10, true, 0x1bdc31be44ac8f6a );                     
        SDK_FIXED_SIZE( cert_chain_policy_para_t, 0x10 );                     
    };                                     
};
#include "magic/cert_chain_policy_para_t.end.hpp"
SDK_VERIFY( struct win::cert_chain_policy_para_t, 0x10 );
