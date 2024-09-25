#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_create_io_cq_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_CREATE_IO_CQ]
    // => Windows 11
    //
    union nvme_cdw11_create_io_cq_t
    {                              
        // Windows 11          
        //                     
        _m00 uint1_t  pc;            //{ +0x0000@0  } | .PC
        _m01 uint1_t  ien;           //{ +0x0000@1  } | .IEN
        _m02 uint16_t iv;            //{ +0x0000@16 } | .IV
        _m03 uint32_t as_ulong;      //{ +0x0000    } | .AsUlong
                                   
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_CREATE_IO_CQ.$", 0x0, false, 0xe023762ff97fd290 );         
        SDK_FIXED_SIZE( nvme_cdw11_create_io_cq_t, 0x4 );         
    };                             
};
#include "magic/nvme_cdw11_create_io_cq_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_create_io_cq_t, 0x4 );
