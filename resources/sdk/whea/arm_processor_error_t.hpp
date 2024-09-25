#pragma once
#include <sdkgen/support_library.hpp>
#include "arm_bus_error_t.hpp"
#include "arm_tlb_error_t.hpp"
#include "arm_cache_error_t.hpp"

#include "magic/arm_processor_error_t.start.hpp"
namespace whea
{
    // [union _WHEA_ARM_PROCESSOR_ERROR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union arm_processor_error_t                          
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                               
        _m00 struct whea::arm_cache_error_t cache_error;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CacheError
        _m01 struct whea::arm_tlb_error_t   tlb_error;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TlbError
        _m02 struct whea::arm_bus_error_t   bus_error;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BusError
        _m03 uint64_t                       as_ulonglong;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONGLONG
                                                         
        SDK_NONVOL_PROPERTIES( "_WHEA_ARM_PROCESSOR_ERROR.$", 0xc, true, 0x96b5895fe9f720cd );             
        SDK_FIXED_SIZE( arm_processor_error_t, 0xc );             
    };                                                   
};
#include "magic/arm_processor_error_t.end.hpp"
SDK_VERIFY( union whea::arm_processor_error_t, 0xc );
