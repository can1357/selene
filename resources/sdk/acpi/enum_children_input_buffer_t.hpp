#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enum_children_input_buffer_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_ENUM_CHILDREN_INPUT_BUFFER]
    // => WDK 10 (NV)
    //
    struct enum_children_input_buffer_t      
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t            signature;    //{ +0x0000    } | .Signature
        _m01 uint32_t            flags;        //{ +0x0004    } | .Flags
        _m02 uint32_t            name_length;  //{ +0x0008    } | .NameLength
        _m03 sdk::array<char, 1> name;         //{ +0x000c    } | .Name
                                             
        SDK_NONVOL_PROPERTIES( "_ACPI_ENUM_CHILDREN_INPUT_BUFFER.$", 0x0, false, 0xa73d2b61231f4d4a );            
        SDK_FIXED_SIZE( enum_children_input_buffer_t, 0x10 );            
    };                                       
};
#include "magic/enum_children_input_buffer_t.end.hpp"
SDK_VERIFY( struct acpi::enum_children_input_buffer_t, 0x10 );
