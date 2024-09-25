#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct workitem_t; }

#include "magic/work_item_t.start.hpp"
namespace mx
{
    // [class MxWorkItem]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class work_item_t                           
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 struct io::workitem_t* m_work_item;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_WorkItem
                                                
        SDK_MAGIC_PROPERTIES( "MxWorkItem.$", 0x8, true, 0x563562e747b3a8f6 );            
        SDK_FIXED_SIZE( work_item_t, 0x8 );            
    };                                          
};
#include "magic/work_item_t.end.hpp"
SDK_VERIFY( class mx::work_item_t, 0x8 );
