#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proclocalx2apic_t.start.hpp"
namespace nt
{
    // [struct _PROCLOCALX2APIC]
    // => Windows 11
    //
    struct proclocalx2apic_t            
    {                                   
        // Windows 11                   
        //                              
        _m00 uint8_t  type;               //{ +0x0000    } | .Type
        _m01 uint8_t  length;             //{ +0x0001    } | .Length
        _m02 uint32_t apicid;             //{ +0x0004    } | .APICID
        _m03 uint32_t flags;              //{ +0x0008    } | .Flags
        _m04 uint32_t acpi_processor_id;  //{ +0x000c    } | .ACPIProcessorID
                                        
        SDK_MAGIC_PROPERTIES( "_PROCLOCALX2APIC.$", 0x0, false, 0x34a4fc4b23ab305b );                  
        SDK_FIXED_SIZE( proclocalx2apic_t, 0x10 );                  
    };                                  
};
#include "magic/proclocalx2apic_t.end.hpp"
SDK_VERIFY( struct nt::proclocalx2apic_t, 0x10 );
