#pragma once
#include <sdkgen/support_library.hpp>
#include "nvme_cdw12_directive_send_identify_enable_directive_t.hpp"

#include "magic/nvme_cdw12_directive_send_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW12_DIRECTIVE_SEND]
    // => Windows 11
    //
    union nvme_cdw12_directive_send_t             
    {                                             
        using enable_directive_t = union stor::port::nvme_cdw12_directive_send_identify_enable_directive_t;                 
                                                  
        // Windows 11                             
        //                                        
        _m00 enable_directive_t  enable_directive;  //{ +0x0000    } | .EnableDirective
        _m01 uint32_t            as_ulong;          //{ +0x0000    } | .AsUlong
                                                  
        SDK_MAGIC_PROPERTIES( "NVME_CDW12_DIRECTIVE_SEND.$", 0x0, false, 0xb5c028cb82ebafa7 );                 
        SDK_FIXED_SIZE( nvme_cdw12_directive_send_t, 0x4 );                 
    };                                            
};
#include "magic/nvme_cdw12_directive_send_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw12_directive_send_t, 0x4 );
