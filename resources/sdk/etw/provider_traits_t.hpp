#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/balanced_node_t.hpp"

#include "magic/provider_traits_t.start.hpp"
namespace etw
{
    // [struct _ETW_PROVIDER_TRAITS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct provider_traits_t                             
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                               
        _m00 struct rtl::balanced_node_t node;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Node
        _m01 uint32_t                    reference_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReferenceCount
        _m02 sdk::array<uint8_t, 1>      traits;           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Traits
                                                         
        SDK_MAGIC_PROPERTIES( "_ETW_PROVIDER_TRAITS.$", 0x20, true, 0xd17a8de87ae226d0 );                
        SDK_FIXED_SIZE( provider_traits_t, 0x20 );                
    };                                                   
};
#include "magic/provider_traits_t.end.hpp"
SDK_VERIFY( struct etw::provider_traits_t, 0x20 );
