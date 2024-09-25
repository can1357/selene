#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_create_io_queue_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_CREATE_IO_QUEUE]
    // => Windows 11
    //
    union nvme_cdw10_create_io_queue_t
    {                                 
        // Windows 11          
        //                     
        _m00 uint16_t qid;              //{ +0x0000@0  } | .QID
        _m01 uint16_t qsize;            //{ +0x0000@16 } | .QSIZE
        _m02 uint32_t as_ulong;         //{ +0x0000    } | .AsUlong
                                      
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_CREATE_IO_QUEUE.$", 0x0, false, 0x9c04792fe7667a5f );         
        SDK_FIXED_SIZE( nvme_cdw10_create_io_queue_t, 0x4 );         
    };                                
};
#include "magic/nvme_cdw10_create_io_queue_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_create_io_queue_t, 0x4 );
