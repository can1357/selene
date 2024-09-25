#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_mfnd_operation_feature_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_MFND_OPERATION_FEATURE]
    // => Windows 11
    //
    union nvme_cdw11_mfnd_operation_feature_t   
    {                                           
        // Windows 11                           
        //                                      
        _m00 uint4_t  sel;                        //{ +0x0000@0  } | .SEL
        _m01 uint1_t  enable_flag;                //{ +0x0000@4  } | .EnableFlag
        _m02 uint8_t  number_of_child_functions;  //{ +0x0000@8  } | .NumberOfChildFunctions
        _m03 uint32_t as_ulong;                   //{ +0x0000    } | .AsUlong
                                                
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_MFND_OPERATION_FEATURE.$", 0x0, false, 0xa26da2064a5b6d83 );                          
        SDK_FIXED_SIZE( nvme_cdw11_mfnd_operation_feature_t, 0x4 );                          
    };                                          
};
#include "magic/nvme_cdw11_mfnd_operation_feature_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_mfnd_operation_feature_t, 0x4 );
