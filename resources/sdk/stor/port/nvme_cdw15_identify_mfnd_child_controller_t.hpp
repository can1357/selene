#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw15_identify_mfnd_child_controller_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW15_IDENTIFY_MFND_CHILD_CONTROLLER]
    // => Windows 11
    //
    union nvme_cdw15_identify_mfnd_child_controller_t
    {                                                
        // Windows 11          
        //                     
        _m00 uint8_t  mcid;                            //{ +0x0000@0  } | .MCID
        _m01 uint16_t ccid;                            //{ +0x0000@8  } | .CCID
        _m02 uint32_t as_ulong;                        //{ +0x0000    } | .AsUlong
                                                     
        SDK_MAGIC_PROPERTIES( "NVME_CDW15_IDENTIFY_MFND_CHILD_CONTROLLER.$", 0x0, false, 0x636eac8d26103f6a );         
        SDK_FIXED_SIZE( nvme_cdw15_identify_mfnd_child_controller_t, 0x4 );         
    };                                               
};
#include "magic/nvme_cdw15_identify_mfnd_child_controller_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw15_identify_mfnd_child_controller_t, 0x4 );
