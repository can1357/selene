#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enum_child_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_ENUM_CHILD]
    // => WDK 10 (NV)
    //
    struct enum_child_t                      
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t            flags;        //{ +0x0000    } | .Flags
        _m01 uint32_t            name_length;  //{ +0x0004    } | .NameLength
        _m02 sdk::array<char, 1> name;         //{ +0x0008    } | .Name
                                             
        SDK_NONVOL_PROPERTIES( "_ACPI_ENUM_CHILD.$", 0x0, false, 0xf508ea9cf60f2972 );            
        SDK_FIXED_SIZE( enum_child_t, 0xc );            
    };                                       
};
#include "magic/enum_child_t.end.hpp"
SDK_VERIFY( struct acpi::enum_child_t, 0xc );
