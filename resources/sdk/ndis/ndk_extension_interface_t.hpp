#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndk_extension_interface_t.start.hpp"
namespace ndis
{
    // [struct _NDK_EXTENSION_INTERFACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_extension_interface_t
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                        
        _m00 const void* dispatch;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Dispatch
                                    
        SDK_MAGIC_PROPERTIES( "_NDK_EXTENSION_INTERFACE.$", 0x8, true, 0x8d0f4e9c599dcf5 );         
        SDK_FIXED_SIZE( ndk_extension_interface_t, 0x8 );         
    };                              
};
#include "magic/ndk_extension_interface_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_extension_interface_t, 0x8 );
