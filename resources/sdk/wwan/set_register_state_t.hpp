#pragma once
#include <sdkgen/support_library.hpp>
#include "register_action_t.hpp"

#include "magic/set_register_state_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_SET_REGISTER_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct set_register_state_t                           
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                
        _m00 sdk::array<wchar_t, 7>       provider_id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProviderId
        _m01 enum wwan::register_action_t register_action;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RegisterAction
        _m02 uint32_t                     wwan_data_class;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .WwanDataClass
                                                          
        SDK_MAGIC_PROPERTIES( "_WWAN_SET_REGISTER_STATE.$", 0x18, true, 0xde99bef885e72d96 );                
        SDK_FIXED_SIZE( set_register_state_t, 0x18 );                
    };                                                    
};
#include "magic/set_register_state_t.end.hpp"
SDK_VERIFY( struct wwan::set_register_state_t, 0x18 );
