#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_value_entry_t.start.hpp"
namespace win
{
    // [struct _KEY_VALUE_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_value_entry_t               
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                 
        _m00 nt::unicode_view* value_name;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValueName
        _m01 uint32_t          data_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DataLength
        _m02 uint32_t          data_offset;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .DataOffset
        _m03 uint32_t          type;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Type
                                           
        SDK_NONVOL_PROPERTIES( "_KEY_VALUE_ENTRY.$", 0x18, true, 0xfeb62158dd21d41d );            
        SDK_FIXED_SIZE( key_value_entry_t, 0x18 );            
    };                                     
};
#include "magic/key_value_entry_t.end.hpp"
SDK_VERIFY( struct win::key_value_entry_t, 0x18 );
