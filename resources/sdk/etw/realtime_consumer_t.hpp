#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"

namespace nt { struct eprocess_t;          }
namespace nt { struct kevent_t;            }
namespace nt { struct single_list_entry_t; }

#include "magic/realtime_consumer_t.start.hpp"
namespace etw
{
    struct silodriverstate_t;

    // [struct _ETW_REALTIME_CONSUMER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct realtime_consumer_t                                              
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                  
        _m000 nt::list_entry_t                links;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Links
        _m001 void*                           process_handle;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessHandle
        _m002 struct nt::eprocess_t*          process_object;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProcessObject
        _m003 void*                           next_not_delivered;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NextNotDelivered
        _m004 void*                           realtime_connect_context;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RealtimeConnectContext
        _m005 struct nt::kevent_t*            disconnect_event;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DisconnectEvent
        _m006 struct nt::kevent_t*            data_available_event;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DataAvailableEvent
        _m007 uint32_t*                       user_buffer_count;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .UserBufferCount
        _m008 struct nt::single_list_entry_t* user_buffer_list_head;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .UserBufferListHead
        _m009 uint32_t                        buffers_lost;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .BuffersLost
        _m010 uint32_t                        empty_buffers_count;            //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .EmptyBuffersCount
        _m011 uint16_t                        logger_id;                      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .LoggerId
        _m012 uint8_t                         flags;                          //{ +0x005a    +0x005a    +0x005a    +0x005a    } | .Flags
        _m013 uint1_t                         shut_down_requested;            //{ +0x005a@0  +0x005a@0  +0x005a@0  +0x005a@0  } | .ShutDownRequested
        _m014 uint1_t                         new_buffers_lost;               //{ +0x005a@1  +0x005a@1  +0x005a@1  +0x005a@1  } | .NewBuffersLost
        _m015 uint1_t                         disconnected;                   //{ +0x005a@2  +0x005a@2  +0x005a@2  +0x005a@2  } | .Disconnected
        _m016 uint1_t                         notified;                       //{ +0x005a@3  +0x005a@3  +0x005a@3  +0x005a@3  } | .Notified
        _m017 uint1_t                         wow;                            //{ +0x005a@4  +0x005a@4  +0x005a@4  +0x005a@4  } | .Wow
        _m018 struct rtl::bitmap_t            reserved_buffer_space_bit_map;  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ReservedBufferSpaceBitMap
        _m019 uint8_t*                        reserved_buffer_space;          //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ReservedBufferSpace
        _m020 uint32_t                        reserved_buffer_space_size;     //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ReservedBufferSpaceSize
        _m021 uint32_t                        user_pages_allocated;           //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .UserPagesAllocated
        _m022 uint32_t                        user_pages_reused;              //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .UserPagesReused
        _m023 uint32_t*                       events_lost_count;              //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .EventsLostCount
        _m024 uint32_t*                       buffers_lost_count;             //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .BuffersLostCount
        _m025 struct etw::silodriverstate_t*  silo_state;                     //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .SiloState
                                                                            
        SDK_MAGIC_PROPERTIES( "_ETW_REALTIME_CONSUMER.$", 0xa0, true, 0xec00b6c17aec6169 );                              
        SDK_FIXED_SIZE( realtime_consumer_t, 0xa0 );                              
    };                                                                      
};
#include "magic/realtime_consumer_t.end.hpp"
SDK_VERIFY( struct etw::realtime_consumer_t, 0xa0 );
