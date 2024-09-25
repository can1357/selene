#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_pipe_flags_t.start.hpp"
namespace win
{
    // [struct NDR64_PIPE_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_pipe_flags_t   
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 uint1_t has_range;   //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .HasRange
        _m01 uint1_t block_copy;  //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .BlockCopy
                                
        SDK_MAGIC_PROPERTIES( "NDR64_PIPE_FLAGS.$", 0x1, true, 0xa2efafd37ddc81bc );           
        SDK_FIXED_SIZE( ndr64_pipe_flags_t, 0x1 );           
    };                          
};
#include "magic/ndr64_pipe_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr64_pipe_flags_t, 0x1 );
