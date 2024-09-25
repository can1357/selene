#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_info_a_t.start.hpp"
namespace sec
{
    // [struct _SecPkgInfoA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_info_a_t              
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t f_capabilities;  //{ +0x0000    +0x0000    +0x0000    } | .fCapabilities
        _m01 uint16_t w_version;       //{ +0x0004    +0x0004    +0x0004    } | .wVersion
        _m02 uint16_t w_rpcid;         //{ +0x0006    +0x0006    +0x0006    } | .wRPCID
        _m03 uint32_t cb_max_token;    //{ +0x0008    +0x0008    +0x0008    } | .cbMaxToken
        _m04 char*    name;            //{ +0x0010    +0x0010    +0x0010    } | .Name
        _m05 char*    comment;         //{ +0x0018    +0x0018    +0x0018    } | .Comment
                                     
        SDK_MAGIC_PROPERTIES( "_SecPkgInfoA.$", 0x20, true, 0x394ff55efc87b864 );               
        SDK_FIXED_SIZE( pkg_info_a_t, 0x20 );               
    };                               
};
#include "magic/pkg_info_a_t.end.hpp"
SDK_VERIFY( struct sec::pkg_info_a_t, 0x20 );
