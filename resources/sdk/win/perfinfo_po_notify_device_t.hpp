#pragma once
#include <sdkgen/support_library.hpp>
#include "../power/state_t.hpp"
#include "../power/state_type_t.hpp"

#include "magic/perfinfo_po_notify_device_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PO_NOTIFY_DEVICE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_po_notify_device_t                   
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                               
        _m00 void*                    irp;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 void*                    driver_start;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DriverStart
        _m02 uint8_t                  order_level;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OrderLevel
        _m03 uint8_t                  major_function;      //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .MajorFunction
        _m04 uint8_t                  minor_function;      //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .MinorFunction
        _m05 enum power::state_type_t type;                //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Type
        _m06 union power::state_t     state;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .State
        _m07 uint32_t                 device_name_length;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .DeviceNameLength
        _m08 sdk::array<wchar_t, 1>   device_name;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DeviceName
                                                         
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PO_NOTIFY_DEVICE.$", 0x28, true, 0x957a99d5849f28d2 );                   
        SDK_FIXED_SIZE( perfinfo_po_notify_device_t, 0x28 );                   
    };                                                   
};
#include "magic/perfinfo_po_notify_device_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_po_notify_device_t, 0x28 );
