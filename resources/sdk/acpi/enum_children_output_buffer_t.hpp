#pragma once
#include <sdkgen/support_library.hpp>
#include "enum_child_t.hpp"

#include "magic/enum_children_output_buffer_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_ENUM_CHILDREN_OUTPUT_BUFFER]
    // => WDK 10 (NV)
    //
    struct enum_children_output_buffer_t                                 
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t                                 signature;           //{ +0x0000    } | .Signature
        _m01 uint32_t                                 number_of_children;  //{ +0x0004    } | .NumberOfChildren
        _m02 sdk::array<struct acpi::enum_child_t, 1> children;            //{ +0x0008    } | .Children
                                                                         
        SDK_NONVOL_PROPERTIES( "_ACPI_ENUM_CHILDREN_OUTPUT_BUFFER.$", 0x0, false, 0x41ceda6b67899c28 );                   
        SDK_FIXED_SIZE( enum_children_output_buffer_t, 0x14 );                   
    };                                                                   
};
#include "magic/enum_children_output_buffer_t.end.hpp"
SDK_VERIFY( struct acpi::enum_children_output_buffer_t, 0x14 );
