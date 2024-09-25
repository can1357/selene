#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/port_data_entry_t.start.hpp"
namespace win
{
    // [struct _PORT_DATA_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_data_entry_t
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 void*    base;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Base
        _m01 uint32_t size;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
                            
        SDK_MAGIC_PROPERTIES( "_PORT_DATA_ENTRY.$", 0x10, true, 0x177247de23535c5b );     
        SDK_FIXED_SIZE( port_data_entry_t, 0x10 );     
    };                      
};
#include "magic/port_data_entry_t.end.hpp"
SDK_VERIFY( struct win::port_data_entry_t, 0x10 );
