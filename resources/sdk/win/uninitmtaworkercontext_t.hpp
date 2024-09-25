#pragma once
#include <sdkgen/support_library.hpp>
#include "uninit_mta_worker_context_flags_t.hpp"

namespace tag { struct s_ole_tls_data_t; }
namespace tp  { struct work_t;           }

#include "magic/uninitmtaworkercontext_t.start.hpp"
namespace win
{
    // [struct _UNINITMTAWORKERCONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct uninitmtaworkercontext_t                                              
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                       
        _m00 void*                                       h_uninit_mta_done_event;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hUninitMTADoneEvent
        _m01 struct tag::s_ole_tls_data_t*               p_s_ole_tls_data;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pSOleTlsData
        _m02 struct tp::work_t*                          ptp_work;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ptpWork
        _m03 enum win::uninit_mta_worker_context_flags_t flags;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .flags
                                                                                 
        SDK_MAGIC_PROPERTIES( "_UNINITMTAWORKERCONTEXT.$", 0x20, true, 0xe987fc7f7ee44904 );                        
        SDK_FIXED_SIZE( uninitmtaworkercontext_t, 0x20 );                        
    };                                                                           
};
#include "magic/uninitmtaworkercontext_t.end.hpp"
SDK_VERIFY( struct win::uninitmtaworkercontext_t, 0x20 );
