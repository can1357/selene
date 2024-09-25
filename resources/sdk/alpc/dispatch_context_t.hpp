#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kalpc_direct_event_t.hpp"

namespace nt { struct ethread_t;       }
namespace nt { struct kalpc_message_t; }

#include "magic/dispatch_context_t.start.hpp"
namespace alpc
{
    struct port_t;
    struct communication_info_t;

    // [struct _ALPC_DISPATCH_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dispatch_context_t                                             
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                
        _m00 struct alpc::port_t*               port_object;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PortObject
        _m01 struct nt::kalpc_message_t*        message;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Message
        _m02 struct alpc::communication_info_t* communication_info;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CommunicationInfo
        _m03 struct nt::ethread_t*              target_thread;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TargetThread
        _m04 struct alpc::port_t*               target_port;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TargetPort
        _m05 union nt::kalpc_direct_event_t     direct_event;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DirectEvent
        _m06 uint32_t                           flags;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Flags
        _m07 uint16_t                           total_length;               //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .TotalLength
        _m08 uint16_t                           type;                       //{ +0x0036    +0x0036    +0x0036    +0x0036    } | .Type
        _m09 uint16_t                           data_info_offset;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DataInfoOffset
        _m10 uint8_t                            signal_completion;          //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .SignalCompletion
        _m11 uint8_t                            posted_to_completion_list;  //{ +0x003b    +0x003b    +0x003b    +0x003b    } | .PostedToCompletionList
                                                                          
        SDK_MAGIC_PROPERTIES( "_ALPC_DISPATCH_CONTEXT.$", 0x40, true, 0x3d2bdfece3c0beae );                          
        SDK_FIXED_SIZE( dispatch_context_t, 0x40 );                          
    };                                                                    
};
#include "magic/dispatch_context_t.end.hpp"
SDK_VERIFY( struct alpc::dispatch_context_t, 0x40 );
