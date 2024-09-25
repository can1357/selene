#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/map_register_entry_t.start.hpp"
namespace nt
{
    // [struct _MAP_REGISTER_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct map_register_entry_t      
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                           
        _m00 void*   map_register;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MapRegister
        _m01 uint8_t write_to_device;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .WriteToDevice
                                     
        SDK_NONVOL_PROPERTIES( "_MAP_REGISTER_ENTRY.$", 0x10, true, 0xbfce157f07a14a9f );                
        SDK_FIXED_SIZE( map_register_entry_t, 0x10 );                
    };                               
};
#include "magic/map_register_entry_t.end.hpp"
SDK_VERIFY( struct nt::map_register_entry_t, 0x10 );
