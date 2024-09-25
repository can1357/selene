#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_reservation_notification_mask_t.start.hpp"
namespace stor::port
{
    // [struct NVME_CDW11_FEATURE_RESERVATION_NOTIFICATION_MASK]
    // => Windows 11
    //
    struct nvme_cdw11_feature_reservation_notification_mask_t
    {                                                        
        // Windows 11       
        //                  
        _m00 uint1_t regpre;                                   //{ +0x0000@1  } | .REGPRE
        _m01 uint1_t resrel;                                   //{ +0x0000@2  } | .RESREL
        _m02 uint1_t respre;                                   //{ +0x0000@3  } | .RESPRE
                                                             
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_RESERVATION_NOTIFICATION_MASK.$", 0x0, false, 0x1eb5cc2b6fae4fe2 );       
        SDK_FIXED_SIZE( nvme_cdw11_feature_reservation_notification_mask_t, 0x4 );       
    };                                                       
};
#include "magic/nvme_cdw11_feature_reservation_notification_mask_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_cdw11_feature_reservation_notification_mask_t, 0x4 );
