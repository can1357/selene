#pragma once
#include <sdkgen/support_library.hpp>
#include "class_init_data_t.hpp"

#include "magic/class_driver_extension_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct device_object_t;
    struct class_working_set_t;
    struct class_interpret_sense_info2_t;

    // [struct _CLASS_DRIVER_EXTENSION]
    // => WDK 10 (NV)
    //
    struct class_driver_extension_t                                                    
    {                                                                                  
        using pclass_query_wmi_reginfo_ex_t =    sdk::function<int32_t(struct nt::device_object_t*, uint32_t*, nt::unicode_view*, nt::unicode_view*)>*;                                
        using pclass_query_wmi_reginfo_ex_t =    sdk::function<int32_t(struct nt::device_object_t*, uint32_t*, nt::unicode_view*, nt::unicode_view*)>*;                                
        using device_major_function_table_t =    sdk::array<sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*, 28>;                                
        using mp_device_major_function_table_t = sdk::array<sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*, 28>;                                
                                                                                       
        // WDK 10                                                                      
        //                                                                             
        _m00 nt::unicode_view                          registry_path;                    //{ +0x0000    } | .RegistryPath
        _m01 struct nt::class_init_data_t              init_data;                        //{ +0x0010    } | .InitData
        _m02 uint32_t                                  device_count;                     //{ +0x0198    } | .DeviceCount
        _m03 pclass_query_wmi_reginfo_ex_t             class_fdo_query_wmi_reg_info_ex;  //{ +0x01a0    } | .ClassFdoQueryWmiRegInfoEx
        _m04 pclass_query_wmi_reginfo_ex_t             class_pdo_query_wmi_reg_info_ex;  //{ +0x01a8    } | .ClassPdoQueryWmiRegInfoEx
        _m05 uint64_t                                  etw_handle;                       //{ +0x01b0    } | .EtwHandle
        _m06 device_major_function_table_t             device_major_function_table;      //{ +0x01b8    } | .DeviceMajorFunctionTable
        _m07 mp_device_major_function_table_t          mp_device_major_function_table;   //{ +0x0298    } | .MpDeviceMajorFunctionTable
        _m08 struct nt::class_interpret_sense_info2_t* interpret_sense_info;             //{ +0x0378    } | .InterpretSenseInfo
        _m09 struct nt::class_working_set_t*           working_set;                      //{ +0x0380    } | .WorkingSet
        _m10 uint32_t                                  srb_support;                      //{ +0x0388    } | .SrbSupport
                                                                                       
        SDK_NONVOL_PROPERTIES( "_CLASS_DRIVER_EXTENSION.$", 0x0, false, 0xcf4ae4598a1761df );                                
        SDK_FIXED_SIZE( class_driver_extension_t, 0x390 );                                
    };                                                                                 
};
#include "magic/class_driver_extension_t.end.hpp"
SDK_VERIFY( struct nt::class_driver_extension_t, 0x390 );
