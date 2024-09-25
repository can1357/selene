#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_std_proxy_buffer_map_t.start.hpp"
namespace win
{
    struct i_unknown_t;

    // [struct _CStdProxyBufferMap]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct c_std_proxy_buffer_map_t                
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                         
        _m00 struct win::i_unknown_t* p_base_proxy;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pBaseProxy
                                                   
        SDK_MAGIC_PROPERTIES( "_CStdProxyBufferMap.$", 0x8, true, 0x77a12f93acb15ad2 );             
        SDK_FIXED_SIZE( c_std_proxy_buffer_map_t, 0x8 );             
    };                                             
};
#include "magic/c_std_proxy_buffer_map_t.end.hpp"
SDK_VERIFY( struct win::c_std_proxy_buffer_map_t, 0x8 );
