#pragma once
#include <sdkgen/support_library.hpp>
#include "bus_data_type_t.hpp"
#include "interface_type_t.hpp"

namespace cm { struct resource_list_t;              }
namespace io { struct resource_requirements_list_t; }

#include "magic/bus_handler_t.start.hpp"
namespace nt
{
    struct bus_handler_t;
    struct device_object_t;
    struct driver_object_t;
    struct supported_ranges_t;

    // [struct _BUS_HANDLER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bus_handler_t                                                  
    {                                                                     
        using get_bus_data_t =          sdk::function<uint32_t(struct nt::bus_handler_t*, struct nt::bus_handler_t*, uint32_t, void*, uint32_t, uint32_t)>*;                              
        using set_bus_data_t =          sdk::function<uint32_t(struct nt::bus_handler_t*, struct nt::bus_handler_t*, uint32_t, void*, uint32_t, uint32_t)>*;                              
        using adjust_resource_list_t =  sdk::function<int32_t(struct nt::bus_handler_t*, struct nt::bus_handler_t*, struct io::resource_requirements_list_t**)>*;                              
        using assign_slot_resources_t = sdk::function<int32_t(struct nt::bus_handler_t*, struct nt::bus_handler_t*, nt::unicode_view*, nt::unicode_view*, struct nt::driver_object_t*, struct nt::device_object_t*, uint32_t, struct cm::resource_list_t**)>*;                              
        using translate_bus_address_t = sdk::function<uint8_t(struct nt::bus_handler_t*, struct nt::bus_handler_t*, int64_t, uint32_t*, int64_t*)>*;                              
                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 uint32_t                       version;                        //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 enum nt::interface_type_t      interface_type;                 //{ +0x0004    +0x0004    +0x0004    } | .InterfaceType
        _m02 enum nt::bus_data_type_t       configuration_type;             //{ +0x0008    +0x0008    +0x0008    } | .ConfigurationType
        _m03 uint32_t                       bus_number;                     //{ +0x000c    +0x000c    +0x000c    } | .BusNumber
        _m04 struct nt::device_object_t*    device_object;                  //{ +0x0010    +0x0010    +0x0010    } | .DeviceObject
        _m05 struct nt::bus_handler_t*      parent_handler;                 //{ +0x0018    +0x0018    +0x0018    } | .ParentHandler
        _m06 void*                          bus_data;                       //{ +0x0020    +0x0020    +0x0020    } | .BusData
        _m07 uint32_t                       device_control_extension_size;  //{ +0x0028    +0x0028    +0x0028    } | .DeviceControlExtensionSize
        _m08 struct nt::supported_ranges_t* bus_addresses;                  //{ +0x0030    +0x0030    +0x0030    } | .BusAddresses
        _m09 get_bus_data_t                 get_bus_data;                   //{ +0x0048    +0x0048    +0x0048    } | .GetBusData
        _m10 set_bus_data_t                 set_bus_data;                   //{ +0x0050    +0x0050    +0x0050    } | .SetBusData
        _m11 adjust_resource_list_t         adjust_resource_list;           //{ +0x0058    +0x0058    +0x0058    } | .AdjustResourceList
        _m12 assign_slot_resources_t        assign_slot_resources;          //{ +0x0060    +0x0060    +0x0060    } | .AssignSlotResources
        _m13 translate_bus_address_t        translate_bus_address;          //{ +0x0068    +0x0068    +0x0068    } | .TranslateBusAddress
                                                                          
        SDK_MAGIC_PROPERTIES( "_BUS_HANDLER.$", 0xb0, true, 0xb6002aeb3e873909 );                              
        SDK_DYNAMIC_SIZE( bus_handler_t );                                
    };                                                                    
};
#include "magic/bus_handler_t.end.hpp"
