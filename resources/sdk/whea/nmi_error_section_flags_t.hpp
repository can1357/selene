#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nmi_error_section_flags_t.start.hpp"
namespace whea
{
    // [union _WHEA_NMI_ERROR_SECTION_FLAGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union nmi_error_section_flags_t    
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint1_t  hypervisor_error;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .HypervisorError
        _m01 uint32_t as_ulong;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                       
        SDK_NONVOL_PROPERTIES( "_WHEA_NMI_ERROR_SECTION_FLAGS.$", 0x4, true, 0x6d6b940a435d74e9 );                 
        SDK_FIXED_SIZE( nmi_error_section_flags_t, 0x4 );                 
    };                                 
};
#include "magic/nmi_error_section_flags_t.end.hpp"
SDK_VERIFY( union whea::nmi_error_section_flags_t, 0x4 );
