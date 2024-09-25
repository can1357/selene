#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lfg_rng_state_t.start.hpp"
namespace rtl
{
    // [struct _RTL_LFG_RNG_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lfg_rng_state_t                       
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                       
        _m00 sdk::array<uint32_t, 55> seed_array;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SeedArray
        _m01 uint32_t                 next;        //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .Next
        _m02 uint32_t                 next_p;      //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .NextP
                                                 
        SDK_MAGIC_PROPERTIES( "_RTL_LFG_RNG_STATE.$", 0xe4, true, 0x663e16aaa212353 );           
        SDK_FIXED_SIZE( lfg_rng_state_t, 0xe4 );           
    };                                           
};
#include "magic/lfg_rng_state_t.end.hpp"
SDK_VERIFY( struct rtl::lfg_rng_state_t, 0xe4 );
