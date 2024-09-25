#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/acpi_resource_flags_t.start.hpp"
namespace pep
{
    // [union _PEP_ACPI_RESOURCE_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union acpi_resource_flags_t       
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t as_u_long;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULong
        _m01 uint1_t  shared;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Shared
        _m02 uint1_t  wake;             //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Wake
        _m03 uint1_t  resource_usage;   //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .ResourceUsage
        _m04 uint1_t  slave_mode;       //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .SlaveMode
        _m05 uint1_t  addressing_mode;  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .AddressingMode
        _m06 uint1_t  shared_mode;      //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .SharedMode
                                      
        SDK_MAGIC_PROPERTIES( "_PEP_ACPI_RESOURCE_FLAGS.$", 0x4, true, 0xa7e88f531983bb58 );                
        SDK_FIXED_SIZE( acpi_resource_flags_t, 0x4 );                
    };                                
};
#include "magic/acpi_resource_flags_t.end.hpp"
SDK_VERIFY( union pep::acpi_resource_flags_t, 0x4 );
