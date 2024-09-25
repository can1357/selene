#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "object_header_t.hpp"
#include "../io/remove_lock_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/setup_device_extension_t.start.hpp"
namespace ndis
{
    struct setup_device_extension_t;

    // [struct NDIS_SETUP_DEVICE_EXTENSION]
    // => Windows 10 v1607
    //
    struct setup_device_extension_t                                             
    {                                                                           
        // Windows 10 v1607                                                     
        //                                                                      
        _m00 struct ndis::object_header_t           header;                       //{ +0x0000    } | .Header
        _m01 struct ndis::setup_device_extension_t* next;                         //{ +0x0008    } | .Next
        _m02 bool                                   is_device_interface_active;   //{ +0x0010    } | .IsDeviceInterfaceActive
        _m03 bool                                   is_surprise_removed;          //{ +0x0011    } | .IsSurpriseRemoved
        _m04 bool                                   low_power_requested;          //{ +0x0012    } | .LowPowerRequested
        _m05 bool                                   low_power_request_completed;  //{ +0x0013    } | .LowPowerRequestCompleted
        _m06 bool                                   low_power_request_succeeded;  //{ +0x0014    } | .LowPowerRequestSucceeded
        _m07 struct nt::device_object_t*            fdo;                          //{ +0x0018    } | .Fdo
        _m08 struct nt::device_object_t*            pdo;                          //{ +0x0020    } | .Pdo
        _m09 struct nt::device_object_t*            next_device_object;           //{ +0x0028    } | .NextDeviceObject
        _m10 nt::unicode_view                       symbolic_name;                //{ +0x0030    } | .SymbolicName
        _m11 struct nt::ktimer_t                    idle_timer;                   //{ +0x0040    } | .IdleTimer
        _m12 struct nt::kdpc_t                      idle_dpc;                     //{ +0x0080    } | .IdleDpc
        _m13 struct io::remove_lock_t               remove_lock;                  //{ +0x00c0    } | .RemoveLock
                                                                                
        SDK_MAGIC_PROPERTIES( "NDIS_SETUP_DEVICE_EXTENSION.$", 0x0, false, 0x93e3d20cd291d33b );                            
        SDK_FIXED_SIZE( setup_device_extension_t, 0xe0 );                            
    };                                                                          
};
#include "magic/setup_device_extension_t.end.hpp"
SDK_VERIFY( struct ndis::setup_device_extension_t, 0xe0 );
