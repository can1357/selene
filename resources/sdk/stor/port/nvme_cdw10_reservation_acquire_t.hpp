#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_reservation_acquire_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_RESERVATION_ACQUIRE]
    // => Windows 11
    //
    union nvme_cdw10_reservation_acquire_t
    {                                     
        // Windows 11          
        //                     
        _m00 uint3_t  racqa;                //{ +0x0000@0  } | .RACQA
        _m01 uint1_t  iekey;                //{ +0x0000@3  } | .IEKEY
        _m02 uint8_t  rtype;                //{ +0x0000@8  } | .RTYPE
        _m03 uint32_t as_ulong;             //{ +0x0000    } | .AsUlong
                                          
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_RESERVATION_ACQUIRE.$", 0x0, false, 0x54c55abcf282d5a6 );         
        SDK_FIXED_SIZE( nvme_cdw10_reservation_acquire_t, 0x4 );         
    };                                    
};
#include "magic/nvme_cdw10_reservation_acquire_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_reservation_acquire_t, 0x4 );
