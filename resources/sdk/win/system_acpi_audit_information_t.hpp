#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_acpi_audit_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_ACPI_AUDIT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_acpi_audit_information_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t rsdp_count;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RsdpCount
        _m01 uint1_t  same_rsdt;            //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .SameRsdt
        _m02 uint1_t  slic_present;         //{ +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  } | .SlicPresent
        _m03 uint1_t  slic_different;       //{ +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  } | .SlicDifferent
                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_ACPI_AUDIT_INFORMATION.$", 0x8, true, 0x61d6580b15b4538e );               
        SDK_FIXED_SIZE( system_acpi_audit_information_t, 0x8 );               
    };                                    
};
#include "magic/system_acpi_audit_information_t.end.hpp"
SDK_VERIFY( struct win::system_acpi_audit_information_t, 0x8 );
