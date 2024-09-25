#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_xmit_defs_0002_t.start.hpp"
namespace win
{
    // [struct __MIDL_XmitDefs_0002]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_xmit_defs_0002_t    
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                          
        _m00 uint32_t  size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .size
        _m01 uint64_t* p_asta_oxids;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pAstaOxids
                                    
        SDK_MAGIC_PROPERTIES( "__MIDL_XmitDefs_0002.$", 0x10, true, 0x2d9da23df8fa486e );             
        SDK_FIXED_SIZE( midl_xmit_defs_0002_t, 0x10 );             
    };                              
};
#include "magic/midl_xmit_defs_0002_t.end.hpp"
SDK_VERIFY( struct win::midl_xmit_defs_0002_t, 0x10 );
