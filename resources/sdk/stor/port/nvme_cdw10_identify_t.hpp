#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_identify_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_IDENTIFY]
    // => Windows 11
    //
    union nvme_cdw10_identify_t
    {                          
        // Windows 11          
        //                     
        _m00 uint8_t  cns;       //{ +0x0000@0  } | .CNS
        _m01 uint16_t cntid;     //{ +0x0000@16 } | .CNTID
        _m02 uint32_t as_ulong;  //{ +0x0000    } | .AsUlong
                               
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_IDENTIFY.$", 0x0, false, 0x801a83f69b8cf51a );         
        SDK_FIXED_SIZE( nvme_cdw10_identify_t, 0x4 );         
    };                         
};
#include "magic/nvme_cdw10_identify_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_identify_t, 0x4 );
