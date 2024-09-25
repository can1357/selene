#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flt_server_port_object_t.start.hpp"
namespace fltmgr
{
    struct flt_port_t;
    struct flt_filter_t;

    // [struct _FLT_SERVER_PORT_OBJECT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_server_port_object_t                             
    {                                                           
        using connect_notify_t = sdk::function<int32_t(struct fltmgr::flt_port_t*, void*, void*, uint32_t, void**)>*;                      
        using message_notify_t = sdk::function<int32_t(void*, void*, uint32_t, void*, uint32_t, uint32_t*)>*;                      
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                      
        _m00 nt::list_entry_t             filter_link;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FilterLink
        _m01 connect_notify_t             connect_notify;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ConnectNotify
        _m02 sdk::function<void(void*)>*  disconnect_notify;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DisconnectNotify
        _m03 message_notify_t             message_notify;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MessageNotify
        _m04 struct fltmgr::flt_filter_t* filter;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Filter
        _m05 void*                        cookie;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Cookie
        _m06 uint32_t                     flags;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Flags
        _m07 int32_t                      number_of_connections;  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .NumberOfConnections
        _m08 int32_t                      max_connections;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .MaxConnections
                                                                
        SDK_MAGIC_PROPERTIES( "_FLT_SERVER_PORT_OBJECT.$", 0x48, true, 0x4e2132ccfb245d74 );                      
        SDK_FIXED_SIZE( flt_server_port_object_t, 0x48 );                      
    };                                                          
};
#include "magic/flt_server_port_object_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_server_port_object_t, 0x48 );
