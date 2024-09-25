#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "transport_and_server_calls_t.hpp"

#include "magic/standard_com_client_call_t.start.hpp"
namespace win
{
    // [class StandardComClientCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class standard_com_client_call_t                                                                 
    {                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                           
        _m00 struct win::transport_and_server_calls_t transport_and_server_calls;                      //{ +0x0060    +0x00b0    +0x00b0    +0x00b0    } | ._transportAndServerCalls
        _m01 struct nt::guid_t                        guid_causality;                                  //{ +0x0078    +0x00c8    +0x00c8    +0x00c8    } | ._guidCausality
        _m02 uint1_t                                  b_transport_call_had_cancel_status_at_finalize;  //{ +0x0088@0  +0x00d8@0  +0x00d8@0  +0x00d8@0  } | ._bTransportCallHadCancelStatusAtFinalize
                                                                                                     
        SDK_MAGIC_PROPERTIES( "StandardComClientCall.$", 0xf0, true, 0x1e88881bb60f3302 );                                               
        SDK_DYNAMIC_SIZE( standard_com_client_call_t );                                               
    };                                                                                               
};
#include "magic/standard_com_client_call_t.end.hpp"
