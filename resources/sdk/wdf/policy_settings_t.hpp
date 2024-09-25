#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/device_power_state_t.hpp"

namespace fx { class wmi_instance_internal_t; }

#include "magic/policy_settings_t.start.hpp"
namespace wdf
{
    // [struct PolicySettings]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct policy_settings_t                                 
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                   
        _m00 enum nt::device_power_state_t      dx_state;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DxState
        _m01 class fx::wmi_instance_internal_t* wmi_instance;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WmiInstance
        _m02 uint8_t                            enabled;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Enabled
        _m03 uint8_t                            overridable;   //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .Overridable
        _m04 uint8_t                            set;           //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .Set
        _m05 uint8_t                            dirty;         //{ +0x0013    +0x0013    +0x0013    +0x0013    } | .Dirty
                                                             
        SDK_MAGIC_PROPERTIES( "PolicySettings.$", 0x18, true, 0xa4bc370cf5764257 );             
        SDK_FIXED_SIZE( policy_settings_t, 0x18 );             
    };                                                       
};
#include "magic/policy_settings_t.end.hpp"
SDK_VERIFY( struct wdf::policy_settings_t, 0x18 );
