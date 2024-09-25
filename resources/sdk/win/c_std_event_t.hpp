#pragma once
#include <sdkgen/support_library.hpp>
#include "cst_inner_unknown_t.hpp"

#include "magic/c_std_event_t.start.hpp"
namespace win
{
    struct i_unknown_t;

    // [class CStdEvent]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_std_event_t                               
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                            
        _m00 class win::cst_inner_unknown_t c_inner;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._cInner
        _m01 struct win::i_unknown_t*       p_control;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pControl
        _m02 void*                          m_h_event;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_hEvent
                                                      
        SDK_MAGIC_PROPERTIES( "CStdEvent.$", 0x38, true, 0x8e6eab4f535b5cae );          
        SDK_FIXED_SIZE( c_std_event_t, 0x38 );          
    };                                                
};
#include "magic/c_std_event_t.end.hpp"
SDK_VERIFY( class win::c_std_event_t, 0x38 );
