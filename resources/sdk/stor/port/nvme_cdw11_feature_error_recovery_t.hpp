#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_error_recovery_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_ERROR_RECOVERY]
    // => Windows 11
    //
    union nvme_cdw11_feature_error_recovery_t
    {                                        
        // Windows 11          
        //                     
        _m00 uint16_t tler;                    //{ +0x0000@0  } | .TLER
        _m01 uint1_t  dulbe;                   //{ +0x0000@16 } | .DULBE
        _m02 uint32_t as_ulong;                //{ +0x0000    } | .AsUlong
                                             
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_ERROR_RECOVERY.$", 0x0, false, 0x8693963d7a4baf69 );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_error_recovery_t, 0x4 );         
    };                                       
};
#include "magic/nvme_cdw11_feature_error_recovery_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_error_recovery_t, 0x4 );
