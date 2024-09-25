#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_get_log_page_v13_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_GET_LOG_PAGE_V13]
    // => Windows 11
    //
    union nvme_cdw10_get_log_page_v13_t
    {                                  
        // Windows 11          
        //                     
        _m00 uint8_t  lid;               //{ +0x0000@0  } | .LID
        _m01 uint4_t  lsp;               //{ +0x0000@8  } | .LSP
        _m02 uint1_t  rae;               //{ +0x0000@15 } | .RAE
        _m03 uint16_t numdl;             //{ +0x0000@16 } | .NUMDL
        _m04 uint32_t as_ulong;          //{ +0x0000    } | .AsUlong
                                       
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_GET_LOG_PAGE_V13.$", 0x0, false, 0xbc8ef24ff6da058f );         
        SDK_FIXED_SIZE( nvme_cdw10_get_log_page_v13_t, 0x4 );         
    };                                 
};
#include "magic/nvme_cdw10_get_log_page_v13_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_get_log_page_v13_t, 0x4 );
