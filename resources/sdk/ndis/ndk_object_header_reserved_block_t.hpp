#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndk_object_header_reserved_block_t.start.hpp"
namespace ndis
{
    // [struct _NDK_OBJECT_HEADER_RESERVED_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_object_header_reserved_block_t
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2   
        //                           
        _m00 sdk::array<void*, 4> rf;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .rf
                                             
        SDK_MAGIC_PROPERTIES( "_NDK_OBJECT_HEADER_RESERVED_BLOCK.$", 0x20, true, 0xd43b75e25f2dbb37 );   
        SDK_FIXED_SIZE( ndk_object_header_reserved_block_t, 0x20 );   
    };                                       
};
#include "magic/ndk_object_header_reserved_block_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_object_header_reserved_block_t, 0x20 );
