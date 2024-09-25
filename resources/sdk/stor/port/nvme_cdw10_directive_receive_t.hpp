#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_directive_receive_t.start.hpp"
namespace stor::port
{
    // [struct NVME_CDW10_DIRECTIVE_RECEIVE]
    // => Windows 11
    //
    struct nvme_cdw10_directive_receive_t
    {                                    
        // Windows 11      
        //                 
        _m00 uint32_t numd;                //{ +0x0000    } | .NUMD
                                         
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_DIRECTIVE_RECEIVE.$", 0x0, false, 0x716585c2382cd43f );     
        SDK_FIXED_SIZE( nvme_cdw10_directive_receive_t, 0x4 );     
    };                                   
};
#include "magic/nvme_cdw10_directive_receive_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_cdw10_directive_receive_t, 0x4 );
