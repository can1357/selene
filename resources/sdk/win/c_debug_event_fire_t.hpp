#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../rtl/critical_section_t.hpp"

#include "magic/c_debug_event_fire_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct i_system_debug_event_fire_t;

    // [class CDebugEventFire]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_debug_event_fire_t                                         
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                             
        _m00 uint32_t                                 c_ref;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cRef
        _m01 struct rtl::critical_section_t           cs_event_fire;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._csEventFire
        _m02 int32_t                                  f_log_disabled;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._fLogDisabled
        _m03 struct nt::guid_t                        guid_session;      //{ +0x003c    +0x003c    +0x003c    +0x003c    } | ._guidSession
        _m04 wchar_t*                                 str_session_name;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | ._strSessionName
        _m05 struct win::i_system_debug_event_fire_t* p_event_fire;      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._pEventFire
        _m06 struct win::i_unknown_t*                 punk_ftm;          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | ._punkFTM
                                                                       
        SDK_MAGIC_PROPERTIES( "CDebugEventFire.$", 0x68, true, 0xcef7c242b06a7e5e );                 
        SDK_FIXED_SIZE( c_debug_event_fire_t, 0x68 );                  
    };                                                                 
};
#include "magic/c_debug_event_fire_t.end.hpp"
SDK_VERIFY( class win::c_debug_event_fire_t, 0x68 );
