#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/luid_t.hpp"

#include "magic/s_access_cache_t.start.hpp"
namespace win
{
    // [struct SAccessCache]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_access_cache_t             
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                              
        _m00 int32_t           f_access;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fAccess
        _m01 struct nt::luid_t l_client;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .lClient
                                        
        SDK_MAGIC_PROPERTIES( "SAccessCache.$", 0xc, true, 0xd6237d1dcd78cca0 );         
        SDK_FIXED_SIZE( s_access_cache_t, 0xc );         
    };                                  
};
#include "magic/s_access_cache_t.end.hpp"
SDK_VERIFY( struct win::s_access_cache_t, 0xc );
