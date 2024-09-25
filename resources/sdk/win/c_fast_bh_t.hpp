#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_fast_bh_t.start.hpp"
namespace win
{
    // [class CFastBH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_fast_bh_t                                       
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                  
        _m00 sdk::variant<void*, void const*> m_if_handle;    //{ +0x0008    +0x0000    +0x0000    +0x0000    } | .m_ifHandle
        _m01 void*                            m_h_rpc;        //{ +0x0000    +0x0010    +0x0010    +0x0010    } | .m_hRpc
                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                  
        _m02 const bool                       m_dont_linger;  //{ +0x0008    +0x0008    +0x0008    } | .m_dontLinger
                                                            
        SDK_MAGIC_PROPERTIES( "CFastBH.$", 0x18, true, 0xc1f5f2424b139aa8 );              
        SDK_DYNAMIC_SIZE( c_fast_bh_t );                    
    };                                                      
};
#include "magic/c_fast_bh_t.end.hpp"
