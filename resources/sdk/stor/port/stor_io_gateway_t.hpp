#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_notification_info_t.hpp"
#include "../../io/cont_resource_list_t.hpp"
#include "raid_shared_work_item_context_t.hpp"

namespace nt { struct kevent_t; }

#include "magic/stor_io_gateway_t.start.hpp"
namespace stor::port
{
    struct raid_adapter_extension_t;

    // [struct _STOR_IO_GATEWAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_io_gateway_t                                                         
    {                                                                                
        using io_resource_work_item_t = struct stor::port::raid_shared_work_item_context_t;                           
                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                           
        _m00 uint64_t                                     lock;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 nt::list_entry_t                             pending_list;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PendingList
        _m02 uint32_t                                     pending_io_count;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PendingIoCount
        _m03 uint32_t                                     high_water_mark;             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .HighWaterMark
        _m04 uint32_t                                     low_water_mark;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LowWaterMark
        _m05 uint32_t                                     outstanding_max;             //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .OutstandingMax
        _m06 int32_t                                      busy_count;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BusyCount
        _m07 int32_t                                      pause_count;                 //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .PauseCount
        _m08 struct stor::port::raid_adapter_extension_t* adapter;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Adapter
        _m09 struct io::cont_resource_list_t              resource_list;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ResourceList
        _m10 uint32_t                                     outstanding;                 //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .Outstanding
        _m11 struct nt::kevent_t*                         empty_event;                 //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .EmptyEvent
        _m12 uint8_t                                      pending_event;               //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .PendingEvent
        _m13 struct stor::port::stor_notification_info_t  empty_notification_info;     //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .EmptyNotificationInfo
        _m14 nt::list_entry_t                             high_priority_pending_list;  //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .HighPriorityPendingList
        _m15 nt::list_entry_t                             qos_req_list;                //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .QosReqList
                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                           
        _m16 int32_t                                      slow_path_count;             //{ +0x0118    +0x0118    +0x0118    } | .SlowPathCount
                                                                                     
        // Windows 11                                                                
        //                                                                           
        _m17 uint32_t                                     index;                       //{ +0x011c    } | .Index
        _m18 io_resource_work_item_t                      io_resource_work_item;       //{ +0x0120    } | .IoResourceWorkItem
                                                                                     
        SDK_MAGIC_PROPERTIES( "_STOR_IO_GATEWAY.$", 0x140, true, 0xd88e230e650469f0 );                           
        SDK_FIXED_SIZE( stor_io_gateway_t, 0x140 );                                  
    };                                                                               
};
#include "magic/stor_io_gateway_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_io_gateway_t, 0x140 );
