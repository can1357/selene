#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_create_io_sq_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_CREATE_IO_SQ]
    // => Windows 11
    //
    union nvme_cdw11_create_io_sq_t
    {                              
        // Windows 11          
        //                     
        _m00 uint1_t  pc;            //{ +0x0000@0  } | .PC
        _m01 uint2_t  qprio;         //{ +0x0000@1  } | .QPRIO
        _m02 uint16_t cqid;          //{ +0x0000@16 } | .CQID
        _m03 uint32_t as_ulong;      //{ +0x0000    } | .AsUlong
                                   
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_CREATE_IO_SQ.$", 0x0, false, 0x5394e103c1058467 );         
        SDK_FIXED_SIZE( nvme_cdw11_create_io_sq_t, 0x4 );         
    };                             
};
#include "magic/nvme_cdw11_create_io_sq_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_create_io_sq_t, 0x4 );
