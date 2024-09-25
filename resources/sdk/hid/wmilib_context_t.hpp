#pragma once
#include <sdkgen/support_library.hpp>
#include "wmienabledisablecontrol_t.hpp"

namespace nt { struct device_object_t; }
namespace nt { struct irp_t;           }

#include "magic/wmilib_context_t.start.hpp"
namespace hid
{
    struct wmiguidreginfo_t;

    // [struct _WMILIB_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wmilib_context_t                                     
    {                                                           
        using query_wmi_reg_info_t =   sdk::function<int32_t(struct nt::device_object_t*, uint32_t*, nt::unicode_view*, nt::unicode_view**, nt::unicode_view*, struct nt::device_object_t**)>*;                     
        using query_wmi_data_block_t = sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, uint32_t, uint32_t, uint32_t*, uint32_t, uint8_t*)>*;                     
        using set_wmi_data_block_t =   sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, uint32_t, uint32_t, uint8_t*)>*;                     
        using set_wmi_data_item_t =    sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint8_t*)>*;                     
        using execute_wmi_method_t =   sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint8_t*)>*;                     
        using wmi_function_control_t = sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, enum hid::wmienabledisablecontrol_t, uint8_t)>*;                     
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                      
        _m00 uint32_t                      guid_count;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GuidCount
        _m01 struct hid::wmiguidreginfo_t* guid_list;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .GuidList
        _m02 query_wmi_reg_info_t          query_wmi_reg_info;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .QueryWmiRegInfo
        _m03 query_wmi_data_block_t        query_wmi_data_block;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .QueryWmiDataBlock
        _m04 set_wmi_data_block_t          set_wmi_data_block;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SetWmiDataBlock
        _m05 set_wmi_data_item_t           set_wmi_data_item;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SetWmiDataItem
        _m06 execute_wmi_method_t          execute_wmi_method;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ExecuteWmiMethod
        _m07 wmi_function_control_t        wmi_function_control;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .WmiFunctionControl
                                                                
        SDK_MAGIC_PROPERTIES( "_WMILIB_CONTEXT.$", 0x40, true, 0xe92d7b3e47b76432 );                     
        SDK_FIXED_SIZE( wmilib_context_t, 0x40 );                     
    };                                                          
};
#include "magic/wmilib_context_t.end.hpp"
SDK_VERIFY( struct hid::wmilib_context_t, 0x40 );
