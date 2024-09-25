#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw13_zone_management_receive_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW13_ZONE_MANAGEMENT_RECEIVE]
    // => Windows 11
    //
    union nvme_cdw13_zone_management_receive_t
    {                                         
        // Windows 11              
        //                         
        _m00 uint8_t  zra;                      //{ +0x0000@0  } | .ZRA
        _m01 uint8_t  zra_specific;             //{ +0x0000@8  } | .ZRASpecific
        _m02 uint1_t  partial;                  //{ +0x0000@16 } | .Partial
        _m03 uint32_t as_ulong;                 //{ +0x0000    } | .AsUlong
                                              
        SDK_MAGIC_PROPERTIES( "NVME_CDW13_ZONE_MANAGEMENT_RECEIVE.$", 0x0, false, 0xeb02d3d9bdbd4c06 );             
        SDK_FIXED_SIZE( nvme_cdw13_zone_management_receive_t, 0x4 );             
    };                                        
};
#include "magic/nvme_cdw13_zone_management_receive_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw13_zone_management_receive_t, 0x4 );
