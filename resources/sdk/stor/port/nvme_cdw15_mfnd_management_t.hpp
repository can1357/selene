#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw15_mfnd_management_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW15_MFND_MANAGEMENT]
    // => Windows 11
    //
    union nvme_cdw15_mfnd_management_t
    {                                 
        // Windows 11          
        //                     
        _m00 uint8_t  mcid;             //{ +0x0000@0  } | .MCID
        _m01 uint16_t ccid;             //{ +0x0000@8  } | .CCID
        _m02 uint4_t  sel;              //{ +0x0000@24 } | .SEL
        _m03 uint32_t as_ulong;         //{ +0x0000    } | .AsUlong
                                      
        SDK_MAGIC_PROPERTIES( "NVME_CDW15_MFND_MANAGEMENT.$", 0x0, false, 0xc834aa18d02ca5dd );         
        SDK_FIXED_SIZE( nvme_cdw15_mfnd_management_t, 0x4 );         
    };                                
};
#include "magic/nvme_cdw15_mfnd_management_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw15_mfnd_management_t, 0x4 );
