#pragma once
#include <sdkgen/support_library.hpp>
#include "cx_callback_type_t.hpp"
#include "../wdf/power_device_state_t.hpp"

namespace wdf { struct wdfdevice_t; }

#include "magic/pnp_device_d0_entry_post_hw_enabled_t.start.hpp"
namespace fx
{
    class pkg_pnp_t;

    // [class FxPnpDeviceD0EntryPostHwEnabled]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pnp_device_d0_entry_post_hw_enabled_t              
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 enum fx::cx_callback_type_t    m_callback_type;   //{ +0x0008    +0x0008    +0x0008    } | .m_CallbackType
        _m01 class fx::pkg_pnp_t*           m_pkg_pnp;         //{ +0x0010    +0x0010    +0x0010    } | .m_PkgPnp
        _m02 struct wdf::wdfdevice_t*       m_device;          //{ +0x0018    +0x0018    +0x0018    } | .m_Device
        _m03 enum wdf::power_device_state_t m_previous_state;  //{ +0x0020    +0x0020    +0x0020    } | .m_PreviousState
                                                             
        SDK_MAGIC_PROPERTIES( "FxPnpDeviceD0EntryPostHwEnabled.$", 0x28, true, 0x3173a0f876ad1eb7 );                 
        SDK_FIXED_SIZE( pnp_device_d0_entry_post_hw_enabled_t, 0x28 );                 
    };                                                       
};
#include "magic/pnp_device_d0_entry_post_hw_enabled_t.end.hpp"
SDK_VERIFY( class fx::pnp_device_d0_entry_post_hw_enabled_t, 0x28 );
