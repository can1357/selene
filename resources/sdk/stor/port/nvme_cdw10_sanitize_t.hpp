#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_sanitize_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_SANITIZE]
    // => Windows 11
    //
    union nvme_cdw10_sanitize_t
    {                          
        // Windows 11          
        //                     
        _m00 uint3_t  sanact;    //{ +0x0000@0  } | .SANACT
        _m01 uint1_t  ause;      //{ +0x0000@3  } | .AUSE
        _m02 uint4_t  owpass;    //{ +0x0000@4  } | .OWPASS
        _m03 uint1_t  oipbp;     //{ +0x0000@8  } | .OIPBP
        _m04 uint1_t  ndas;      //{ +0x0000@9  } | .NDAS
        _m05 uint32_t as_ulong;  //{ +0x0000    } | .AsUlong
                               
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_SANITIZE.$", 0x0, false, 0xfc4e464c5665df52 );         
        SDK_FIXED_SIZE( nvme_cdw10_sanitize_t, 0x4 );         
    };                         
};
#include "magic/nvme_cdw10_sanitize_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_sanitize_t, 0x4 );
