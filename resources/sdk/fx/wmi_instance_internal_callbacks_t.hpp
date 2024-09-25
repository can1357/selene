#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wmi_instance_internal_callbacks_t.start.hpp"
namespace fx
{
    class device_t;
    class wmi_instance_internal_t;

    // [struct FxWmiInstanceInternalCallbacks]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wmi_instance_internal_callbacks_t                      
    {                                                             
        using pfn_fx_wmi_instance_query_instance_t = sdk::function<int32_t(class fx::device_t*, class fx::wmi_instance_internal_t*, uint32_t, void*, uint32_t*)>*;               
        using pfn_fx_wmi_instance_set_instance_t =   sdk::function<int32_t(class fx::device_t*, class fx::wmi_instance_internal_t*, uint32_t, void*)>*;               
        using pfn_fx_wmi_instance_set_item_t =       sdk::function<int32_t(class fx::device_t*, class fx::wmi_instance_internal_t*, uint32_t, uint32_t, void*)>*;               
        using pfn_fx_wmi_instance_execute_method_t = sdk::function<int32_t(class fx::device_t*, class fx::wmi_instance_internal_t*, uint32_t, uint32_t, uint32_t, void*, uint32_t*)>*;               
                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                        
        _m00 pfn_fx_wmi_instance_query_instance_t  query_instance;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInstance
        _m01 pfn_fx_wmi_instance_set_instance_t    set_instance;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SetInstance
        _m02 pfn_fx_wmi_instance_set_item_t        set_item;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SetItem
        _m03 pfn_fx_wmi_instance_execute_method_t  execute_method;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ExecuteMethod
                                                                  
        SDK_MAGIC_PROPERTIES( "FxWmiInstanceInternalCallbacks.$", 0x20, true, 0x78eb46e83b745b0b );               
        SDK_FIXED_SIZE( wmi_instance_internal_callbacks_t, 0x20 );               
    };                                                            
};
#include "magic/wmi_instance_internal_callbacks_t.end.hpp"
SDK_VERIFY( struct fx::wmi_instance_internal_callbacks_t, 0x20 );
