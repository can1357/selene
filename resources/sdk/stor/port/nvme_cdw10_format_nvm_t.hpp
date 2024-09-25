#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_format_nvm_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_FORMAT_NVM]
    // => Windows 11
    //
    union nvme_cdw10_format_nvm_t
    {                            
        // Windows 11          
        //                     
        _m00 uint4_t  lbaf;        //{ +0x0000@0  } | .LBAF
        _m01 uint1_t  ms;          //{ +0x0000@4  } | .MS
        _m02 uint3_t  pi;          //{ +0x0000@5  } | .PI
        _m03 uint1_t  pil;         //{ +0x0000@8  } | .PIL
        _m04 uint3_t  ses;         //{ +0x0000@9  } | .SES
        _m05 uint2_t  zf;          //{ +0x0000@12 } | .ZF
        _m06 uint32_t as_ulong;    //{ +0x0000    } | .AsUlong
                                 
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_FORMAT_NVM.$", 0x0, false, 0x51c180799c3f1d39 );         
        SDK_FIXED_SIZE( nvme_cdw10_format_nvm_t, 0x4 );         
    };                           
};
#include "magic/nvme_cdw10_format_nvm_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_format_nvm_t, 0x4 );
