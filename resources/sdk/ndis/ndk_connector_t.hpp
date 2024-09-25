#pragma once
#include <sdkgen/support_library.hpp>
#include "ndk_object_header_t.hpp"

#include "magic/ndk_connector_t.start.hpp"
namespace ndis
{
    struct ndk_connector_dispatch_t;

    // [struct _NDK_CONNECTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_connector_t                                         
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                         
        _m00 struct ndis::ndk_object_header_t             header;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 const struct ndis::ndk_connector_dispatch_t* dispatch;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Dispatch
                                                                   
        SDK_MAGIC_PROPERTIES( "_NDK_CONNECTOR.$", 0x30, true, 0xf59aee463cdd85f6 );         
        SDK_FIXED_SIZE( ndk_connector_t, 0x30 );                   
    };                                                             
};
#include "magic/ndk_connector_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_connector_t, 0x30 );
