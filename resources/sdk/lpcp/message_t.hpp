#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/port_message_t.hpp"
#include "../nt/single_list_entry_t.hpp"

namespace nt { struct ethread_t; }

#include "magic/message_t.start.hpp"
namespace lpcp
{
    // [struct _LPCP_MESSAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct message_t                                          
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                    
        _m00 nt::list_entry_t               entry;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Entry
        _m01 struct nt::single_list_entry_t free_entry;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FreeEntry
        _m02 void*                          sender_port;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SenderPort
        _m03 struct nt::ethread_t*          replied_to_thread;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RepliedToThread
        _m04 void*                          port_context;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PortContext
        _m05 struct nt::port_message_t      request;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Request
                                                              
        SDK_MAGIC_PROPERTIES( "_LPCP_MESSAGE.$", 0x50, true, 0xd4d3a1688a15c1bd );                  
        SDK_FIXED_SIZE( message_t, 0x50 );                    
    };                                                        
};
#include "magic/message_t.end.hpp"
SDK_VERIFY( struct lpcp::message_t, 0x50 );
