#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw12_zone_append_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW12_ZONE_APPEND]
    // => Windows 11
    //
    union nvme_cdw12_zone_append_t
    {                             
        // Windows 11          
        //                     
        _m00 uint16_t nlb;          //{ +0x0000@0  } | .NLB
        _m01 uint1_t  piremap;      //{ +0x0000@25 } | .PIREMAP
        _m02 uint4_t  prinfo;       //{ +0x0000@26 } | .PRINFO
        _m03 uint1_t  fua;          //{ +0x0000@30 } | .FUA
        _m04 uint1_t  lr;           //{ +0x0000@31 } | .LR
        _m05 uint32_t as_ulong;     //{ +0x0000    } | .AsUlong
                                  
        SDK_MAGIC_PROPERTIES( "NVME_CDW12_ZONE_APPEND.$", 0x0, false, 0x2e372fc55af7d82a );         
        SDK_FIXED_SIZE( nvme_cdw12_zone_append_t, 0x4 );         
    };                            
};
#include "magic/nvme_cdw12_zone_append_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw12_zone_append_t, 0x4 );
