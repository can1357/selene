#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/context_ex_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_CONTEXT_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct context_ex_t            
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t offset;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 uint32_t byte_count;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ByteCount
        _m02 uint32_t bytes_copied;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BytesCopied
                                   
        SDK_MAGIC_PROPERTIES( "_DBGKD_CONTEXT_EX.$", 0xc, true, 0x691bfe4b0c5f19e7 );             
        SDK_FIXED_SIZE( context_ex_t, 0xc );             
    };                             
};
#include "magic/context_ex_t.end.hpp"
SDK_VERIFY( struct dbgkd::context_ex_t, 0xc );
