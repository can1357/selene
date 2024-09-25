#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm64_register_params_t.start.hpp"
namespace win
{
    // [struct ARM64_REGISTER_PARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct arm64_register_params_t                                 
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                         
        _m00 sdk::array<uint64_t, 8>                xx;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Xx
        _m01 sdk::array<sdk::array<uint64_t, 2>, 8> vx;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Vx
        _m02 uint32_t                               vfp_used;        //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .VfpUsed
        _m03 uint32_t                               stack_size;      //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .StackSize
        _m04 uint64_t*                              start_of_stack;  //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .StartOfStack
                                                                   
        SDK_MAGIC_PROPERTIES( "ARM64_REGISTER_PARAMS.$", 0xd0, true, 0xe4d7038be4256588 );               
        SDK_FIXED_SIZE( arm64_register_params_t, 0xd0 );               
    };                                                             
};
#include "magic/arm64_register_params_t.end.hpp"
SDK_VERIFY( struct win::arm64_register_params_t, 0xd0 );
