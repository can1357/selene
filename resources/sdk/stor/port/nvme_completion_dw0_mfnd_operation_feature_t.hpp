#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_completion_dw0_mfnd_operation_feature_t.start.hpp"
namespace stor::port
{
    // [union NVME_COMPLETION_DW0_MFND_OPERATION_FEATURE]
    // => Windows 11
    //
    union nvme_completion_dw0_mfnd_operation_feature_t
    {                                                 
        // Windows 11                          
        //                                     
        _m00 uint1_t  operation_mode_flag;              //{ +0x0000@0  } | .OperationModeFlag
        _m01 uint1_t  operation_privilege_flag;         //{ +0x0000@1  } | .OperationPrivilegeFlag
        _m02 uint32_t as_ulong;                         //{ +0x0000    } | .AsUlong
                                                      
        SDK_MAGIC_PROPERTIES( "NVME_COMPLETION_DW0_MFND_OPERATION_FEATURE.$", 0x0, false, 0x2f274dd651125fa );                         
        SDK_FIXED_SIZE( nvme_completion_dw0_mfnd_operation_feature_t, 0x4 );                         
    };                                                
};
#include "magic/nvme_completion_dw0_mfnd_operation_feature_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_completion_dw0_mfnd_operation_feature_t, 0x4 );
