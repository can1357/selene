#pragma once
#include <sdkgen/support_library.hpp>
#include "context_chunk_t.hpp"

#include "magic/context_ex_t.start.hpp"
namespace win
{
    // [struct _CONTEXT_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct context_ex_t                             
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                          
        _m00 struct win::context_chunk_t all;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .All
        _m01 struct win::context_chunk_t legacy;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Legacy
        _m02 struct win::context_chunk_t x_state;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .XState
                                                    
        // Windows 11                               
        //                                          
        _m03 struct win::context_chunk_t kernel_cet;  //{ +0x0018    } | .KernelCet
                                                    
        SDK_NONVOL_PROPERTIES( "_CONTEXT_EX.$", 0x18, true, 0x2f65bfe4a3d57087 );           
        SDK_DYNAMIC_SIZE( context_ex_t );           
    };                                              
};
#include "magic/context_ex_t.end.hpp"
