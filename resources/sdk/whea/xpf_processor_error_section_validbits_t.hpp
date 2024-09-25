#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xpf_processor_error_section_validbits_t.start.hpp"
namespace whea
{
    // [union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union xpf_processor_error_section_validbits_t
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint1_t  local_apic_id;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .LocalAPICId
        _m01 uint1_t  cpu_id;                      //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .CpuId
        _m02 uint6_t  proc_info_count;             //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .ProcInfoCount
        _m03 uint6_t  context_info_count;          //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .ContextInfoCount
        _m04 uint64_t valid_bits;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
                                                 
        SDK_NONVOL_PROPERTIES( "_WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS.$", 0x8, true, 0xed577e4450f021a7 );                   
        SDK_FIXED_SIZE( xpf_processor_error_section_validbits_t, 0x8 );                   
    };                                           
};
#include "magic/xpf_processor_error_section_validbits_t.end.hpp"
SDK_VERIFY( union whea::xpf_processor_error_section_validbits_t, 0x8 );
