#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stickykeys_t.start.hpp"
namespace tag
{
    // [struct tagSTICKYKEYS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stickykeys_t        
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t cb_size;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_flags;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
                               
        SDK_MAGIC_PROPERTIES( "tagSTICKYKEYS.$", 0x8, true, 0x4926692b56fca2f9 );         
        SDK_FIXED_SIZE( stickykeys_t, 0x8 );         
    };                         
};
#include "magic/stickykeys_t.end.hpp"
SDK_VERIFY( struct tag::stickykeys_t, 0x8 );
