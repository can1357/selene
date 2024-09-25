#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw13_zone_management_send_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW13_ZONE_MANAGEMENT_SEND]
    // => Windows 11
    //
    union nvme_cdw13_zone_management_send_t
    {                                      
        // Windows 11            
        //                       
        _m00 uint8_t  zsa;                   //{ +0x0000@0  } | .ZSA
        _m01 uint1_t  select_all;            //{ +0x0000@8  } | .SelectAll
        _m02 uint32_t as_ulong;              //{ +0x0000    } | .AsUlong
                                           
        SDK_MAGIC_PROPERTIES( "NVME_CDW13_ZONE_MANAGEMENT_SEND.$", 0x0, false, 0x613d02544ff2fabc );           
        SDK_FIXED_SIZE( nvme_cdw13_zone_management_send_t, 0x4 );           
    };                                     
};
#include "magic/nvme_cdw13_zone_management_send_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw13_zone_management_send_t, 0x4 );
