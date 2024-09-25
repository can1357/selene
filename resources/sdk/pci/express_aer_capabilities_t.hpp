#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_aer_capabilities_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_AER_CAPABILITIES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_aer_capabilities_t                    
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                              
        _m00 uint5_t  first_error_pointer;                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FirstErrorPointer
        _m01 uint1_t  ecrc_generation_capable;            //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ECRCGenerationCapable
        _m02 uint1_t  ecrc_generation_enable;             //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .ECRCGenerationEnable
        _m03 uint1_t  ecrc_check_capable;                 //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .ECRCCheckCapable
        _m04 uint1_t  ecrc_check_enable;                  //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .ECRCCheckEnable
        _m05 uint1_t  multiple_header_recording_capable;  //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .MultipleHeaderRecordingCapable
        _m06 uint1_t  multiple_header_recording_enable;   //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .MultipleHeaderRecordingEnable
        _m07 uint1_t  tlp_prefix_log_present;             //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .TlpPrefixLogPresent
        _m08 uint32_t as_ulong;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                        
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_AER_CAPABILITIES.$", 0x4, true, 0x247e73743141e6b2 );                                  
        SDK_FIXED_SIZE( express_aer_capabilities_t, 0x4 );                                  
    };                                                  
};
#include "magic/express_aer_capabilities_t.end.hpp"
SDK_VERIFY( union pci::express_aer_capabilities_t, 0x4 );
