#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_chain_policy_status_t.start.hpp"
namespace win
{
    // [struct _CERT_CHAIN_POLICY_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_chain_policy_status_t        
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t cb_size;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_error;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwError
        _m02 int32_t  l_chain_index;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lChainIndex
        _m03 int32_t  l_element_index;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .lElementIndex
        _m04 void*    pv_extra_policy_status;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pvExtraPolicyStatus
                                             
        SDK_MAGIC_PROPERTIES( "_CERT_CHAIN_POLICY_STATUS.$", 0x18, true, 0xc0b542fb6334cd75 );                       
        SDK_FIXED_SIZE( cert_chain_policy_status_t, 0x18 );                       
    };                                       
};
#include "magic/cert_chain_policy_status_t.end.hpp"
SDK_VERIFY( struct win::cert_chain_policy_status_t, 0x18 );
