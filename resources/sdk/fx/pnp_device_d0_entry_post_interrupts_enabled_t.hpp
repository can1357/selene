#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/power_device_state_t.hpp"

namespace wdf { struct wdfdevice_t; }

#include "magic/pnp_device_d0_entry_post_interrupts_enabled_t.start.hpp"
namespace fx
{
    // [class FxPnpDeviceD0EntryPostInterruptsEnabled]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pnp_device_d0_entry_post_interrupts_enabled_t
    {                                                  
        using m_method_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;         
                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                        
        _m00 m_method_t  m_method;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                       
        SDK_MAGIC_PROPERTIES( "FxPnpDeviceD0EntryPostInterruptsEnabled.$", 0x8, true, 0xede6d2f04b3870fc );         
        SDK_FIXED_SIZE( pnp_device_d0_entry_post_interrupts_enabled_t, 0x8 );         
    };                                                 
};
#include "magic/pnp_device_d0_entry_post_interrupts_enabled_t.end.hpp"
SDK_VERIFY( class fx::pnp_device_d0_entry_post_interrupts_enabled_t, 0x8 );
