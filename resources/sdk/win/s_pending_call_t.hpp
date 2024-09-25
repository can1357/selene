#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/s_pending_call_t.start.hpp"
namespace win
{
    struct s_pending_call_t;
    class c_channel_object_t;

    // [struct SPendingCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_pending_call_t                            
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                             
        _m00 struct win::s_pending_call_t*  p_next;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pNext
        _m01 struct win::s_pending_call_t*  p_prev;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pPrev
        _m02 class win::c_channel_object_t* p_chnl_obj;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pChnlObj
                                                       
        SDK_MAGIC_PROPERTIES( "SPendingCall.$", 0x18, true, 0xdbf6e6e70aa2da13 );           
        SDK_FIXED_SIZE( s_pending_call_t, 0x18 );           
    };                                                 
};
#include "magic/s_pending_call_t.end.hpp"
SDK_VERIFY( struct win::s_pending_call_t, 0x18 );
