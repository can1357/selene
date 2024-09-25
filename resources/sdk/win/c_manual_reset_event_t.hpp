#pragma once
#include <sdkgen/support_library.hpp>
#include "cmre_inner_unknown_t.hpp"

#include "magic/c_manual_reset_event_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    class c_std_event_t;

    // [class CManualResetEvent]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_manual_reset_event_t                           
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                 
        _m00 class win::cmre_inner_unknown_t c_inner;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._cInner
        _m01 struct win::i_unknown_t*        p_control;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pControl
        _m02 class win::c_std_event_t*       m_c_std_event;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_cStdEvent
                                                           
        SDK_MAGIC_PROPERTIES( "CManualResetEvent.$", 0x38, true, 0x253eef892ba88b9a );              
        SDK_FIXED_SIZE( c_manual_reset_event_t, 0x38 );              
    };                                                     
};
#include "magic/c_manual_reset_event_t.end.hpp"
SDK_VERIFY( class win::c_manual_reset_event_t, 0x38 );
