#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_lba_format_t.start.hpp"
namespace stor::port
{
    // [union NVME_LBA_FORMAT]
    // => Windows 11
    //
    union nvme_lba_format_t    
    {                          
        // Windows 11          
        //                     
        _m00 uint16_t ms;        //{ +0x0000    } | .MS
        _m01 uint8_t  lbads;     //{ +0x0002    } | .LBADS
        _m02 uint2_t  rp;        //{ +0x0003@0  } | .RP
        _m03 uint32_t as_ulong;  //{ +0x0000    } | .AsUlong
                               
        SDK_MAGIC_PROPERTIES( "NVME_LBA_FORMAT.$", 0x0, false, 0x2d34c73c2b0132c2 );         
        SDK_FIXED_SIZE( nvme_lba_format_t, 0x4 );         
    };                         
};
#include "magic/nvme_lba_format_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_lba_format_t, 0x4 );
