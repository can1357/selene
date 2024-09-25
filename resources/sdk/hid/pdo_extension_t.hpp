#pragma once
#include <sdkgen/support_library.hpp>
#include "wmilib_context_t.hpp"
#include "collection_state_t.hpp"
#include "../io/remove_lock_t.hpp"
#include "device_object_state_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "../nt/system_power_state_t.hpp"

namespace nt { struct device_object_t; }
namespace nt { struct irp_t;           }

#include "magic/pdo_extension_t.start.hpp"
namespace hid
{
    struct hidclass_device_extension_t;

    // [struct _PDO_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pdo_extension_t                                                                      
    {                                                                                           
        using status_change_fn_t = sdk::function<void(void*, enum hid::device_object_state_t)>*;                                         
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                      
        _m000 enum hid::collection_state_t             prev_state;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .prevState
        _m001 enum hid::collection_state_t             state;                                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .state
        _m002 uint32_t                                 collection_num;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .collectionNum
        _m003 uint32_t                                 collection_index;                          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .collectionIndex
        _m004 struct io::remove_lock_t                 remove_lock;                               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .removeLock
        _m005 struct nt::device_object_t*              pdo;                                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pdo
        _m006 nt::unicode_view*                        name;                                      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .name
        _m007 struct hid::hidclass_device_extension_t* device_fdo_ext;                            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .deviceFdoExt
        _m008 enum nt::system_power_state_t            system_power_state;                        //{ +0x0048    +0x0048    +0x004c    +0x0048    } | .systemPowerState
        _m009 enum nt::device_power_state_t            device_power_state;                        //{ +0x004c    +0x004c    +0x0050    +0x004c    } | .devicePowerState
        _m010 uint8_t                                  remote_wake_enabled;                       //{ +0x0050    +0x0050    +0x0054    +0x0050    } | .remoteWakeEnabled
        _m011 uint64_t                                 remote_wake_spin_lock;                     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .remoteWakeSpinLock
        _m012 struct nt::irp_t*                        remote_wake_irp;                           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .remoteWakeIrp
        _m013 int32_t                                  remote_wake_pending;                       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .remoteWakePending
        _m014 struct nt::irp_t*                        wait_wake_irp;                             //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .waitWakeIrp
        _m015 status_change_fn_t                       status_change_fn;                          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .StatusChangeFn
        _m016 void*                                    status_change_context;                     //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .StatusChangeContext
        _m017 int32_t                                  open_count;                                //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .openCount
        _m018 int32_t                                  opens_for_read;                            //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .opensForRead
        _m019 int32_t                                  opens_for_write;                           //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .opensForWrite
        _m020 int32_t                                  restrictions_for_read;                     //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .restrictionsForRead
        _m021 int32_t                                  restrictions_for_write;                    //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .restrictionsForWrite
        _m022 int32_t                                  restrictions_for_any_open;                 //{ +0x009c    +0x009c    +0x009c    +0x009c    } | .restrictionsForAnyOpen
        _m023 uint8_t                                  mouse_or_keyboard;                         //{ +0x00a0    +0x0100    +0x0100    +0x0100    } | .MouseOrKeyboard
        _m024 uint8_t                                  session_security_enabled;                  //{ +0x00a1    +0x0101    +0x0101    +0x0101    } | .SessionSecurityEnabled
        _m025 uint8_t                                  wake_on_sx_enabled;                        //{ +0x00a2    +0x0102    +0x0102    +0x0102    } | .WakeOnSxEnabled
        _m026 int32_t                                  s0_idle_stop_count;                        //{ +0x00a8    +0x0108    +0x0108    +0x0108    } | .S0IdleStopCount
        _m027 struct hid::wmilib_context_t             wmi_lib_info;                              //{ +0x00b0    +0x0110    +0x0110    +0x0110    } | .WmiLibInfo
                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                      
        _m028 sdk::array<sdk::array<void*, 2>, 6>      handle_type_tracking;                      //{ +0x00a0    +0x00a0    +0x00a0    } | .HandleTypeTracking
        _m029 uint32_t                                 client_input_suppression_requests_needed;  //{ +0x010c    +0x010c    +0x010c    } | .ClientInputSuppressionRequestsNeeded
        _m030 int64_t                                  last_stop_idle_for_io_time;                //{ +0x0150    +0x0150    +0x0150    } | .LastStopIdleForIoTime
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                         
        //                                                                                      
        _m031 uint32_t                                 idle_timeout;                              //{ +0x00a4    +0x0104    +0x0104    } | .IdleTimeout
                                                                                                
        // Windows 11                                                                           
        //                                                                                      
        _m032 uint8_t                                  reenumerate;                               //{ +0x0048    } | .Reenumerate
        _m033 uint8_t                                  reenumerate_reported;                      //{ +0x0049    } | .ReenumerateReported
        _m034 uint32_t                                 idle_timeout_in_msec;                      //{ +0x0104    } | .IdleTimeoutInMsec
        _m035 uint32_t                                 win_rt_interface_restriction_level;        //{ +0x0158    } | .WinRtInterfaceRestrictionLevel
                                                                                                
        SDK_MAGIC_PROPERTIES( "_PDO_EXTENSION.$", 0x158, true, 0x56ee335d1ad0683d );                                         
        SDK_DYNAMIC_SIZE( pdo_extension_t );                                                    
    };                                                                                          
};
#include "magic/pdo_extension_t.end.hpp"
