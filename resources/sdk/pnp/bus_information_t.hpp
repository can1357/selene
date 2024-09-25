#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/interface_type_t.hpp"

#include "magic/bus_information_t.start.hpp"
namespace pnp
{
    // [struct _PNP_BUS_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bus_information_t                           
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                             
        _m00 struct nt::guid_t         bus_type_guid;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BusTypeGuid
        _m01 enum nt::interface_type_t legacy_bus_type;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LegacyBusType
        _m02 uint32_t                  bus_number;       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .BusNumber
                                                       
        SDK_NONVOL_PROPERTIES( "_PNP_BUS_INFORMATION.$", 0x18, true, 0x73b6ab259c0bbd17 );                
        SDK_FIXED_SIZE( bus_information_t, 0x18 );                
    };                                                 
};
#include "magic/bus_information_t.end.hpp"
SDK_VERIFY( struct pnp::bus_information_t, 0x18 );
