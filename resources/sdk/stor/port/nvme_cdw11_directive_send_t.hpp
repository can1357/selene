#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_directive_send_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_DIRECTIVE_SEND]
    // => Windows 11
    //
    union nvme_cdw11_directive_send_t
    {                                
        // Windows 11          
        //                     
        _m00 uint8_t  doper;           //{ +0x0000@0  } | .DOPER
        _m01 uint8_t  dtype;           //{ +0x0000@8  } | .DTYPE
        _m02 uint16_t dspec;           //{ +0x0000@16 } | .DSPEC
        _m03 uint32_t as_ulong;        //{ +0x0000    } | .AsUlong
                                     
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_DIRECTIVE_SEND.$", 0x0, false, 0x2182d1c6ef35516f );         
        SDK_FIXED_SIZE( nvme_cdw11_directive_send_t, 0x4 );         
    };                               
};
#include "magic/nvme_cdw11_directive_send_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_directive_send_t, 0x4 );
