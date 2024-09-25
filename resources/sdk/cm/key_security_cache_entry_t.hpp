#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_security_cache_entry_t.start.hpp"
namespace cm
{
    struct key_security_cache_t;

    // [struct _CM_KEY_SECURITY_CACHE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_security_cache_entry_t                         
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                    
        _m00 uint32_t                         cell;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Cell
        _m01 struct cm::key_security_cache_t* cached_security;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CachedSecurity
                                                              
        SDK_MAGIC_PROPERTIES( "_CM_KEY_SECURITY_CACHE_ENTRY.$", 0x10, true, 0xa766e9164c6a37fa );                
        SDK_FIXED_SIZE( key_security_cache_entry_t, 0x10 );                
    };                                                        
};
#include "magic/key_security_cache_entry_t.end.hpp"
SDK_VERIFY( struct cm::key_security_cache_entry_t, 0x10 );
