#pragma once
#include <sdkgen/support_library.hpp>
#include "cx_callback_type_t.hpp"

namespace wdf { struct wdfdevice_t; }

#include "magic/pnp_device_surprise_removal_t.start.hpp"
namespace fx
{
    class pkg_pnp_t;

    // [class FxPnpDeviceSurpriseRemoval]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pnp_device_surprise_removal_t                                     
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                  
        _m00 enum fx::cx_callback_type_t                    m_callback_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_CallbackType
        _m01 class fx::pkg_pnp_t*                           m_pkg_pnp;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_PkgPnp
        _m02 sdk::function<void(struct wdf::wdfdevice_t*)>* m_method;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_Method
        _m03 struct wdf::wdfdevice_t*                       m_device;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_Device
                                                                            
        SDK_MAGIC_PROPERTIES( "FxPnpDeviceSurpriseRemoval.$", 0x28, true, 0x38190f47b276040f );                
        SDK_FIXED_SIZE( pnp_device_surprise_removal_t, 0x28 );                
    };                                                                      
};
#include "magic/pnp_device_surprise_removal_t.end.hpp"
SDK_VERIFY( class fx::pnp_device_surprise_removal_t, 0x28 );
