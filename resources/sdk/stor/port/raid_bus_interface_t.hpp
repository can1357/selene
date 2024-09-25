#pragma once
#include <sdkgen/support_library.hpp>
#include "bus_interface_standard_t.hpp"

#include "magic/raid_bus_interface_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_BUS_INTERFACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_bus_interface_t                                      
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                           
        _m00 uint8_t                                     initialized;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Initialized
        _m01 struct stor::port::bus_interface_standard_t interface;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Interface
                                                                     
        SDK_MAGIC_PROPERTIES( "_RAID_BUS_INTERFACE.$", 0x48, true, 0xbadb05ca79b0595a );            
        SDK_FIXED_SIZE( raid_bus_interface_t, 0x48 );                
    };                                                               
};
#include "magic/raid_bus_interface_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_bus_interface_t, 0x48 );
