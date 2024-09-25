#pragma once
#include <sdkgen/support_library.hpp>

namespace pi { struct bus_extension_t; }

#include "magic/bus_extension_list_t.start.hpp"
namespace nt
{
    // [struct _BUS_EXTENSION_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bus_extension_list_t                        
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                             
        _m00 void*                       next;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 struct pi::bus_extension_t* bus_extension;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BusExtension
                                                       
        SDK_MAGIC_PROPERTIES( "_BUS_EXTENSION_LIST.$", 0x10, true, 0xd845843f28388667 );              
        SDK_FIXED_SIZE( bus_extension_list_t, 0x10 );              
    };                                                 
};
#include "magic/bus_extension_list_t.end.hpp"
SDK_VERIFY( struct nt::bus_extension_list_t, 0x10 );
