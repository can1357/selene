#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/auto_net_trace_activity_t.start.hpp"
namespace win
{
    // [class AutoNetTraceActivity]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class auto_net_trace_activity_t                 
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                          
        _m00 int32_t           m_b_created_activity;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_bCreatedActivity
        _m01 struct nt::guid_t m_prev_activity;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .m_PrevActivity
        _m02 uint32_t          m_context;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .m_Context
                                                    
        SDK_MAGIC_PROPERTIES( "AutoNetTraceActivity.$", 0x18, true, 0xc96ef80e41ae6b4c );                     
        SDK_FIXED_SIZE( auto_net_trace_activity_t, 0x18 );                     
    };                                              
};
#include "magic/auto_net_trace_activity_t.end.hpp"
SDK_VERIFY( class win::auto_net_trace_activity_t, 0x18 );
