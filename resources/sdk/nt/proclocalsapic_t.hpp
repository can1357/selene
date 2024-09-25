#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proclocalsapic_t.start.hpp"
namespace nt
{
    // [struct _PROCLOCALSAPIC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proclocalsapic_t                                 
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                  
        _m00 uint8_t             type;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t             length;                      //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Length
        _m02 uint8_t             acpi_processor_id;           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ACPIProcessorID
        _m03 uint8_t             apicid;                      //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .APICID
        _m04 uint8_t             apiceid;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .APICEID
        _m05 uint32_t            flags;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m06 uint32_t            acpi_processor_uid_integer;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ACPIProcessorUIDInteger
        _m07 sdk::array<char, 1> acpi_processor_uid_string;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ACPIProcessorUIDString
                                                            
        SDK_MAGIC_PROPERTIES( "_PROCLOCALSAPIC.$", 0x11, true, 0xaa5394d2e9d67f69 );                           
        SDK_FIXED_SIZE( proclocalsapic_t, 0x11 );                           
    };                                                      
};
#include "magic/proclocalsapic_t.end.hpp"
SDK_VERIFY( struct nt::proclocalsapic_t, 0x11 );
