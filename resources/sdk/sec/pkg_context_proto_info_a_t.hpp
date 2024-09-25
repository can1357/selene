#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_proto_info_a_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_ProtoInfoA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_proto_info_a_t 
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 char*    s_protocol_name;  //{ +0x0000    +0x0000    +0x0000    } | .sProtocolName
        _m01 uint32_t major_version;    //{ +0x0008    +0x0008    +0x0008    } | .majorVersion
        _m02 uint32_t minor_version;    //{ +0x000c    +0x000c    +0x000c    } | .minorVersion
                                      
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_ProtoInfoA.$", 0x10, true, 0x12a925b6f618af72 );                
        SDK_FIXED_SIZE( pkg_context_proto_info_a_t, 0x10 );                
    };                                
};
#include "magic/pkg_context_proto_info_a_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_proto_info_a_t, 0x10 );
