#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ipf_mca_descriptor_t.start.hpp"
namespace whea
{
    // [struct _WHEA_IPF_MCA_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ipf_mca_descriptor_t
    {                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint16_t type;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t  enabled;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Enabled
                               
        SDK_NONVOL_PROPERTIES( "_WHEA_IPF_MCA_DESCRIPTOR.$", 0x4, true, 0x91b54154760d3ef5 );        
        SDK_FIXED_SIZE( ipf_mca_descriptor_t, 0x4 );        
    };                         
};
#include "magic/ipf_mca_descriptor_t.end.hpp"
SDK_VERIFY( struct whea::ipf_mca_descriptor_t, 0x4 );
