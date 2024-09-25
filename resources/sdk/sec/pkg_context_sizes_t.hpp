#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_sizes_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_Sizes]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_sizes_t            
    {                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t cb_max_token;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbMaxToken
        _m01 uint32_t cb_max_signature;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbMaxSignature
        _m02 uint32_t cb_block_size;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbBlockSize
        _m03 uint32_t cb_security_trailer;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cbSecurityTrailer
                                          
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_Sizes.$", 0x10, true, 0xceea032767d32f5f );                    
        SDK_FIXED_SIZE( pkg_context_sizes_t, 0x10 );                    
    };                                    
};
#include "magic/pkg_context_sizes_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_sizes_t, 0x10 );
