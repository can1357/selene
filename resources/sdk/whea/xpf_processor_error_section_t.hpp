#pragma once
#include <sdkgen/support_library.hpp>
#include "xpf_processor_error_section_validbits_t.hpp"

#include "magic/xpf_processor_error_section_t.start.hpp"
namespace whea
{
    // [struct _WHEA_XPF_PROCESSOR_ERROR_SECTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xpf_processor_error_section_t           
    {                                              
        using valid_bits_t = union whea::xpf_processor_error_section_validbits_t;              
                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 valid_bits_t            valid_bits;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
        _m01 uint64_t                local_apic_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LocalAPICId
        _m02 sdk::array<uint8_t, 48> cpu_id;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CpuId
        _m03 sdk::array<uint8_t, 1>  variable_info;  //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .VariableInfo
                                                   
        SDK_NONVOL_PROPERTIES( "_WHEA_XPF_PROCESSOR_ERROR_SECTION.$", 0x41, true, 0xf09758248e6c0f74 );              
        SDK_FIXED_SIZE( xpf_processor_error_section_t, 0x41 );              
    };                                             
};
#include "magic/xpf_processor_error_section_t.end.hpp"
SDK_VERIFY( struct whea::xpf_processor_error_section_t, 0x41 );
