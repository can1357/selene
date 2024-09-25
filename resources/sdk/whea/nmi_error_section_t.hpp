#pragma once
#include <sdkgen/support_library.hpp>
#include "nmi_error_section_flags_t.hpp"

#include "magic/nmi_error_section_t.start.hpp"
namespace whea
{
    // [struct _WHEA_NMI_ERROR_SECTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct nmi_error_section_t                           
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                               
        _m00 sdk::array<uint8_t, 8>                data;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Data
        _m01 union whea::nmi_error_section_flags_t flags;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                                         
        SDK_NONVOL_PROPERTIES( "_WHEA_NMI_ERROR_SECTION.$", 0xc, true, 0xdc9d76d4e9a22433 );      
        SDK_FIXED_SIZE( nmi_error_section_t, 0xc );      
    };                                                   
};
#include "magic/nmi_error_section_t.end.hpp"
SDK_VERIFY( struct whea::nmi_error_section_t, 0xc );
