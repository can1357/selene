#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfwmiinstance_t; }

#include "magic/wmi_instance_query_instance_callback_t.start.hpp"
namespace fx
{
    // [struct FxWmiInstanceQueryInstanceCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wmi_instance_query_instance_callback_t            
    {                                                        
        using pfn_wdf_wmi_instance_query_instance_t = sdk::function<int32_t(struct wdf::wdfwmiinstance_t*, uint32_t, void*, uint32_t*)>*;         
                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                   
        _m00 pfn_wdf_wmi_instance_query_instance_t  m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                             
        SDK_MAGIC_PROPERTIES( "FxWmiInstanceQueryInstanceCallback.$", 0x8, true, 0x16a83df941db963a );         
        SDK_FIXED_SIZE( wmi_instance_query_instance_callback_t, 0x8 );         
    };                                                       
};
#include "magic/wmi_instance_query_instance_callback_t.end.hpp"
SDK_VERIFY( struct fx::wmi_instance_query_instance_callback_t, 0x8 );
