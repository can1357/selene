#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw10_security_send_receive_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW10_SECURITY_SEND_RECEIVE]
    // => Windows 11
    //
    union nvme_cdw10_security_send_receive_t
    {                                       
        // Windows 11          
        //                     
        _m00 uint16_t spsp;                   //{ +0x0000@8  } | .SPSP
        _m01 uint8_t  secp;                   //{ +0x0000@24 } | .SECP
        _m02 uint32_t as_ulong;               //{ +0x0000    } | .AsUlong
                                            
        SDK_MAGIC_PROPERTIES( "NVME_CDW10_SECURITY_SEND_RECEIVE.$", 0x0, false, 0x8177cac839c72a04 );         
        SDK_FIXED_SIZE( nvme_cdw10_security_send_receive_t, 0x4 );         
    };                                      
};
#include "magic/nvme_cdw10_security_send_receive_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw10_security_send_receive_t, 0x4 );
