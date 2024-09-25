#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_identify_mfnd_child_controller_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_IDENTIFY_MFND_CHILD_CONTROLLER]
    // => Windows 11
    //
    union nvme_cdw10_identify_mfnd_child_controller_t
    {                                                
        // Windows 11          
        //                     
        _m00 uint32_t numd;                            //{ +0x0000    } | .NUMD
        _m01 uint32_t as_ulong;                        //{ +0x0000    } | .AsUlong
                                                     
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_IDENTIFY_MFND_CHILD_CONTROLLER.$", 0x0, false, 0xd837bb3c14d8c04b );         
        SDK_FIXED_SIZE( nvme_cdw10_identify_mfnd_child_controller_t, 0x4 );         
    };                                               
};
#include "magic/nvme_cdw10_identify_mfnd_child_controller_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_identify_mfnd_child_controller_t, 0x4 );
