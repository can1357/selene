#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_power_state_desc_t.start.hpp"
namespace stor::port
{
    // [struct NVME_POWER_STATE_DESC]
    // => Windows 11
    //
    struct nvme_power_state_desc_t
    {                             
        // Windows 11       
        //                  
        _m00 uint16_t mp;           //{ +0x0000    } | .MP
        _m01 uint1_t  mps;          //{ +0x0003@0  } | .MPS
        _m02 uint1_t  nops;         //{ +0x0003@1  } | .NOPS
        _m03 uint32_t enlat;        //{ +0x0004    } | .ENLAT
        _m04 uint32_t exlat;        //{ +0x0008    } | .EXLAT
        _m05 uint5_t  rrt;          //{ +0x000c@0  } | .RRT
        _m06 uint5_t  rrl;          //{ +0x000d@0  } | .RRL
        _m07 uint5_t  rwt;          //{ +0x000e@0  } | .RWT
        _m08 uint5_t  rwl;          //{ +0x000f@0  } | .RWL
        _m09 uint16_t idlp;         //{ +0x0010    } | .IDLP
        _m10 uint2_t  ips;          //{ +0x0012@6  } | .IPS
        _m11 uint16_t actp;         //{ +0x0014    } | .ACTP
        _m12 uint3_t  apw;          //{ +0x0016@0  } | .APW
        _m13 uint2_t  aps;          //{ +0x0016@6  } | .APS
                                  
        SDK_MAGIC_PROPERTIES( "NVME_POWER_STATE_DESC.$", 0x0, false, 0xdfdb00143bd7b861 );      
        SDK_FIXED_SIZE( nvme_power_state_desc_t, 0x20 );      
    };                            
};
#include "magic/nvme_power_state_desc_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_power_state_desc_t, 0x20 );
