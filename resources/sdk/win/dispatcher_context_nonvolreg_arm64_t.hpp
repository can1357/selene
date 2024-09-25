#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dispatcher_context_nonvolreg_arm64_t.start.hpp"
namespace win
{
    // [union _DISPATCHER_CONTEXT_NONVOLREG_ARM64]
    // => Windows 11
    //
    union dispatcher_context_nonvolreg_arm64_t   
    {                                            
        // Windows 11                            
        //                                       
        _m00 sdk::array<uint8_t, 152> buffer;      //{ +0x0000    } | .Buffer
        _m01 sdk::array<uint64_t, 11> gp_nv_regs;  //{ +0x0000    } | .GpNvRegs
        _m02 sdk::array<double, 8>    fp_nv_regs;  //{ +0x0058    } | .FpNvRegs
                                                 
        SDK_MAGIC_PROPERTIES( "_DISPATCHER_CONTEXT_NONVOLREG_ARM64.$", 0x0, false, 0x35cc84a7fce267dd );           
        SDK_FIXED_SIZE( dispatcher_context_nonvolreg_arm64_t, 0x98 );           
    };                                           
};
#include "magic/dispatcher_context_nonvolreg_arm64_t.end.hpp"
SDK_VERIFY( union win::dispatcher_context_nonvolreg_arm64_t, 0x98 );
