#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/error_injection_capabilities_t.start.hpp"
namespace whea
{
    // [union _WHEA_ERROR_INJECTION_CAPABILITIES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union error_injection_capabilities_t                  
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint1_t  processor_correctable;                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ProcessorCorrectable
        _m01 uint1_t  processor_uncorrectable_non_fatal;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ProcessorUncorrectableNonFatal
        _m02 uint1_t  processor_uncorrectable_fatal;        //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .ProcessorUncorrectableFatal
        _m03 uint1_t  memory_correctable;                   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .MemoryCorrectable
        _m04 uint1_t  memory_uncorrectable_non_fatal;       //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .MemoryUncorrectableNonFatal
        _m05 uint1_t  memory_uncorrectable_fatal;           //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .MemoryUncorrectableFatal
        _m06 uint1_t  pci_express_correctable;              //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .PCIExpressCorrectable
        _m07 uint1_t  pci_express_uncorrectable_non_fatal;  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .PCIExpressUncorrectableNonFatal
        _m08 uint1_t  pci_express_uncorrectable_fatal;      //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PCIExpressUncorrectableFatal
        _m09 uint1_t  platform_correctable;                 //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .PlatformCorrectable
        _m10 uint1_t  platform_uncorrectable_non_fatal;     //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .PlatformUncorrectableNonFatal
        _m11 uint1_t  platform_uncorrectable_fatal;         //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .PlatformUncorrectableFatal
        _m12 uint1_t  ia64_corrected;                       //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .IA64Corrected
        _m13 uint1_t  ia64_recoverable;                     //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .IA64Recoverable
        _m14 uint1_t  ia64_fatal;                           //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .IA64Fatal
        _m15 uint1_t  ia64_recoverable_cache;               //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .IA64RecoverableCache
        _m16 uint1_t  ia64_recoverable_reg_file;            //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .IA64RecoverableRegFile
        _m17 uint32_t as_ulong;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                          
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_INJECTION_CAPABILITIES.$", 0x4, true, 0x10f5379477487325 );                                    
        SDK_FIXED_SIZE( error_injection_capabilities_t, 0x4 );                                    
    };                                                    
};
#include "magic/error_injection_capabilities_t.end.hpp"
SDK_VERIFY( union whea::error_injection_capabilities_t, 0x4 );
