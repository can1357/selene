#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_register_params_t.start.hpp"
namespace win
{
    // [struct ARM_REGISTER_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct arm_register_params_t                     
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m00 sdk::array<uint32_t, 4>  rx;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Rx
        _m01 uint32_t                 vfp_used;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VfpUsed
        _m02 sdk::array<uint32_t, 16> vfpx;            //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Vfpx
        _m03 uint32_t                 stack_size;      //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .StackSize
        _m04 uint32_t*                start_of_stack;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .StartOfStack
                                                     
        SDK_MAGIC_PROPERTIES( "ARM_REGISTER_PARAMS.$", 0x60, true, 0xde5d7f5f9214c916 );               
        SDK_FIXED_SIZE( arm_register_params_t, 0x60 );               
    };                                               
};
#include "magic/arm_register_params_t.end.hpp"
SDK_VERIFY( struct win::arm_register_params_t, 0x60 );
