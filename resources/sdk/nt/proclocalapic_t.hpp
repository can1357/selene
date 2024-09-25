#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proclocalapic_t.start.hpp"
namespace nt
{
    // [struct _PROCLOCALAPIC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proclocalapic_t              
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint8_t  type;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t  length;             //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Length
        _m02 uint8_t  acpi_processor_id;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ACPIProcessorID
        _m03 uint8_t  apicid;             //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .APICID
        _m04 uint32_t flags;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
                                        
        SDK_MAGIC_PROPERTIES( "_PROCLOCALAPIC.$", 0x8, true, 0x7ffaab5403e41f90 );                  
        SDK_FIXED_SIZE( proclocalapic_t, 0x8 );                  
    };                                  
};
#include "magic/proclocalapic_t.end.hpp"
SDK_VERIFY( struct nt::proclocalapic_t, 0x8 );
