#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wmi_instance_config_v1_0_t.start.hpp"
namespace wdf
{
    struct wdfwmiinstance_t;
    struct wdfwmiprovider_t;
    struct wmi_provider_config_v1_0_t;

    // [struct _WDF_WMI_INSTANCE_CONFIG_V1_0]
    // => Windows 10 v1607
    //
    struct wmi_instance_config_v1_0_t                                                
    {                                                                                
        using pfn_wdf_wmi_instance_query_instance_t = sdk::function<int32_t(struct wdf::wdfwmiinstance_t*, uint32_t, void*, uint32_t*)>*;                                
        using pfn_wdf_wmi_instance_set_instance_t =   sdk::function<int32_t(struct wdf::wdfwmiinstance_t*, uint32_t, void*)>*;                                
        using pfn_wdf_wmi_instance_set_item_t =       sdk::function<int32_t(struct wdf::wdfwmiinstance_t*, uint32_t, uint32_t, void*)>*;                                
        using pfn_wdf_wmi_instance_execute_method_t = sdk::function<int32_t(struct wdf::wdfwmiinstance_t*, uint32_t, uint32_t, uint32_t, void*, uint32_t*)>*;                                
                                                                                     
        // Windows 10 v1607                                                          
        //                                                                           
        _m00 uint32_t                                size;                             //{ +0x0000    } | .Size
        _m01 struct wdf::wdfwmiprovider_t*           provider;                         //{ +0x0008    } | .Provider
        _m02 struct wdf::wmi_provider_config_v1_0_t* provider_config;                  //{ +0x0010    } | .ProviderConfig
        _m03 uint8_t                                 use_context_for_query;            //{ +0x0018    } | .UseContextForQuery
        _m04 uint8_t                                 _register;                        //{ +0x0019    } | .Register
        _m05 pfn_wdf_wmi_instance_query_instance_t   evt_wmi_instance_query_instance;  //{ +0x0020    } | .EvtWmiInstanceQueryInstance
        _m06 pfn_wdf_wmi_instance_set_instance_t     evt_wmi_instance_set_instance;    //{ +0x0028    } | .EvtWmiInstanceSetInstance
        _m07 pfn_wdf_wmi_instance_set_item_t         evt_wmi_instance_set_item;        //{ +0x0030    } | .EvtWmiInstanceSetItem
        _m08 pfn_wdf_wmi_instance_execute_method_t   evt_wmi_instance_execute_method;  //{ +0x0038    } | .EvtWmiInstanceExecuteMethod
                                                                                     
        SDK_MAGIC_PROPERTIES( "_WDF_WMI_INSTANCE_CONFIG_V1_0.$", 0x0, false, 0x453940fe7629a1a1 );                                
        SDK_FIXED_SIZE( wmi_instance_config_v1_0_t, 0x40 );                                
    };                                                                               
};
#include "magic/wmi_instance_config_v1_0_t.end.hpp"
SDK_VERIFY( struct wdf::wmi_instance_config_v1_0_t, 0x40 );
