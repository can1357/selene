#pragma once
#include <sdkgen/support_library.hpp>
#include "csc_inner_unknown_t.hpp"

#include "magic/c_synchronize_container_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct i_synchronize_t;

    // [class CSynchronizeContainer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_synchronize_container_t                                 
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                          
        _m00 class win::csc_inner_unknown_t               c_inner;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cInner
        _m01 struct win::i_unknown_t*                     p_control;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._pControl
        _m02 uint32_t                                     l_last;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._lLast
        _m03 sdk::array<void*, 63>                        a_event;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._aEvent
        _m04 sdk::array<struct win::i_synchronize_t*, 63> a_sync;     //{ +0x0228    +0x0228    +0x0228    +0x0228    } | ._aSync
                                                                    
        SDK_MAGIC_PROPERTIES( "CSynchronizeContainer.$", 0x420, true, 0xe6907086e43828a6 );          
        SDK_FIXED_SIZE( c_synchronize_container_t, 0x420 );          
    };                                                              
};
#include "magic/c_synchronize_container_t.end.hpp"
SDK_VERIFY( class win::c_synchronize_container_t, 0x420 );
