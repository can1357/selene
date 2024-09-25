#pragma once
#include <sdkgen/support_library.hpp>
#include "adt_parameter_array_entry_t.hpp"

#include "magic/adt_parameter_array_ex_t.start.hpp"
namespace se
{
    // [struct _SE_ADT_PARAMETER_ARRAY_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct adt_parameter_array_ex_t             
    {                                           
        using parameters_t = sdk::array<struct se::adt_parameter_array_entry_t, 32>;                     
                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                      
        _m00 uint32_t      category_id;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CategoryId
        _m01 uint32_t      audit_id;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AuditId
        _m02 uint32_t      version;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Version
        _m03 uint32_t      parameter_count;       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ParameterCount
        _m04 uint32_t      length;                //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Length
        _m05 uint16_t      flat_sub_category_id;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .FlatSubCategoryId
        _m06 uint16_t      type;                  //{ +0x0016    +0x0016    +0x0016    +0x0016    +0x0016    } | .Type
        _m07 uint32_t      flags;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
        _m08 parameters_t  parameters;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Parameters
                                                
        SDK_NONVOL_PROPERTIES( "_SE_ADT_PARAMETER_ARRAY_EX.$", 0x420, true, 0x2d2f13594bbd43ee );                     
        SDK_FIXED_SIZE( adt_parameter_array_ex_t, 0x420 );                     
    };                                          
};
#include "magic/adt_parameter_array_ex_t.end.hpp"
SDK_VERIFY( struct se::adt_parameter_array_ex_t, 0x420 );
