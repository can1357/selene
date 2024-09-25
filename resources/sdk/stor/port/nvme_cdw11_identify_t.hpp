#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_identify_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_IDENTIFY]
    // => Windows 11
    //
    union nvme_cdw11_identify_t
    {                          
        // Windows 11          
        //                     
        _m00 uint16_t nvmsetid;  //{ +0x0000    } | .NVMSETID
        _m01 uint16_t cnsid;     //{ +0x0000@0  } | .CNSID
        _m02 uint8_t  csi;       //{ +0x0000@24 } | .CSI
        _m03 uint32_t as_ulong;  //{ +0x0000    } | .AsUlong
                               
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_IDENTIFY.$", 0x0, false, 0xe9450abaa706a14f );         
        SDK_FIXED_SIZE( nvme_cdw11_identify_t, 0x4 );         
    };                         
};
#include "magic/nvme_cdw11_identify_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_identify_t, 0x4 );
