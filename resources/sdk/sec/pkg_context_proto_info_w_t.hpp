#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_proto_info_w_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_ProtoInfoW]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_proto_info_w_t 
    {                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 wchar_t* s_protocol_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .sProtocolName
        _m01 uint32_t major_version;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .majorVersion
        _m02 uint32_t minor_version;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .minorVersion
                                      
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_ProtoInfoW.$", 0x10, true, 0x73ae4febcc1c5f26 );                
        SDK_FIXED_SIZE( pkg_context_proto_info_w_t, 0x10 );                
    };                                
};
#include "magic/pkg_context_proto_info_w_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_proto_info_w_t, 0x10 );
