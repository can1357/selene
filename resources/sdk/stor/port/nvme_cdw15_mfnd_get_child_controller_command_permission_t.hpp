#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw15_mfnd_get_child_controller_command_permission_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW15_MFND_GET_CHILD_CONTROLLER_COMMAND_PERMISSION]
    // => Windows 11
    //
    union nvme_cdw15_mfnd_get_child_controller_command_permission_t
    {                                                              
        // Windows 11          
        //                     
        _m00 uint8_t  mcid;                                          //{ +0x0000@0  } | .MCID
        _m01 uint32_t as_ulong;                                      //{ +0x0000    } | .AsUlong
                                                                   
        SDK_MAGIC_PROPERTIES( "NVME_CDW15_MFND_GET_CHILD_CONTROLLER_COMMAND_PERMISSION.$", 0x0, false, 0xc3e564bf1ee3afd3 );         
        SDK_FIXED_SIZE( nvme_cdw15_mfnd_get_child_controller_command_permission_t, 0x4 );         
    };                                                             
};
#include "magic/nvme_cdw15_mfnd_get_child_controller_command_permission_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw15_mfnd_get_child_controller_command_permission_t, 0x4 );
