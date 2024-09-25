#pragma once
#include <sdkgen/support_library.hpp>
#include "nvme_cdw12_directive_receive_streams_allocate_resources_t.hpp"

#include "magic/nvme_cdw12_directive_receive_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW12_DIRECTIVE_RECEIVE]
    // => Windows 11
    //
    union nvme_cdw12_directive_receive_t              
    {                                                 
        using allocate_resources_t = union stor::port::nvme_cdw12_directive_receive_streams_allocate_resources_t;                   
                                                      
        // Windows 11                                 
        //                                            
        _m00 allocate_resources_t  allocate_resources;  //{ +0x0000    } | .AllocateResources
        _m01 uint32_t              as_ulong;            //{ +0x0000    } | .AsUlong
                                                      
        SDK_MAGIC_PROPERTIES( "NVME_CDW12_DIRECTIVE_RECEIVE.$", 0x0, false, 0x62c917d0d6f5f5fd );                   
        SDK_FIXED_SIZE( nvme_cdw12_directive_receive_t, 0x4 );                   
    };                                                
};
#include "magic/nvme_cdw12_directive_receive_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw12_directive_receive_t, 0x4 );
