#pragma once
#include <sdkgen/support_library.hpp>
#include "cx_callback_type_t.hpp"
#include "../wdf/power_device_state_t.hpp"

namespace wdf { struct wdfdevice_t; }

#include "magic/pnp_device_d0_entry_t.start.hpp"
namespace fx
{
    class pkg_pnp_t;

    // [class FxPnpDeviceD0Entry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pnp_device_d0_entry_t                              
    {                                                        
        using m_method_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                 
                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 enum fx::cx_callback_type_t    m_callback_type;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_CallbackType
        _m01 class fx::pkg_pnp_t*           m_pkg_pnp;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_PkgPnp
        _m02 m_method_t                     m_method;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_Method
        _m03 struct wdf::wdfdevice_t*       m_device;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_Device
        _m04 enum wdf::power_device_state_t m_previous_state;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_PreviousState
                                                             
        SDK_MAGIC_PROPERTIES( "FxPnpDeviceD0Entry.$", 0x30, true, 0x21429a5bd3d70691 );                 
        SDK_FIXED_SIZE( pnp_device_d0_entry_t, 0x30 );                 
    };                                                       
};
#include "magic/pnp_device_d0_entry_t.end.hpp"
SDK_VERIFY( class fx::pnp_device_d0_entry_t, 0x30 );
