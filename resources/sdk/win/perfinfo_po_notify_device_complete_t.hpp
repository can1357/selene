#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_po_notify_device_complete_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PO_NOTIFY_DEVICE_COMPLETE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_po_notify_device_complete_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                  
        _m00 void*   irp;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 int32_t status;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Status
                                               
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PO_NOTIFY_DEVICE_COMPLETE.$", 0x10, true, 0x98e42805c91b6aa8 );       
        SDK_FIXED_SIZE( perfinfo_po_notify_device_complete_t, 0x10 );       
    };                                         
};
#include "magic/perfinfo_po_notify_device_complete_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_po_notify_device_complete_t, 0x10 );
