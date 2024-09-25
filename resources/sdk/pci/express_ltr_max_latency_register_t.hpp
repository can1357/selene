#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_ltr_max_latency_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_ltr_max_latency_register_t     
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint10_t max_snoop_latency_value;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MaxSnoopLatencyValue
        _m01 uint3_t  max_snoop_latency_scale;     //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .MaxSnoopLatencyScale
        _m02 uint2_t  rsvd;                        //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .Rsvd
        _m03 uint1_t  max_snoop_requirement;       //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .MaxSnoopRequirement
        _m04 uint10_t max_no_snoop_latency_value;  //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .MaxNoSnoopLatencyValue
        _m05 uint3_t  max_no_snoop_latency_scale;  //{ +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 } | .MaxNoSnoopLatencyScale
        _m06 uint2_t  rsvd2;                       //{ +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 +0x0000@29 } | .Rsvd2
        _m07 uint1_t  max_no_snoop_requirement;    //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .MaxNoSnoopRequirement
        _m08 uint32_t as_ulong;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                 
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER.$", 0x4, true, 0xf8df10b4214e239e );                           
        SDK_FIXED_SIZE( express_ltr_max_latency_register_t, 0x4 );                           
    };                                           
};
#include "magic/express_ltr_max_latency_register_t.end.hpp"
SDK_VERIFY( union pci::express_ltr_max_latency_register_t, 0x4 );
