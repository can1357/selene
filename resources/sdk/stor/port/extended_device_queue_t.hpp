#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/kevent_t.hpp"

#include "magic/extended_device_queue_t.start.hpp"
namespace stor::port
{
    struct stor_io_gateway_t;

    // [struct _EXTENDED_DEVICE_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct extended_device_queue_t                                                
    {                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                        
        _m00 int16_t                               type;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 int16_t                               size;                            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 int32_t                               depth;                           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Depth
        _m03 struct stor::port::stor_io_gateway_t* gateway;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Gateway
        _m04 int32_t                               device_count;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceCount
        _m05 int32_t                               by_pass_count;                   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ByPassCount
        _m06 int32_t                               by_pass_power_count;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ByPassPowerCount
        _m07 int32_t                               pause_count;                     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .PauseCount
        _m08 int32_t                               busy_count;                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BusyCount
        _m09 uint8_t                               frozen;                          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Frozen
        _m10 uint8_t                               locked;                          //{ +0x0025    +0x0025    +0x0025    +0x0025    } | .Locked
        _m11 uint8_t                               untagged;                        //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .Untagged
        _m12 uint8_t                               power_locked;                    //{ +0x0027    +0x0027    +0x0027    +0x0027    } | .PowerLocked
        _m13 uint32_t                              quiescence_clients;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .QuiescenceClients
        _m14 struct nt::kevent_t                   quiescence_event;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .QuiescenceEvent
        _m15 volatile int32_t                      rw_lock;                         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .RWLock
        _m16 int32_t                               outstanding_count;               //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .OutstandingCount
        _m17 nt::list_entry_t                      device_list;                     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .DeviceList
        _m18 nt::list_entry_t                      by_pass_list;                    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ByPassList
        _m19 nt::list_entry_t                      qos_req_list;                    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .QosReqList
        _m20 int32_t                               periodic_max_device_count;       //{ +0x0080    +0x0084    +0x0084    +0x0084    } | .PeriodicMaxDeviceCount
        _m21 int32_t                               periodic_max_outstanding_count;  //{ +0x0084    +0x0088    +0x0088    +0x0088    } | .PeriodicMaxOutstandingCount
                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                        
        _m22 uint32_t                              zone_write_overflow_entries;     //{ +0x0080    +0x0080    +0x0080    } | .ZoneWriteOverflowEntries
                                                                                  
        SDK_MAGIC_PROPERTIES( "_EXTENDED_DEVICE_QUEUE.$", 0x90, true, 0x8c200593f29cc9b6 );                               
        SDK_DYNAMIC_SIZE( extended_device_queue_t );                               
    };                                                                            
};
#include "magic/extended_device_queue_t.end.hpp"
