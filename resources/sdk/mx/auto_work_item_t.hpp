#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct workitem_t; }

#include "magic/auto_work_item_t.start.hpp"
namespace mx
{
    // [struct MxAutoWorkItem]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct auto_work_item_t                     
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 struct io::workitem_t* m_work_item;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_WorkItem
                                                
        SDK_MAGIC_PROPERTIES( "MxAutoWorkItem.$", 0x8, true, 0x4572475ed47b0577 );            
        SDK_FIXED_SIZE( auto_work_item_t, 0x8 );            
    };                                          
};
#include "magic/auto_work_item_t.end.hpp"
SDK_VERIFY( struct mx::auto_work_item_t, 0x8 );
