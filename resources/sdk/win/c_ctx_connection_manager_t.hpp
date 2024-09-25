#pragma once
#include <sdkgen/support_library.hpp>
#include "cp_unk_list_t.hpp"
#include "c_mutex_sem2_t.hpp"

#include "magic/c_ctx_connection_manager_t.start.hpp"
namespace win
{
    class c_obj_server_t;

    // [class CCtxConnectionManager]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ctx_connection_manager_t                      
    {                                                     
        using p_unk_list_t = sdk::variant<class win::cp_unk_list_t*, class win::cp_unk_list_t>;                  
                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                
        _m00 p_unk_list_t               p_unk_list;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pUnkList
        _m01 class win::c_obj_server_t* pobj_server;        //{ +0x0008    +0x0028    +0x0028    +0x0028    } | ._pobjServer
        _m02 volatile int32_t           c_obj_refs;         //{ +0x0010    +0x0030    +0x0030    +0x0030    } | ._cObjRefs
        _m03 bool                       disconnecting;      //{ +0x0014    +0x0034    +0x0034    +0x0034    } | ._disconnecting
        _m04 void*                      hdisconnect_event;  //{ +0x0018    +0x0038    +0x0038    +0x0038    } | ._hdisconnectEvent
        _m05 class win::c_mutex_sem2_t  mutex;              //{ +0x0020    +0x0040    +0x0040    +0x0040    } | ._mutex
        _m06 uint32_t                   c_refs;             //{ +0x0050    +0x0070    +0x0070    +0x0070    } | ._cRefs
                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                
        _m07 sdk::array<uint32_t, 9>    increment_counts;   //{ +0x0074    +0x0074    +0x0074    } | ._incrementCounts
        _m08 sdk::array<uint32_t, 9>    decrement_counts;   //{ +0x0098    +0x0098    +0x0098    } | ._decrementCounts
                                                          
        SDK_MAGIC_PROPERTIES( "CCtxConnectionManager.$", 0xc0, true, 0x6534172e4a2e8f58 );                  
        SDK_DYNAMIC_SIZE( c_ctx_connection_manager_t );                  
    };                                                    
};
#include "magic/c_ctx_connection_manager_t.end.hpp"
