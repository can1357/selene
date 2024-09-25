#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_verifier_options_t.start.hpp"
namespace rtl
{
    // [struct _RTL_PROCESS_VERIFIER_OPTIONS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_verifier_options_t           
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint32_t               size_struct;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SizeStruct
        _m01 uint32_t               option;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Option
        _m02 sdk::array<uint8_t, 1> option_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .OptionData
                                                
        SDK_NONVOL_PROPERTIES( "_RTL_PROCESS_VERIFIER_OPTIONS.$", 0xc, true, 0x9696953c608449bc );            
        SDK_FIXED_SIZE( process_verifier_options_t, 0xc );            
    };                                          
};
#include "magic/process_verifier_options_t.end.hpp"
SDK_VERIFY( struct rtl::process_verifier_options_t, 0xc );
