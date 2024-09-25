#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "../nt/fast_mutex_t.hpp"
#include "../ex/rundown_ref_t.hpp"
#include "flt_message_waiter_queue_t.hpp"

#include "magic/flt_port_object_t.start.hpp"
namespace fltmgr
{
    struct flt_server_port_object_t;

    // [struct _FLT_PORT_OBJECT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_port_object_t                                                 
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                   
        _m00 nt::list_entry_t                          filter_link;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FilterLink
        _m01 struct fltmgr::flt_server_port_object_t*  server_port;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ServerPort
        _m02 void*                                     cookie;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Cookie
        _m03 struct ex::rundown_ref_t                  msg_notif_rundown_ref;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MsgNotifRundownRef
        _m04 struct nt::fast_mutex_t                   lock;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Lock
        _m05 struct fltmgr::flt_message_waiter_queue_t msg_q;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .MsgQ
        _m06 uint64_t                                  message_id;             //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .MessageId
        _m07 struct nt::kevent_t                       disconnect_event;       //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .DisconnectEvent
        _m08 uint8_t                                   disconnected;           //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .Disconnected
                                                                             
        SDK_MAGIC_PROPERTIES( "_FLT_PORT_OBJECT.$", 0x158, true, 0x1dc97892e9253f29 );                      
        SDK_FIXED_SIZE( flt_port_object_t, 0x158 );                          
    };                                                                       
};
#include "magic/flt_port_object_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_port_object_t, 0x158 );
