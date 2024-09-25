#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_get_log_page_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_GET_LOG_PAGE]
    // => Windows 11
    //
    union nvme_cdw10_get_log_page_t
    {                              
        // Windows 11          
        //                     
        _m00 uint8_t  lid;           //{ +0x0000@0  } | .LID
        _m01 uint12_t numd;          //{ +0x0000@16 } | .NUMD
        _m02 uint32_t as_ulong;      //{ +0x0000    } | .AsUlong
                                   
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_GET_LOG_PAGE.$", 0x0, false, 0xec59aa6d0c85a095 );         
        SDK_FIXED_SIZE( nvme_cdw10_get_log_page_t, 0x4 );         
    };                             
};
#include "magic/nvme_cdw10_get_log_page_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_get_log_page_t, 0x4 );
