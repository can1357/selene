#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/version_t.start.hpp"
namespace rpc
{
    // [struct _RPC_VERSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct version_t                
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint16_t major_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorVersion
        _m01 uint16_t minor_version;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MinorVersion
                                    
        SDK_MAGIC_PROPERTIES( "_RPC_VERSION.$", 0x4, true, 0xd90b6d5da39c1da3 );              
        SDK_FIXED_SIZE( version_t, 0x4 );              
    };                              
};
#include "magic/version_t.end.hpp"
SDK_VERIFY( struct rpc::version_t, 0x4 );
