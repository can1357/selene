#pragma once
#include <sdkgen/support_library.hpp>
#include "remove_lock_dbg_block_t.hpp"
#include "remove_lock_common_block_t.hpp"

#include "magic/remove_lock_t.start.hpp"
namespace io
{
    // [struct _IO_REMOVE_LOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct remove_lock_t                                  
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                
        _m00 struct io::remove_lock_common_block_t common;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Common
                                                          
        // WDK 10                                         
        //                                                
        _m01 struct io::remove_lock_dbg_block_t    dbg;     //{ +0x0020    } | .Dbg
                                                          
        SDK_NONVOL_PROPERTIES( "_IO_REMOVE_LOCK.$", 0x20, true, 0xbe7239298283f016 );       
        SDK_DYNAMIC_SIZE( remove_lock_t );                
    };                                                    
};
#include "magic/remove_lock_t.end.hpp"
