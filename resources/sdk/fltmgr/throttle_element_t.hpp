#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/throttle_element_t.start.hpp"
namespace fltmgr
{
    // [struct _THROTTLE_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct throttle_element_t               
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                  
        _m00 nt::list_entry_t pending_list;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PendingList
        _m01 uint32_t         running_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RunningCount
        _m02 uint32_t         running_limit;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .RunningLimit
                                            
        SDK_MAGIC_PROPERTIES( "_THROTTLE_ELEMENT.$", 0x18, true, 0x933ccef9108dc03d );              
        SDK_FIXED_SIZE( throttle_element_t, 0x18 );              
    };                                      
};
#include "magic/throttle_element_t.end.hpp"
SDK_VERIFY( struct fltmgr::throttle_element_t, 0x18 );
