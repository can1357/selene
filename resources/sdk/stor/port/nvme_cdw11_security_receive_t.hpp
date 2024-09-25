#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_security_receive_t.start.hpp"
namespace stor::port
{
    // [struct NVME_CDW11_SECURITY_RECEIVE]
    // => Windows 11
    //
    struct nvme_cdw11_security_receive_t
    {                                   
        // Windows 11    
        //               
        _m00 uint32_t al;                 //{ +0x0000    } | .AL
                                        
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_SECURITY_RECEIVE.$", 0x0, false, 0xaeb5256a4b1c54a3 );   
        SDK_FIXED_SIZE( nvme_cdw11_security_receive_t, 0x4 );   
    };                                  
};
#include "magic/nvme_cdw11_security_receive_t.end.hpp"
SDK_VERIFY( struct stor::port::nvme_cdw11_security_receive_t, 0x4 );
