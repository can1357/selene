#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/devicepresence_t.start.hpp"
namespace hid
{
    // [struct _HID_DEVICEPRESENCE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct devicepresence_t                        
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                         
        _m00 uint64_t         spin_lock;             //{ +0x0000    +0x0000    +0x0000    } | .SpinLock
        _m01 uint8_t          draining;              //{ +0x0008    +0x0008    +0x0008    } | .Draining
        _m02 nt::list_entry_t pdo_irp_pending_list;  //{ +0x0010    +0x0010    +0x0010    } | .PdoIrpPendingList
                                                   
        SDK_MAGIC_PROPERTIES( "_HID_DEVICEPRESENCE.$", 0x20, true, 0xb5c1b411ebfd5c7c );                     
        SDK_FIXED_SIZE( devicepresence_t, 0x20 );                     
    };                                             
};
#include "magic/devicepresence_t.end.hpp"
SDK_VERIFY( struct hid::devicepresence_t, 0x20 );
