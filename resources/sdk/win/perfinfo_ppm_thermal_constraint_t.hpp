#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_ppm_thermal_constraint_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PPM_THERMAL_CONSTRAINT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_ppm_thermal_constraint_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t constraint;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Constraint
        _m01 uint64_t processors;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Processors
                                            
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PPM_THERMAL_CONSTRAINT.$", 0x10, true, 0x3238c45db80b6dc4 );           
        SDK_FIXED_SIZE( perfinfo_ppm_thermal_constraint_t, 0x10 );           
    };                                      
};
#include "magic/perfinfo_ppm_thermal_constraint_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_ppm_thermal_constraint_t, 0x10 );
