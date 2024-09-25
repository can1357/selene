#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debugging_device_in_use_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_DEBUGGING_DEVICE_IN_USE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct debugging_device_in_use_t                       
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                 
        _m00 uint32_t               name_space_path_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NameSpacePathLength
        _m01 sdk::array<wchar_t, 1> name_space_path;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NameSpacePath
                                                           
        SDK_NONVOL_PROPERTIES( "_ACPI_DEBUGGING_DEVICE_IN_USE.$", 0x8, true, 0xe9b455bcdd059f7d );                       
        SDK_FIXED_SIZE( debugging_device_in_use_t, 0x8 );                       
    };                                                     
};
#include "magic/debugging_device_in_use_t.end.hpp"
SDK_VERIFY( struct acpi::debugging_device_in_use_t, 0x8 );
