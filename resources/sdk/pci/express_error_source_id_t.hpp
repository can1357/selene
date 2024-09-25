#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_error_source_id_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_ERROR_SOURCE_ID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_error_source_id_t               
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint3_t  correctable_source_id_fun;    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CorrectableSourceIdFun
        _m01 uint5_t  correctable_source_id_dev;    //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .CorrectableSourceIdDev
        _m02 uint8_t  correctable_source_id_bus;    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .CorrectableSourceIdBus
        _m03 uint3_t  uncorrectable_source_id_fun;  //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .UncorrectableSourceIdFun
        _m04 uint5_t  uncorrectable_source_id_dev;  //{ +0x0002@3  +0x0002@3  +0x0002@3  +0x0002@3  +0x0002@3  } | .UncorrectableSourceIdDev
        _m05 uint8_t  uncorrectable_source_id_bus;  //{ +0x0002@8  +0x0002@8  +0x0002@8  +0x0002@8  +0x0002@8  } | .UncorrectableSourceIdBus
        _m06 uint32_t as_ulong;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                  
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ERROR_SOURCE_ID.$", 0x4, true, 0x7b7ddf0d3b159629 );                            
        SDK_FIXED_SIZE( express_error_source_id_t, 0x4 );                            
    };                                            
};
#include "magic/express_error_source_id_t.end.hpp"
SDK_VERIFY( union pci::express_error_source_id_t, 0x4 );
