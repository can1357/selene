#pragma once
#include <sdkgen/support_library.hpp>
#include "../kd/namespace_enum_t.hpp"
#include "../pci/debugging_device_in_use_t.hpp"
#include "../acpi/debugging_device_in_use_t.hpp"

#include "magic/debugging_device_in_use_t.start.hpp"
namespace wdf
{
    // [struct _DEBUGGING_DEVICE_IN_USE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct debugging_device_in_use_t                                 
    {                                                                
        enum class u0_name_space_t : int32_t                         
        {                                                            
            pci =  0x0,                                                // WDK 10
            acpi = 0x1,                                                // WDK 10
            any =  0x2,                                                // WDK 10
            none = 0x3,                                                // WDK 10
            max =  0x4,                                                // WDK 10
        };                                                           
                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                           
        _m00 int32_t                                name_space;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NameSpace
        _m01 uint32_t                               structure_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .StructureLength
        _m02 struct acpi::debugging_device_in_use_t acpi_device;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AcpiDevice
        _m03 struct pci::debugging_device_in_use_t  pci_device;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PciDevice
                                                                     
        SDK_NONVOL_PROPERTIES( "_DEBUGGING_DEVICE_IN_USE.$", 0x14, true, 0x3a5bd494f34ba17e );                 
        SDK_FIXED_SIZE( debugging_device_in_use_t, 0x14 );                 
    };                                                               
};
#include "magic/debugging_device_in_use_t.end.hpp"
SDK_VERIFY( struct wdf::debugging_device_in_use_t, 0x14 );
