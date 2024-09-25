#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_reservation_report_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_RESERVATION_REPORT]
    // => Windows 11
    //
    union nvme_cdw11_reservation_report_t
    {                                    
        // Windows 11          
        //                     
        _m00 uint1_t  eds;                 //{ +0x0000@0  } | .EDS
        _m01 uint32_t as_ulong;            //{ +0x0000    } | .AsUlong
                                         
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_RESERVATION_REPORT.$", 0x0, false, 0xf619bbcad599a815 );         
        SDK_FIXED_SIZE( nvme_cdw11_reservation_report_t, 0x4 );         
    };                                   
};
#include "magic/nvme_cdw11_reservation_report_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_reservation_report_t, 0x4 );
