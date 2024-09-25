#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

#include "magic/remove_lock_common_block_t.start.hpp"
namespace io
{
    // [struct _IO_REMOVE_LOCK_COMMON_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct remove_lock_common_block_t         
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                    
        _m00 uint8_t             removed;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Removed
        _m01 int32_t             io_count;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .IoCount
        _m02 struct nt::kevent_t remove_event;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RemoveEvent
                                              
        SDK_NONVOL_PROPERTIES( "_IO_REMOVE_LOCK_COMMON_BLOCK.$", 0x20, true, 0x9aa87d74a9413340 );             
        SDK_FIXED_SIZE( remove_lock_common_block_t, 0x20 );             
    };                                        
};
#include "magic/remove_lock_common_block_t.end.hpp"
SDK_VERIFY( struct io::remove_lock_common_block_t, 0x20 );
