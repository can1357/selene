#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/devicereset_t.start.hpp"
namespace hid
{
    // [struct _HID_DEVICERESET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct devicereset_t                            
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                          
        _m00 uint8_t           enabled;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Enabled
        _m01 uint64_t          spin_lock;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SpinLock
        _m02 uint8_t           draining;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Draining
        _m03 nt::list_entry_t  pdo_irp_pending_list;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PdoIrpPendingList
        _m04 struct nt::irp_t* fdo_irp;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FdoIrp
                                                    
        SDK_MAGIC_PROPERTIES( "_HID_DEVICERESET.$", 0x30, true, 0xe574c3340370c268 );                     
        SDK_FIXED_SIZE( devicereset_t, 0x30 );                     
    };                                              
};
#include "magic/devicereset_t.end.hpp"
SDK_VERIFY( struct hid::devicereset_t, 0x30 );
