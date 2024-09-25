#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw15_zone_append_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW15_ZONE_APPEND]
    // => Windows 11
    //
    union nvme_cdw15_zone_append_t
    {                             
        // Windows 11          
        //                     
        _m00 uint16_t lbat;         //{ +0x0000@0  } | .LBAT
        _m01 uint16_t lbatm;        //{ +0x0000@16 } | .LBATM
        _m02 uint32_t as_ulong;     //{ +0x0000    } | .AsUlong
                                  
        SDK_MAGIC_PROPERTIES( "NVME_CDW15_ZONE_APPEND.$", 0x0, false, 0x6ab64f541e6485e );         
        SDK_FIXED_SIZE( nvme_cdw15_zone_append_t, 0x4 );         
    };                            
};
#include "magic/nvme_cdw15_zone_append_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw15_zone_append_t, 0x4 );
