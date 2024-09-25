#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kgate_t.hpp"

#include "magic/extent_deletion_wait_block_t.start.hpp"
namespace mi
{
    struct extent_deletion_wait_block_t;

    // [struct _MI_EXTENT_DELETION_WAIT_BLOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct extent_deletion_wait_block_t                    
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                                 
        _m00 struct mi::extent_deletion_wait_block_t* next;  //{ +0x0000    +0x0000    +0x0000    } | .Next
        _m01 struct nt::kgate_t                       gate;  //{ +0x0008    +0x0008    +0x0008    } | .Gate
                                                           
        SDK_MAGIC_PROPERTIES( "_MI_EXTENT_DELETION_WAIT_BLOCK.$", 0x20, true, 0x4fba36f41bbd2add );     
        SDK_FIXED_SIZE( extent_deletion_wait_block_t, 0x20 );     
    };                                                     
};
#include "magic/extent_deletion_wait_block_t.end.hpp"
SDK_VERIFY( struct mi::extent_deletion_wait_block_t, 0x20 );
