#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/cgip_message_param_t.start.hpp"
namespace win
{
    // [class CGIPMessageParam]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cgip_message_param_t                
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 uint32_t          m_dw_cookie;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_dwCookie
        _m01 struct nt::guid_t m_causality_id;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .m_causalityId
                                              
        SDK_MAGIC_PROPERTIES( "CGIPMessageParam.$", 0x48, true, 0x21e508facceb7358 );               
        SDK_FIXED_SIZE( cgip_message_param_t, 0x48 );               
    };                                        
};
#include "magic/cgip_message_param_t.end.hpp"
SDK_VERIFY( class win::cgip_message_param_t, 0x48 );
