#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct workitem_t; }

#include "magic/stor_async_notify_context_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_ASYNC_NOTIFY_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_async_notify_context_t        
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 struct io::workitem_t* work_item;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItem
        _m01 uint64_t               flags;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint32_t               in_use;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InUse
                                              
        SDK_MAGIC_PROPERTIES( "_STOR_ASYNC_NOTIFY_CONTEXT.$", 0x18, true, 0xbc9736900ee868ab );          
        SDK_FIXED_SIZE( stor_async_notify_context_t, 0x18 );          
    };                                        
};
#include "magic/stor_async_notify_context_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_async_notify_context_t, 0x18 );
