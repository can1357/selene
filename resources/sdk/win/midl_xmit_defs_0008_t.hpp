#pragma once
#include <sdkgen/support_library.hpp>
#include "midl_xmit_defs_0004_t.hpp"
#include "midl_xmit_defs_0005_t.hpp"
#include "midl_xmit_defs_0007_t.hpp"

#include "magic/midl_xmit_defs_0008_t.start.hpp"
namespace win
{
    // [struct __MIDL_XmitDefs_0008]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_xmit_defs_0008_t                               
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                     
        _m00 enum win::midl_xmit_defs_0004_t   outcome;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .outcome
        _m01 struct win::midl_xmit_defs_0005_t success_details;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .successDetails
        _m02 struct win::midl_xmit_defs_0007_t failure_details;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .failureDetails
                                                               
        SDK_MAGIC_PROPERTIES( "__MIDL_XmitDefs_0008.$", 0x20, true, 0xcdb8f27a90aa2b7b );                
        SDK_FIXED_SIZE( midl_xmit_defs_0008_t, 0x20 );                
    };                                                         
};
#include "magic/midl_xmit_defs_0008_t.end.hpp"
SDK_VERIFY( struct win::midl_xmit_defs_0008_t, 0x20 );
