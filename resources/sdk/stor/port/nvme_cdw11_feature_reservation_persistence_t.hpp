#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_reservation_persistence_t.start.hpp"
namespace stor::port
{
    // [struct NVME_CDW11_FEATURE_RESERVATION_PERSISTENCE]
    // => Windows 11
    //
    struct nvme_cdw11_feature_reservation_persistence_t
    {                                                  
        // Windows 11     
        //                
        _m00 uint1_t ptpl;                               //{ +0x0000@0  } | .PTPL
                                                       
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_RESERVATION_PERSISTENCE.$", 0x0, false, 0xbe0008f8deaa9762 );     
        SDK_FIXED_SIZE( nvme_cdw11_feature_reservation_persistence_t, 0x4 );     
    };                                                 
};
#include "magic/nvme_cdw11_feature_reservation_persistence_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_cdw11_feature_reservation_persistence_t, 0x4 );
