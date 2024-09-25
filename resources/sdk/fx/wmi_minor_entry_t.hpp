#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/wmi_minor_entry_t.start.hpp"
namespace fx
{
    class wmi_instance_t;
    class wmi_provider_t;
    class wmi_irp_handler_t;

    // [struct FxWmiMinorEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wmi_minor_entry_t                                  
    {                                                         
        using pfn_wmi_handler_minor_dispatch_t = sdk::function<int32_t(class fx::wmi_irp_handler_t*, struct nt::irp_t*, class fx::wmi_provider_t*, class fx::wmi_instance_t*)>*;               
                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                    
        _m00 pfn_wmi_handler_minor_dispatch_t  handler;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Handler
        _m01 uint8_t                           check_instance;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CheckInstance
                                                              
        SDK_MAGIC_PROPERTIES( "FxWmiMinorEntry.$", 0x10, true, 0x8f0d9271a3d82eea );               
        SDK_FIXED_SIZE( wmi_minor_entry_t, 0x10 );               
    };                                                        
};
#include "magic/wmi_minor_entry_t.end.hpp"
SDK_VERIFY( struct fx::wmi_minor_entry_t, 0x10 );
