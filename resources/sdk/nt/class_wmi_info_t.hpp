#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/class_wmi_info_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct guidreginfo_t;
    struct device_object_t;

    // [struct _CLASS_WMI_INFO]
    // => WDK 10 (NV)
    //
    struct class_wmi_info_t                                                            
    {                                                                                  
        enum class u0_class_wmi_function_control_t : int32_t                           
        {                                                                              
            event_generation =      0x0,                                                 // WDK 10
            data_block_collection = 0x1,                                                 // WDK 10
        };                                                                             
                                                                                       
        using pclass_query_wmi_reginfo_t =    sdk::function<int32_t(struct nt::device_object_t*, uint32_t*, nt::unicode_view*)>*;                           
        using class_query_wmi_data_block_t =  sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, uint32_t, uint8_t*)>*;                           
        using class_set_wmi_data_block_t =    sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, uint32_t, uint8_t*)>*;                           
        using pclass_set_wmi_dataitem_t =     sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, uint32_t, uint32_t, uint8_t*)>*;                           
        using pclass_execute_wmi_method_t =   sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint8_t*)>*;                           
        using pclass_wmi_function_control_t = sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, enum , uint8_t)>*;                           
                                                                                       
        // WDK 10                                                                      
        //                                                                             
        _m00 uint32_t                                       guid_count;                  //{ +0x0000    } | .GuidCount
        _m01 struct nt::guidreginfo_t*                      guid_reg_info;               //{ +0x0008    } | .GuidRegInfo
        _m02 pclass_query_wmi_reginfo_t                     class_query_wmi_reg_info;    //{ +0x0010    } | .ClassQueryWmiRegInfo
        _m03 class_query_wmi_data_block_t                   class_query_wmi_data_block;  //{ +0x0018    } | .ClassQueryWmiDataBlock
        _m04 class_set_wmi_data_block_t                     class_set_wmi_data_block;    //{ +0x0020    } | .ClassSetWmiDataBlock
        _m05 pclass_set_wmi_dataitem_t                      class_set_wmi_data_item;     //{ +0x0028    } | .ClassSetWmiDataItem
        _m06 pclass_execute_wmi_method_t                    class_execute_wmi_method;    //{ +0x0030    } | .ClassExecuteWmiMethod
        _m07 pclass_wmi_function_control_t                  class_wmi_function_control;  //{ +0x0038    } | .ClassWmiFunctionControl
                                                                                       
        SDK_NONVOL_PROPERTIES( "_CLASS_WMI_INFO.$", 0x0, false, 0x9a258f5391f46ac1 );                           
        SDK_FIXED_SIZE( class_wmi_info_t, 0x40 );                                      
    };                                                                                 
};
#include "magic/class_wmi_info_t.end.hpp"
SDK_VERIFY( struct nt::class_wmi_info_t, 0x40 );
