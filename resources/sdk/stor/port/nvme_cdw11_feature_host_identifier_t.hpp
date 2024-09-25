#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_host_identifier_t.start.hpp"
namespace stor::port
{
    // [struct NVME_CDW11_FEATURE_HOST_IDENTIFIER]
    // => Windows 11
    //
    struct nvme_cdw11_feature_host_identifier_t
    {                                          
        // Windows 11      
        //                 
        _m00 uint1_t exhid;                      //{ +0x0000@0  } | .EXHID
                                               
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_HOST_IDENTIFIER.$", 0x0, false, 0x9fcb4a92ca3b5857 );      
        SDK_FIXED_SIZE( nvme_cdw11_feature_host_identifier_t, 0x4 );      
    };                                         
};
#include "magic/nvme_cdw11_feature_host_identifier_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_cdw11_feature_host_identifier_t, 0x4 );
