#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/provider_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_PROVIDER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct provider_t                                
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 sdk::array<wchar_t, 7>  provider_id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProviderId
        _m01 uint32_t                provider_state;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProviderState
        _m02 sdk::array<wchar_t, 21> provider_name;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ProviderName
        _m03 uint32_t                wwan_data_class;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .WwanDataClass
                                                     
        SDK_MAGIC_PROPERTIES( "_WWAN_PROVIDER.$", 0x44, true, 0x8881402c2faec33c );                
        SDK_FIXED_SIZE( provider_t, 0x44 );                
    };                                               
};
#include "magic/provider_t.end.hpp"
SDK_VERIFY( struct wwan::provider_t, 0x44 );
