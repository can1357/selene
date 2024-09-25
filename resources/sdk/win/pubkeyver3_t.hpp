#pragma once
#include <sdkgen/support_library.hpp>
#include "dssseed_t.hpp"

#include "magic/pubkeyver3_t.start.hpp"
namespace win
{
    // [struct _PUBKEYVER3]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pubkeyver3_t                     
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                  
        _m00 uint32_t              magic;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .magic
        _m01 uint32_t              bitlen_p;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bitlenP
        _m02 uint32_t              bitlen_q;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bitlenQ
        _m03 uint32_t              bitlen_j;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .bitlenJ
        _m04 struct win::dssseed_t dss_seed;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DSSSeed
                                            
        SDK_MAGIC_PROPERTIES( "_PUBKEYVER3.$", 0x28, true, 0xe878d5c457805ce5 );         
        SDK_FIXED_SIZE( pubkeyver3_t, 0x28 );         
    };                                      
};
#include "magic/pubkeyver3_t.end.hpp"
SDK_VERIFY( struct win::pubkeyver3_t, 0x28 );
