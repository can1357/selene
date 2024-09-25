#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/s_ctx_list_index_t.start.hpp"
namespace tag
{
    // [struct _tagSCtxListIndex]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_ctx_list_index_t
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                
        _m00 int32_t idx;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .idx
        _m01 int32_t next;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .next
        _m02 int32_t prev;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .prev
                             
        SDK_MAGIC_PROPERTIES( "_tagSCtxListIndex.$", 0xc, true, 0xfc9dd7d7212ff0a7 );     
        SDK_FIXED_SIZE( s_ctx_list_index_t, 0xc );     
    };                       
};
#include "magic/s_ctx_list_index_t.end.hpp"
SDK_VERIFY( struct tag::s_ctx_list_index_t, 0xc );
