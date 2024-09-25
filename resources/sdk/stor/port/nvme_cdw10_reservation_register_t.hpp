#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_reservation_register_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_RESERVATION_REGISTER]
    // => Windows 11
    //
    union nvme_cdw10_reservation_register_t
    {                                      
        // Windows 11          
        //                     
        _m00 uint3_t  rrega;                 //{ +0x0000@0  } | .RREGA
        _m01 uint1_t  iekey;                 //{ +0x0000@3  } | .IEKEY
        _m02 uint2_t  cptpl;                 //{ +0x0000@30 } | .CPTPL
        _m03 uint32_t as_ulong;              //{ +0x0000    } | .AsUlong
                                           
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_RESERVATION_REGISTER.$", 0x0, false, 0xf2304bf327282429 );         
        SDK_FIXED_SIZE( nvme_cdw10_reservation_register_t, 0x4 );         
    };                                     
};
#include "magic/nvme_cdw10_reservation_register_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_reservation_register_t, 0x4 );
