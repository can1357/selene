#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/class_query_wmi_reginfo_ex_list_t.start.hpp"
namespace nt
{
    struct device_object_t;

    // [struct _CLASS_QUERY_WMI_REGINFO_EX_LIST]
    // => WDK 10 (NV)
    //
    struct class_query_wmi_reginfo_ex_list_t                                
    {                                                                       
        using pclass_query_wmi_reginfo_ex_t = sdk::function<int32_t(struct nt::device_object_t*, uint32_t*, nt::unicode_view*, nt::unicode_view*)>*;                                
        using pclass_query_wmi_reginfo_ex_t = sdk::function<int32_t(struct nt::device_object_t*, uint32_t*, nt::unicode_view*, nt::unicode_view*)>*;                                
                                                                            
        // WDK 10                                                           
        //                                                                  
        _m00 uint32_t                       size;                             //{ +0x0000    } | .Size
        _m01 pclass_query_wmi_reginfo_ex_t  class_fdo_query_wmi_reg_info_ex;  //{ +0x0008    } | .ClassFdoQueryWmiRegInfoEx
        _m02 pclass_query_wmi_reginfo_ex_t  class_pdo_query_wmi_reg_info_ex;  //{ +0x0010    } | .ClassPdoQueryWmiRegInfoEx
                                                                            
        SDK_NONVOL_PROPERTIES( "_CLASS_QUERY_WMI_REGINFO_EX_LIST.$", 0x0, false, 0xc94caa59afd1bd8f );                                
        SDK_FIXED_SIZE( class_query_wmi_reginfo_ex_list_t, 0x18 );                                
    };                                                                      
};
#include "magic/class_query_wmi_reginfo_ex_list_t.end.hpp"
SDK_VERIFY( struct nt::class_query_wmi_reginfo_ex_list_t, 0x18 );
