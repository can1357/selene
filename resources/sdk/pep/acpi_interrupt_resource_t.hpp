#pragma once
#include <sdkgen/support_library.hpp>
#include "acpi_resource_type_t.hpp"
#include "acpi_resource_flags_t.hpp"
#include "../nt/kinterrupt_mode_t.hpp"
#include "../nt/kinterrupt_polarity_t.hpp"

#include "magic/acpi_interrupt_resource_t.start.hpp"
namespace pep
{
    // [struct _PEP_ACPI_INTERRUPT_RESOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct acpi_interrupt_resource_t                             
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                       
        _m00 enum pep::acpi_resource_type_t   type;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 enum nt::kinterrupt_mode_t       interrupt_type;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .InterruptType
        _m02 enum nt::kinterrupt_polarity_t   interrupt_polarity;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InterruptPolarity
        _m03 union pep::acpi_resource_flags_t flags;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m04 uint8_t                          count;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Count
        _m05 uint32_t*                        pins;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Pins
                                                                 
        SDK_MAGIC_PROPERTIES( "_PEP_ACPI_INTERRUPT_RESOURCE.$", 0x20, true, 0x6922fd68cfbaab60 );                   
        SDK_FIXED_SIZE( acpi_interrupt_resource_t, 0x20 );                   
    };                                                           
};
#include "magic/acpi_interrupt_resource_t.end.hpp"
SDK_VERIFY( struct pep::acpi_interrupt_resource_t, 0x20 );
