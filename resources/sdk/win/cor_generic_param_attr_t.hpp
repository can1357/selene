#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorGenericParamAttr]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_generic_param_attr_t : int32_t    
    {                                                
        no_special_constraint =              0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_variant =                        0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        covariant =                          0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        contravariant =                      0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        variance_mask =                      0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reference_type_constraint =          0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_nullable_value_type_constraint = 0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        default_constructor_constraint =     0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        special_constraint_mask =            0x1c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
