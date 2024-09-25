#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/call_chain_info_for_local_this_t.start.hpp"
namespace win
{
    // [struct CallChainInfoForLocalThis]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct call_chain_info_for_local_this_t                                 
    {                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                  
        _m00 uint32_t        asta_exempt_flags;                               //{ +0x0000    +0x0000    +0x0000    } | .astaExemptFlags
        _m01 uint32_t        asta_oxids_to_send_count;                        //{ +0x0004    +0x0004    +0x0004    } | .astaOxidsToSendCount
        _m02 uint32_t        tls_touched_astas_in_active_call_count;          //{ +0x0008    +0x0008    +0x0008    } | .tlsTouchedAstasInActiveCallCount
        _m03 const uint64_t* tls_touched_astas_in_active_call;                //{ +0x0010    +0x0010    +0x0010    } | .tlsTouchedAstasInActiveCall
        _m04 uint64_t        current_thread_native_apartment_oxid_if_needed;  //{ +0x0018    +0x0018    +0x0018    } | .currentThreadNativeApartmentOxidIfNeeded
                                                                            
        SDK_MAGIC_PROPERTIES( "CallChainInfoForLocalThis.$", 0x20, true, 0x1003eb2f7b70d02e );                                               
        SDK_FIXED_SIZE( call_chain_info_for_local_this_t, 0x20 );                                               
    };                                                                      
};
#include "magic/call_chain_info_for_local_this_t.end.hpp"
SDK_VERIFY( struct win::call_chain_info_for_local_this_t, 0x20 );
