#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw15_read_write_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW15_READ_WRITE]
    // => Windows 11
    //
    union nvme_cdw15_read_write_t
    {                            
        // Windows 11          
        //                     
        _m00 uint16_t elbat;       //{ +0x0000@0  } | .ELBAT
        _m01 uint16_t elbatm;      //{ +0x0000@16 } | .ELBATM
        _m02 uint32_t as_ulong;    //{ +0x0000    } | .AsUlong
                                 
        SDK_MAGIC_PROPERTIES( "NVME_CDW15_READ_WRITE.$", 0x0, false, 0x8a34063f4eb4a851 );         
        SDK_FIXED_SIZE( nvme_cdw15_read_write_t, 0x4 );         
    };                           
};
#include "magic/nvme_cdw15_read_write_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw15_read_write_t, 0x4 );
