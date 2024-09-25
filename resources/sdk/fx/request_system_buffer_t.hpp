#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct mdl_t; }

#include "magic/request_system_buffer_t.start.hpp"
namespace fx
{
    // [struct FxRequestSystemBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct request_system_buffer_t      
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                              
        _m00 void*             m_buffer;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Buffer
        _m01 struct nt::mdl_t* m_mdl;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Mdl
                                        
        SDK_MAGIC_PROPERTIES( "FxRequestSystemBuffer.$", 0x10, true, 0xa3f4c1357683cd2 );         
        SDK_FIXED_SIZE( request_system_buffer_t, 0x10 );         
    };                                  
};
#include "magic/request_system_buffer_t.end.hpp"
SDK_VERIFY( struct fx::request_system_buffer_t, 0x10 );
