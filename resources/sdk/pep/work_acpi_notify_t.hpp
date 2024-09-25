#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct pohandle_t; }

#include "magic/work_acpi_notify_t.start.hpp"
namespace pep
{
    // [struct _PEP_WORK_ACPI_NOTIFY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_acpi_notify_t                     
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                        
        _m00 struct nt::pohandle_t* device_handle;  //{ +0x0000    +0x0000    +0x0000    } | .DeviceHandle
        _m01 uint32_t               notify_code;    //{ +0x0008    +0x0008    +0x0008    } | .NotifyCode
                                                  
        SDK_MAGIC_PROPERTIES( "_PEP_WORK_ACPI_NOTIFY.$", 0x10, true, 0x2e609b6b35e0600c );              
        SDK_FIXED_SIZE( work_acpi_notify_t, 0x10 );              
    };                                            
};
#include "magic/work_acpi_notify_t.end.hpp"
SDK_VERIFY( struct pep::work_acpi_notify_t, 0x10 );
