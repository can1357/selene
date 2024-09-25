#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_security_send_t.start.hpp"
namespace stor::port
{
    // [struct NVME_CDW11_SECURITY_SEND]
    // => Windows 11
    //
    struct nvme_cdw11_security_send_t
    {                                
        // Windows 11    
        //               
        _m00 uint32_t tl;              //{ +0x0000    } | .TL
                                     
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_SECURITY_SEND.$", 0x0, false, 0x5c7addb09e6713db );   
        SDK_FIXED_SIZE( nvme_cdw11_security_send_t, 0x4 );   
    };                               
};
#include "magic/nvme_cdw11_security_send_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_cdw11_security_send_t, 0x4 );
