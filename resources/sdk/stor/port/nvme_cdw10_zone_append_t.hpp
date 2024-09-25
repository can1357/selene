#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_zone_append_t.start.hpp"
namespace stor::port
{
    // [struct NVME_CDW10_ZONE_APPEND]
    // => Windows 11
    //
    struct nvme_cdw10_zone_append_t
    {                              
        // Windows 11      
        //                 
        _m00 uint64_t slba;          //{ +0x0000    } | .SLBA
                                   
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_ZONE_APPEND.$", 0x0, false, 0x2479b5a0868c9c2a );     
        SDK_FIXED_SIZE( nvme_cdw10_zone_append_t, 0x8 );     
    };                             
};
#include "magic/nvme_cdw10_zone_append_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_cdw10_zone_append_t, 0x8 );
