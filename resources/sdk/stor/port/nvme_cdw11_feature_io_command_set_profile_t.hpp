#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_io_command_set_profile_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_IO_COMMAND_SET_PROFILE]
    // => Windows 11
    //
    union nvme_cdw11_feature_io_command_set_profile_t
    {                                                
        // Windows 11          
        //                     
        _m00 uint8_t  iocsci;                          //{ +0x0000@0  } | .IOCSCI
        _m01 uint32_t as_ulong;                        //{ +0x0000    } | .AsUlong
                                                     
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_IO_COMMAND_SET_PROFILE.$", 0x0, false, 0x5b49fa51aa47f818 );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_io_command_set_profile_t, 0x4 );         
    };                                               
};
#include "magic/nvme_cdw11_feature_io_command_set_profile_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_io_command_set_profile_t, 0x4 );
