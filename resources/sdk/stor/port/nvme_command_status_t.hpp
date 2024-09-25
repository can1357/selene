#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_command_status_t.start.hpp"
namespace stor::port
{
    // [union NVME_COMMAND_STATUS]
    // => Windows 11
    //
    union nvme_command_status_t 
    {                           
        // Windows 11           
        //                      
        _m00 uint1_t  p;          //{ +0x0000@0  } | .P
        _m01 uint8_t  sc;         //{ +0x0000@1  } | .SC
        _m02 uint3_t  sct;        //{ +0x0000@9  } | .SCT
        _m03 uint1_t  m;          //{ +0x0000@14 } | .M
        _m04 uint1_t  dnr;        //{ +0x0000@15 } | .DNR
        _m05 uint16_t as_ushort;  //{ +0x0000    } | .AsUshort
                                
        SDK_MAGIC_PROPERTIES( "NVME_COMMAND_STATUS.$", 0x0, false, 0xe340c142e96b2c24 );          
        SDK_FIXED_SIZE( nvme_command_status_t, 0x2 );          
    };                          
};
#include "magic/nvme_command_status_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_command_status_t, 0x2 );
