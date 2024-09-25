#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;            }
namespace tag { struct securitybinding_t; }

#include "magic/s_name_key_t.start.hpp"
namespace win
{
    // [struct SNameKey]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_name_key_t                            
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                         
        _m00 const struct nt::guid_t*       p_ipid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pIpid
        _m01 struct tag::securitybinding_t* p_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pName
                                                   
        SDK_MAGIC_PROPERTIES( "SNameKey.$", 0x10, true, 0xf97ac29fc4fbfb5e );       
        SDK_FIXED_SIZE( s_name_key_t, 0x10 );       
    };                                             
};
#include "magic/s_name_key_t.end.hpp"
SDK_VERIFY( struct win::s_name_key_t, 0x10 );
