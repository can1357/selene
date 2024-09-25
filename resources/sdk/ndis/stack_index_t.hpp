#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stack_index_t.start.hpp"
namespace ndis
{
    // [struct _STACK_INDEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_index_t              
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t xfer_data_index;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .XferDataIndex
        _m01 uint32_t index;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Index
                                      
        SDK_MAGIC_PROPERTIES( "_STACK_INDEX.$", 0x8, true, 0x1e0295c14a754721 );                
        SDK_FIXED_SIZE( stack_index_t, 0x8 );                
    };                                
};
#include "magic/stack_index_t.end.hpp"
SDK_VERIFY( struct ndis::stack_index_t, 0x8 );
