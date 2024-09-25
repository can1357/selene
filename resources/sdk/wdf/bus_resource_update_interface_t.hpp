#pragma once
#include <sdkgen/support_library.hpp>

namespace cm { struct resource_list_t; }

#include "magic/bus_resource_update_interface_t.start.hpp"
namespace wdf
{
    // [struct _BUS_RESOURCE_UPDATE_INTERFACE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bus_resource_update_interface_t                         
    {                                                              
        using pget_updated_bus_resource_t = sdk::function<int32_t(void*, struct cm::resource_list_t**, struct cm::resource_list_t**)>*;                         
                                                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                         
        _m00 uint16_t                     size;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                     version;                   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                        context;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*  interface_reference;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*  interface_dereference;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 pget_updated_bus_resource_t  get_updated_bus_resource;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .GetUpdatedBusResource
                                                                   
        SDK_NONVOL_PROPERTIES( "_BUS_RESOURCE_UPDATE_INTERFACE.$", 0x28, true, 0x8ac014697c53e2b8 );                         
        SDK_FIXED_SIZE( bus_resource_update_interface_t, 0x28 );                         
    };                                                             
};
#include "magic/bus_resource_update_interface_t.end.hpp"
SDK_VERIFY( struct wdf::bus_resource_update_interface_t, 0x28 );
