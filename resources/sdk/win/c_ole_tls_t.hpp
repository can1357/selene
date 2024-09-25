#pragma once
#include <sdkgen/support_library.hpp>

namespace tag { struct s_ole_tls_data_t; }

#include "magic/c_ole_tls_t.start.hpp"
namespace win
{
    // [class COleTls]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ole_tls_t                             
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                        
        _m00 struct tag::s_ole_tls_data_t* p_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pData
                                                  
        SDK_MAGIC_PROPERTIES( "COleTls.$", 0x8, true, 0x5d6105dc1b2c6985 );       
        SDK_FIXED_SIZE( c_ole_tls_t, 0x8 );       
    };                                            
};
#include "magic/c_ole_tls_t.end.hpp"
SDK_VERIFY( class win::c_ole_tls_t, 0x8 );
