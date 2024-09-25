#pragma once
#include <sdkgen/support_library.hpp>
#include "callback_node_flags_t.hpp"

#include "magic/callback_ctrl_t.start.hpp"
namespace fltmgr
{
    // [struct _CALLBACK_CTRL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct callback_ctrl_t                                    
    {                                                         
        using operation_flags_t = sdk::array<enum fltmgr::callback_node_flags_t, 50>;                
                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                    
        _m00 sdk::array<nt::list_entry_t, 50> operation_lists;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationLists
        _m01 operation_flags_t                operation_flags;  //{ +0x0320    +0x0320    +0x0320    +0x0320    } | .OperationFlags
                                                              
        SDK_MAGIC_PROPERTIES( "_CALLBACK_CTRL.$", 0x3e8, true, 0xa9e22ea64c10d697 );                
        SDK_FIXED_SIZE( callback_ctrl_t, 0x3e8 );                
    };                                                        
};
#include "magic/callback_ctrl_t.end.hpp"
SDK_VERIFY( struct fltmgr::callback_ctrl_t, 0x3e8 );
