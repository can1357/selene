#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/interface_type_t.hpp"

#include "magic/legacy_bus_information_t.start.hpp"
namespace wdf
{
    // [struct _LEGACY_BUS_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct legacy_bus_information_t                    
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                             
        _m00 struct nt::guid_t         bus_type_guid;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BusTypeGuid
        _m01 enum nt::interface_type_t legacy_bus_type;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LegacyBusType
        _m02 uint32_t                  bus_number;       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .BusNumber
                                                       
        SDK_NONVOL_PROPERTIES( "_LEGACY_BUS_INFORMATION.$", 0x18, true, 0xea325c67b05179ba );                
        SDK_FIXED_SIZE( legacy_bus_information_t, 0x18 );                
    };                                                 
};
#include "magic/legacy_bus_information_t.end.hpp"
SDK_VERIFY( struct wdf::legacy_bus_information_t, 0x18 );
