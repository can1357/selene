#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_srv_call_state_t.start.hpp"
namespace win
{
    class c_srv_call_state_t;

    // [class CSrvCallState]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_srv_call_state_t                               
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                 
        _m00 uint32_t                       dw_call_cat_in;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._dwCallCatIn
        _m01 class win::c_srv_call_state_t* p_prev;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pPrev
                                                           
        SDK_MAGIC_PROPERTIES( "CSrvCallState.$", 0x10, true, 0x167d27cd7e43fb54 );               
        SDK_FIXED_SIZE( c_srv_call_state_t, 0x10 );               
    };                                                     
};
#include "magic/c_srv_call_state_t.end.hpp"
SDK_VERIFY( class win::c_srv_call_state_t, 0x10 );
