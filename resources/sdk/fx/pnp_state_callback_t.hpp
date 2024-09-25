#pragma once
#include <sdkgen/support_library.hpp>
#include "pnp_state_callback_info_t.hpp"

#include "magic/pnp_state_callback_t.start.hpp"
namespace fx
{
    // [struct FxPnpStateCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pnp_state_callback_t     
    {                               
        using m_methods_t = sdk::array<struct fx::pnp_state_callback_info_t, 58>;          
                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                          
        _m00 m_methods_t  m_methods;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Methods
                                    
        SDK_MAGIC_PROPERTIES( "FxPnpStateCallback.$", 0x3a0, true, 0x586270e49bc42863 );          
        SDK_FIXED_SIZE( pnp_state_callback_t, 0x3a0 );          
    };                              
};
#include "magic/pnp_state_callback_t.end.hpp"
SDK_VERIFY( struct fx::pnp_state_callback_t, 0x3a0 );
