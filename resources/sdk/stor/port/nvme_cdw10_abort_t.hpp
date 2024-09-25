#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_abort_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_ABORT]
    // => Windows 11
    //
    union nvme_cdw10_abort_t   
    {                          
        // Windows 11          
        //                     
        _m00 uint8_t  sqid;      //{ +0x0000@0  } | .SQID
        _m01 uint16_t cid;       //{ +0x0000@8  } | .CID
        _m02 uint32_t as_ulong;  //{ +0x0000    } | .AsUlong
                               
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_ABORT.$", 0x0, false, 0x6964f6787a9b8f5f );         
        SDK_FIXED_SIZE( nvme_cdw10_abort_t, 0x4 );         
    };                         
};
#include "magic/nvme_cdw10_abort_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_abort_t, 0x4 );
