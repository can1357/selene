#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_zone_management_receive_t.start.hpp"
namespace stor::port
{
    // [struct NVME_CDW10_ZONE_MANAGEMENT_RECEIVE]
    // => Windows 11
    //
    struct nvme_cdw10_zone_management_receive_t
    {                                          
        // Windows 11      
        //                 
        _m00 uint64_t slba;                      //{ +0x0000    } | .SLBA
                                               
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_ZONE_MANAGEMENT_RECEIVE.$", 0x0, false, 0xc7ab8da116eb4bb7 );     
        SDK_FIXED_SIZE( nvme_cdw10_zone_management_receive_t, 0x8 );     
    };                                         
};
#include "magic/nvme_cdw10_zone_management_receive_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_cdw10_zone_management_receive_t, 0x8 );
