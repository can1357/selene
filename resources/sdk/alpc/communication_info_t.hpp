#pragma once
#include <sdkgen/support_library.hpp>
#include "handle_table_t.hpp"

namespace nt { struct kalpc_message_t; }

#include "magic/communication_info_t.start.hpp"
namespace alpc
{
    struct port_t;

    // [struct _ALPC_COMMUNICATION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct communication_info_t                                    
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                         
        _m00 struct alpc::port_t*        connection_port;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ConnectionPort
        _m01 struct alpc::port_t*        server_communication_port;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ServerCommunicationPort
        _m02 struct alpc::port_t*        client_communication_port;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ClientCommunicationPort
        _m03 nt::list_entry_t            communication_list;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CommunicationList
        _m04 struct alpc::handle_table_t handle_table;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HandleTable
        _m05 struct nt::kalpc_message_t* close_message;              //{ +0x0040    +0x0040    +0x0048    +0x0040    } | .CloseMessage
                                                                   
        SDK_MAGIC_PROPERTIES( "_ALPC_COMMUNICATION_INFO.$", 0x48, true, 0x659ded2b3caf9213 );                          
        SDK_DYNAMIC_SIZE( communication_info_t );                          
    };                                                             
};
#include "magic/communication_info_t.end.hpp"
