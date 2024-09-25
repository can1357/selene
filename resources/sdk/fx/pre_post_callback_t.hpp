#pragma once
#include <sdkgen/support_library.hpp>
#include "cx_callback_type_t.hpp"

#include "magic/pre_post_callback_t.start.hpp"
namespace fx
{
    class pkg_pnp_t;

    // [class FxPrePostCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pre_post_callback_t                            
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                               
        _m00 enum fx::cx_callback_type_t m_callback_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_CallbackType
        _m01 class fx::pkg_pnp_t*        m_pkg_pnp;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_PkgPnp
                                                         
        SDK_MAGIC_PROPERTIES( "FxPrePostCallback.$", 0x18, true, 0x500559a122bfb5fd );                
        SDK_FIXED_SIZE( pre_post_callback_t, 0x18 );                
    };                                                   
};
#include "magic/pre_post_callback_t.end.hpp"
SDK_VERIFY( class fx::pre_post_callback_t, 0x18 );
