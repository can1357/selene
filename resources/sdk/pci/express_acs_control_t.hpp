#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_acs_control_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_ACS_CONTROL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_acs_control_t            
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint1_t  source_validation;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SourceValidation
        _m01 uint1_t  translation_blocking;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .TranslationBlocking
        _m02 uint1_t  request_redirect;      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .RequestRedirect
        _m03 uint1_t  completion_redirect;   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .CompletionRedirect
        _m04 uint1_t  upstream_forwarding;   //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .UpstreamForwarding
        _m05 uint1_t  egress_control;        //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .EgressControl
        _m06 uint1_t  direct_translation;    //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .DirectTranslation
        _m07 uint16_t as_ushort;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                           
        // Windows 11                      
        //                                 
        _m08 uint1_t  io_blocking;           //{ +0x0000@7  } | .IoBlocking
        _m09 uint2_t  dsp_memory_control;    //{ +0x0000@8  } | .DspMemoryControl
        _m10 uint2_t  usp_memory_control;    //{ +0x0000@10 } | .UspMemoryControl
        _m11 uint1_t  unclaimed_redirect;    //{ +0x0000@12 } | .UnclaimedRedirect
                                           
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ACS_CONTROL.$", 0x2, true, 0xf8a8866cce43e7db );                     
        SDK_FIXED_SIZE( express_acs_control_t, 0x2 );                     
    };                                     
};
#include "magic/express_acs_control_t.end.hpp"
SDK_VERIFY( union pci::express_acs_control_t, 0x2 );
