#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/interface_type_t.hpp"
#include "partial_resource_list_t.hpp"

#include "magic/full_resource_descriptor_t.start.hpp"
namespace cm
{
    // [struct _CM_FULL_RESOURCE_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct full_resource_descriptor_t                                 
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                            
        _m00 enum nt::interface_type_t          interface_type;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InterfaceType
        _m01 uint32_t                           bus_number;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .BusNumber
        _m02 struct cm::partial_resource_list_t partial_resource_list;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PartialResourceList
                                                                      
        SDK_NONVOL_PROPERTIES( "_CM_FULL_RESOURCE_DESCRIPTOR.$", 0x24, true, 0x1bc044c93b9706fd );                      
        SDK_FIXED_SIZE( full_resource_descriptor_t, 0x24 );                      
    };                                                                
};
#include "magic/full_resource_descriptor_t.end.hpp"
SDK_VERIFY( struct cm::full_resource_descriptor_t, 0x24 );
