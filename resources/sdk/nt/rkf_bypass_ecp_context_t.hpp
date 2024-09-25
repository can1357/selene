#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rkf_bypass_ecp_context_t.start.hpp"
namespace nt
{
    // [struct _RKF_BYPASS_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct rkf_bypass_ecp_context_t
    {                              
        // WDK 10            
        //                   
        _m00 int32_t version;        //{ +0x0004    } | .Version
                                   
        SDK_NONVOL_PROPERTIES( "_RKF_BYPASS_ECP_CONTEXT.$", 0x0, false, 0x5aab78dec34748b3 );        
        SDK_FIXED_SIZE( rkf_bypass_ecp_context_t, 0x8 );        
    };                             
};
#include "magic/rkf_bypass_ecp_context_t.end.hpp"
SDK_VERIFY( struct nt::rkf_bypass_ecp_context_t, 0x8 );
