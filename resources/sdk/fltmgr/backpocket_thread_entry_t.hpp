#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/single_list_entry_t.hpp"

namespace nt { struct kthread_t; }

#include "magic/backpocket_thread_entry_t.start.hpp"
namespace fltmgr
{
    // [struct _BACKPOCKET_THREAD_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct backpocket_thread_entry_t                      
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                
        _m00 struct nt::kthread_t*          owning_thread;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OwningThread
        _m01 struct nt::single_list_entry_t irp_ctrl_list;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IrpCtrlList
        _m02 uint32_t                       count;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Count
                                                          
        SDK_MAGIC_PROPERTIES( "_BACKPOCKET_THREAD_ENTRY.$", 0x18, true, 0xd909514c295c9d47 );              
        SDK_FIXED_SIZE( backpocket_thread_entry_t, 0x18 );              
    };                                                    
};
#include "magic/backpocket_thread_entry_t.end.hpp"
SDK_VERIFY( struct fltmgr::backpocket_thread_entry_t, 0x18 );
