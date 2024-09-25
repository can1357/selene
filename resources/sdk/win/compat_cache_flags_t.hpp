#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/memory_stream_param_t.hpp"

#include "magic/compat_cache_flags_t.start.hpp"
namespace win
{
    // [struct COMPAT_CACHE_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct compat_cache_flags_t                       
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                            
        _m00 struct rtl::memory_stream_param_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                          value;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Value
                                                      
        SDK_MAGIC_PROPERTIES( "COMPAT_CACHE_FLAGS.$", 0xc, true, 0x7c1a403e4c0290e2 );       
        SDK_FIXED_SIZE( compat_cache_flags_t, 0xc );       
    };                                                
};
#include "magic/compat_cache_flags_t.end.hpp"
SDK_VERIFY( struct win::compat_cache_flags_t, 0xc );
