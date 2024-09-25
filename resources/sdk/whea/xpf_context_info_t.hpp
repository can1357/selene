#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xpf_context_info_t.start.hpp"
namespace whea
{
    // [struct _WHEA_XPF_CONTEXT_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xpf_context_info_t               
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint16_t register_context_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .RegisterContextType
        _m01 uint16_t register_data_size;     //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .RegisterDataSize
        _m02 uint32_t msr_address;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .MSRAddress
        _m03 uint64_t mm_register_address;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MmRegisterAddress
                                            
        SDK_NONVOL_PROPERTIES( "_WHEA_XPF_CONTEXT_INFO.$", 0x10, true, 0xbc909188c537ba90 );                      
        SDK_FIXED_SIZE( xpf_context_info_t, 0x10 );                      
    };                                      
};
#include "magic/xpf_context_info_t.end.hpp"
SDK_VERIFY( struct whea::xpf_context_info_t, 0x10 );
