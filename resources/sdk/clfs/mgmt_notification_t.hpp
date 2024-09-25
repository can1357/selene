#pragma once
#include <sdkgen/support_library.hpp>
#include "../cls/lsn_t.hpp"
#include "mgmt_notification_type_t.hpp"

#include "magic/mgmt_notification_t.start.hpp"
namespace clfs
{
    // [struct _CLFS_MGMT_NOTIFICATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mgmt_notification_t                                 
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                     
        _m00 enum clfs::mgmt_notification_type_t notification;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Notification
        _m01 union cls::lsn_t                    lsn;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Lsn
        _m02 uint16_t                            log_is_pinned;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LogIsPinned
                                                               
        SDK_NONVOL_PROPERTIES( "_CLFS_MGMT_NOTIFICATION.$", 0x18, true, 0x6858afcc55e9c052 );              
        SDK_FIXED_SIZE( mgmt_notification_t, 0x18 );              
    };                                                         
};
#include "magic/mgmt_notification_t.end.hpp"
SDK_VERIFY( struct clfs::mgmt_notification_t, 0x18 );
