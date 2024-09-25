#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/push_call_chain_info_t.start.hpp"
namespace win
{
    // [class PushCallChainInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class push_call_chain_info_t                                                             
    {                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                   
        _m00 uint32_t                                 c_saved_touched_astas_in_active_call;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._cSavedTouchedAstasInActiveCall
        _m01 sdk::variant<uint64_t*, const uint64_t*> p_saved_touched_astas_in_active_call;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pSavedTouchedAstasInActiveCall
        _m02 uint32_t                                 dw_saved_asta_to_asta_exempt_tls_flags;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._dwSavedAstaToAstaExemptTlsFlags
                                                                                             
        SDK_MAGIC_PROPERTIES( "PushCallChainInfo.$", 0x18, true, 0x6bb7e8814cbc2585 );                                       
        SDK_FIXED_SIZE( push_call_chain_info_t, 0x18 );                                       
    };                                                                                       
};
#include "magic/push_call_chain_info_t.end.hpp"
SDK_VERIFY( class win::push_call_chain_info_t, 0x18 );
