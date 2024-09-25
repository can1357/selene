#pragma once
#include <sdkgen/support_library.hpp>
#include "port_queue_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../nt/client_id_t.hpp"
#include "../sec/client_context_t.hpp"
#include "../sec/quality_of_service_t.hpp"

namespace nt { struct eprocess_t; }
namespace nt { struct ethread_t;  }

#include "magic/port_object_t.start.hpp"
namespace lpcp
{
    struct port_object_t;

    // [struct _LPCP_PORT_OBJECT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_object_t                                                 
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                               
        _m00 struct lpcp::port_object_t*      connection_port;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ConnectionPort
        _m01 struct lpcp::port_object_t*      connected_port;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ConnectedPort
        _m02 struct lpcp::port_queue_t        msg_queue;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MsgQueue
        _m03 struct nt::client_id_t           creator;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Creator
        _m04 void*                            client_section_base;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ClientSectionBase
        _m05 void*                            server_section_base;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ServerSectionBase
        _m06 void*                            port_context;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .PortContext
        _m07 struct nt::ethread_t*            client_thread;               //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ClientThread
        _m08 struct sec::quality_of_service_t security_qos;                //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .SecurityQos
        _m09 struct sec::client_context_t     static_security;             //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .StaticSecurity
        _m10 nt::list_entry_t                 lpc_reply_chain_head;        //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .LpcReplyChainHead
        _m11 nt::list_entry_t                 lpc_data_info_chain_head;    //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .LpcDataInfoChainHead
        _m12 struct nt::eprocess_t*           server_process;              //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .ServerProcess
        _m13 struct nt::eprocess_t*           mapping_process;             //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .MappingProcess
        _m14 uint16_t                         max_message_length;          //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .MaxMessageLength
        _m15 uint16_t                         max_connection_info_length;  //{ +0x00e2    +0x00e2    +0x00e2    +0x00e2    } | .MaxConnectionInfoLength
        _m16 uint32_t                         flags;                       //{ +0x00e4    +0x00e4    +0x00e4    +0x00e4    } | .Flags
        _m17 struct nt::kevent_t              wait_event;                  //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .WaitEvent
                                                                         
        SDK_MAGIC_PROPERTIES( "_LPCP_PORT_OBJECT.$", 0x100, true, 0xa520e31aeaac1398 );                           
        SDK_FIXED_SIZE( port_object_t, 0x100 );                           
    };                                                                   
};
#include "magic/port_object_t.end.hpp"
SDK_VERIFY( struct lpcp::port_object_t, 0x100 );
