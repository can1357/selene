#pragma once
#include <sdkgen/support_library.hpp>

namespace arbiter { struct interface_t;   }
namespace nt      { struct device_node_t; }

#include "magic/resource_arbiter_entry_t.start.hpp"
namespace pi
{
    // [struct _PI_RESOURCE_ARBITER_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct resource_arbiter_entry_t                           
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                    
        _m00 nt::list_entry_t             device_arbiter_list;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceArbiterList
        _m01 uint8_t                      resource_type;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ResourceType
        _m02 struct arbiter::interface_t* arbiter_interface;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ArbiterInterface
        _m03 struct nt::device_node_t*    device_node;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DeviceNode
        _m04 nt::list_entry_t             resource_list;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ResourceList
        _m05 nt::list_entry_t             best_resource_list;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .BestResourceList
        _m06 nt::list_entry_t             best_config;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .BestConfig
        _m07 nt::list_entry_t             active_arbiter_list;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ActiveArbiterList
        _m08 uint8_t                      state;                //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .State
        _m09 uint8_t                      resources_changed;    //{ +0x0069    +0x0069    +0x0069    +0x0069    } | .ResourcesChanged
                                                              
        SDK_MAGIC_PROPERTIES( "_PI_RESOURCE_ARBITER_ENTRY.$", 0x70, true, 0xe34136a1e72ced13 );                    
        SDK_FIXED_SIZE( resource_arbiter_entry_t, 0x70 );                    
    };                                                        
};
#include "magic/resource_arbiter_entry_t.end.hpp"
SDK_VERIFY( struct pi::resource_arbiter_entry_t, 0x70 );
