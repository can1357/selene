#pragma once
#include <sdkgen/support_library.hpp>
#include "../power/action_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "../nt/system_power_state_t.hpp"

namespace cm { struct resource_list_t;       }
namespace nt { struct device_capabilities_t; }
namespace nt { struct irp_t;                 }

#include "magic/ksdevice_dispatch_t.start.hpp"
namespace ndis
{
    struct ksdevice_t;

    // [struct _KSDEVICE_DISPATCH]
    // => Windows 10 v1607
    //
    struct ksdevice_dispatch_t                        
    {                                                 
        using add_t =                sdk::function<int32_t(struct ndis::ksdevice_t*)>*;                   
        using start_t =              sdk::function<int32_t(struct ndis::ksdevice_t*, struct nt::irp_t*, struct cm::resource_list_t*, struct cm::resource_list_t*)>*;                   
        using post_start_t =         sdk::function<int32_t(struct ndis::ksdevice_t*)>*;                   
        using query_stop_t =         sdk::function<int32_t(struct ndis::ksdevice_t*, struct nt::irp_t*)>*;                   
        using cancel_stop_t =        sdk::function<void(struct ndis::ksdevice_t*, struct nt::irp_t*)>*;                   
        using stop_t =               sdk::function<void(struct ndis::ksdevice_t*, struct nt::irp_t*)>*;                   
        using query_remove_t =       sdk::function<int32_t(struct ndis::ksdevice_t*, struct nt::irp_t*)>*;                   
        using cancel_remove_t =      sdk::function<void(struct ndis::ksdevice_t*, struct nt::irp_t*)>*;                   
        using remove_t =             sdk::function<void(struct ndis::ksdevice_t*, struct nt::irp_t*)>*;                   
        using query_capabilities_t = sdk::function<int32_t(struct ndis::ksdevice_t*, struct nt::irp_t*, struct nt::device_capabilities_t*)>*;                   
        using surprise_removal_t =   sdk::function<void(struct ndis::ksdevice_t*, struct nt::irp_t*)>*;                   
        using query_power_t =        sdk::function<int32_t(struct ndis::ksdevice_t*, struct nt::irp_t*, enum nt::device_power_state_t, enum nt::device_power_state_t, enum nt::system_power_state_t, enum nt::system_power_state_t, enum power::action_t)>*;                   
        using set_power_t =          sdk::function<void(struct ndis::ksdevice_t*, struct nt::irp_t*, enum nt::device_power_state_t, enum nt::device_power_state_t)>*;                   
        using query_interface_t =    sdk::function<int32_t(struct ndis::ksdevice_t*, struct nt::irp_t*)>*;                   
                                                      
        // Windows 10 v1607                           
        //                                            
        _m00 add_t                 add;                 //{ +0x0000    } | .Add
        _m01 start_t               start;               //{ +0x0008    } | .Start
        _m02 post_start_t          post_start;          //{ +0x0010    } | .PostStart
        _m03 query_stop_t          query_stop;          //{ +0x0018    } | .QueryStop
        _m04 cancel_stop_t         cancel_stop;         //{ +0x0020    } | .CancelStop
        _m05 stop_t                stop;                //{ +0x0028    } | .Stop
        _m06 query_remove_t        query_remove;        //{ +0x0030    } | .QueryRemove
        _m07 cancel_remove_t       cancel_remove;       //{ +0x0038    } | .CancelRemove
        _m08 remove_t              remove;              //{ +0x0040    } | .Remove
        _m09 query_capabilities_t  query_capabilities;  //{ +0x0048    } | .QueryCapabilities
        _m10 surprise_removal_t    surprise_removal;    //{ +0x0050    } | .SurpriseRemoval
        _m11 query_power_t         query_power;         //{ +0x0058    } | .QueryPower
        _m12 set_power_t           set_power;           //{ +0x0060    } | .SetPower
        _m13 query_interface_t     query_interface;     //{ +0x0068    } | .QueryInterface
                                                      
        SDK_MAGIC_PROPERTIES( "_KSDEVICE_DISPATCH.$", 0x0, false, 0xea16c73e7f9b5179 );                   
        SDK_FIXED_SIZE( ksdevice_dispatch_t, 0x70 );                   
    };                                                
};
#include "magic/ksdevice_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::ksdevice_dispatch_t, 0x70 );
