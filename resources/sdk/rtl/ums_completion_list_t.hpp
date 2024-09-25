#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/single_list_entry_t.hpp"

#include "magic/ums_completion_list_t.start.hpp"
namespace rtl
{
    // [struct _RTL_UMS_COMPLETION_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ums_completion_list_t                                
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                      
        _m00 struct nt::single_list_entry_t* thread_list_head;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadListHead
        _m01 void*                           completion_event;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompletionEvent
        _m02 uint32_t                        completion_flags;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CompletionFlags
        _m03 struct nt::single_list_entry_t  internal_list_head;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InternalListHead
                                                                
        SDK_MAGIC_PROPERTIES( "_RTL_UMS_COMPLETION_LIST.$", 0x20, true, 0x82bb80503c72bf20 );                   
        SDK_FIXED_SIZE( ums_completion_list_t, 0x20 );                   
    };                                                          
};
#include "magic/ums_completion_list_t.end.hpp"
SDK_VERIFY( struct rtl::ums_completion_list_t, 0x20 );
