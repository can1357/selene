#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw12_directive_send_identify_enable_directive_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW12_DIRECTIVE_SEND_IDENTIFY_ENABLE_DIRECTIVE]
    // => Windows 11
    //
    union nvme_cdw12_directive_send_identify_enable_directive_t
    {                                                          
        // Windows 11          
        //                     
        _m00 uint1_t  endir;                                     //{ +0x0000@0  } | .ENDIR
        _m01 uint8_t  dtype;                                     //{ +0x0000@8  } | .DTYPE
        _m02 uint32_t as_ulong;                                  //{ +0x0000    } | .AsUlong
                                                               
        SDK_MAGIC_PROPERTIES( "NVME_CDW12_DIRECTIVE_SEND_IDENTIFY_ENABLE_DIRECTIVE.$", 0x0, false, 0xe95427b30bdbd223 );         
        SDK_FIXED_SIZE( nvme_cdw12_directive_send_identify_enable_directive_t, 0x4 );         
    };                                                         
};
#include "magic/nvme_cdw12_directive_send_identify_enable_directive_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw12_directive_send_identify_enable_directive_t, 0x4 );
