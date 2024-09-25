#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mini_completion_packet_user_t.start.hpp"
namespace io
{
    struct mini_completion_packet_user_t;

    // [struct _IO_MINI_COMPLETION_PACKET_USER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mini_completion_packet_user_t                   
    {                                                      
        using mini_packet_callback_t = sdk::function<void(struct io::mini_completion_packet_user_t*, void*)>*;                      
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                 
        _m00 nt::list_entry_t        list_entry;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 uint32_t                packet_type;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PacketType
        _m02 void*                   key_context;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .KeyContext
        _m03 void*                   apc_context;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ApcContext
        _m04 int32_t                 io_status;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IoStatus
        _m05 uint64_t                io_status_information;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .IoStatusInformation
        _m06 mini_packet_callback_t  mini_packet_callback;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MiniPacketCallback
        _m07 void*                   context;                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Context
        _m08 uint8_t                 allocated;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Allocated
                                                           
        SDK_MAGIC_PROPERTIES( "_IO_MINI_COMPLETION_PACKET_USER.$", 0x50, true, 0x81e11f646f3bc543 );                      
        SDK_DYNAMIC_SIZE( mini_completion_packet_user_t );                      
    };                                                     
};
#include "magic/mini_completion_packet_user_t.end.hpp"
