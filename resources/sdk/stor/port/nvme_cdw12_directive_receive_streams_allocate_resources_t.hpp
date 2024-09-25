#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw12_directive_receive_streams_allocate_resources_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW12_DIRECTIVE_RECEIVE_STREAMS_ALLOCATE_RESOURCES]
    // => Windows 11
    //
    union nvme_cdw12_directive_receive_streams_allocate_resources_t
    {                                                              
        // Windows 11          
        //                     
        _m00 uint16_t nsr;                                           //{ +0x0000@0  } | .NSR
        _m01 uint32_t as_ulong;                                      //{ +0x0000    } | .AsUlong
                                                                   
        SDK_MAGIC_PROPERTIES( "NVME_CDW12_DIRECTIVE_RECEIVE_STREAMS_ALLOCATE_RESOURCES.$", 0x0, false, 0xf032c1a66ab8c572 );         
        SDK_FIXED_SIZE( nvme_cdw12_directive_receive_streams_allocate_resources_t, 0x4 );         
    };                                                             
};
#include "magic/nvme_cdw12_directive_receive_streams_allocate_resources_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw12_directive_receive_streams_allocate_resources_t, 0x4 );
