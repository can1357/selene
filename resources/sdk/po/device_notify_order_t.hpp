#pragma once
#include <sdkgen/support_library.hpp>
#include "notify_order_level_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/device_notify_order_t.start.hpp"
namespace po
{
    // [struct _PO_DEVICE_NOTIFY_ORDER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_notify_order_t                                                   
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                         
        _m00 uint8_t                                        locked;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Locked
        _m01 struct nt::device_object_t**                   warm_eject_pdo_pointer;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WarmEjectPdoPointer
        _m02 sdk::array<struct po::notify_order_level_t, 5> order_level;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OrderLevel
                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                         
        _m03 uint32_t                                       flags;                   //{ +0x0178    +0x0178    +0x0178    } | .Flags
                                                                                   
        SDK_MAGIC_PROPERTIES( "_PO_DEVICE_NOTIFY_ORDER.$", 0x180, true, 0x7f19fee59716da2b );                       
        SDK_DYNAMIC_SIZE( device_notify_order_t );                                 
    };                                                                             
};
#include "magic/device_notify_order_t.end.hpp"
