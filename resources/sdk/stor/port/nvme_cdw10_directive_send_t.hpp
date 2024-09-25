#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_directive_send_t.start.hpp"
namespace stor::port
{
    // [struct NVME_CDW10_DIRECTIVE_SEND]
    // => Windows 11
    //
    struct nvme_cdw10_directive_send_t
    {                                 
        // Windows 11      
        //                 
        _m00 uint32_t numd;             //{ +0x0000    } | .NUMD
                                      
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_DIRECTIVE_SEND.$", 0x0, false, 0x17b867c7143f5f26 );     
        SDK_FIXED_SIZE( nvme_cdw10_directive_send_t, 0x4 );     
    };                                
};
#include "magic/nvme_cdw10_directive_send_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_cdw10_directive_send_t, 0x4 );
