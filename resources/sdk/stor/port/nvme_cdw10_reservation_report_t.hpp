#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_reservation_report_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_RESERVATION_REPORT]
    // => Windows 11
    //
    union nvme_cdw10_reservation_report_t
    {                                    
        // Windows 11          
        //                     
        _m00 uint32_t numd;                //{ +0x0000    } | .NUMD
        _m01 uint32_t as_ulong;            //{ +0x0000    } | .AsUlong
                                         
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_RESERVATION_REPORT.$", 0x0, false, 0xe4a997867d6f14b8 );         
        SDK_FIXED_SIZE( nvme_cdw10_reservation_report_t, 0x4 );         
    };                                   
};
#include "magic/nvme_cdw10_reservation_report_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_reservation_report_t, 0x4 );
