#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/device_relation_type_t.hpp"

namespace wdf { struct wdfdevice_t; }

#include "magic/pnp_device_relations_query_t.start.hpp"
namespace fx
{
    // [class FxPnpDeviceRelationsQuery]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pnp_device_relations_query_t                  
    {                                                   
        using pfn_wdf_device_relations_query_t = sdk::function<void(struct wdf::wdfdevice_t*, enum nt::device_relation_type_t)>*;         
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                              
        _m00 pfn_wdf_device_relations_query_t  m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                        
        SDK_MAGIC_PROPERTIES( "FxPnpDeviceRelationsQuery.$", 0x8, true, 0x338a97d30aa60ad4 );         
        SDK_FIXED_SIZE( pnp_device_relations_query_t, 0x8 );         
    };                                                  
};
#include "magic/pnp_device_relations_query_t.end.hpp"
SDK_VERIFY( class fx::pnp_device_relations_query_t, 0x8 );
