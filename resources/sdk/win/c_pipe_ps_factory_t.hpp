#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_pipe_ps_factory_t.start.hpp"
namespace win
{
    // [class CPipePSFactory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_pipe_ps_factory_t
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                   
        _m00 int32_t m_c_ref;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_cRef
                             
        SDK_MAGIC_PROPERTIES( "CPipePSFactory.$", 0x10, true, 0x60c7c3766875477d );        
        SDK_FIXED_SIZE( c_pipe_ps_factory_t, 0x10 );        
    };                       
};
#include "magic/c_pipe_ps_factory_t.end.hpp"
SDK_VERIFY( class win::c_pipe_ps_factory_t, 0x10 );
