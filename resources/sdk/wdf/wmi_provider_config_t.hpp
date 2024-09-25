#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "wmi_provider_control_t.hpp"

#include "magic/wmi_provider_config_t.start.hpp"
namespace wdf
{
    struct wdfwmiprovider_t;

    // [struct _WDF_WMI_PROVIDER_CONFIG]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wmi_provider_config_t                                                        
    {                                                                                   
        using pfn_wdf_wmi_provider_function_control_t = sdk::function<int32_t(struct wdf::wdfwmiprovider_t*, enum wdf::wmi_provider_control_t, uint8_t)>*;                                  
                                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                              
        _m00 uint32_t                                 size;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct nt::guid_t                        guid;                               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Guid
        _m02 uint32_t                                 flags;                              //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Flags
        _m03 uint32_t                                 min_instance_buffer_size;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MinInstanceBufferSize
        _m04 pfn_wdf_wmi_provider_function_control_t  evt_wmi_provider_function_control;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .EvtWmiProviderFunctionControl
                                                                                        
        SDK_NONVOL_PROPERTIES( "_WDF_WMI_PROVIDER_CONFIG.$", 0x28, true, 0xd714a2ac9afe264b );                                  
        SDK_FIXED_SIZE( wmi_provider_config_t, 0x28 );                                  
    };                                                                                  
};
#include "magic/wmi_provider_config_t.end.hpp"
SDK_VERIFY( struct wdf::wmi_provider_config_t, 0x28 );
