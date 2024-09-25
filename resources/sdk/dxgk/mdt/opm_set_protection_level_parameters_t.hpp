#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/opm_set_protection_level_parameters_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_SET_PROTECTION_LEVEL_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct opm_set_protection_level_parameters_t
    {                                           
        // WDK 10                         
        //                                
        _m00 uint32_t ul_protection_type;         //{ +0x0000    } | .ulProtectionType
        _m01 uint32_t ul_protection_level;        //{ +0x0004    } | .ulProtectionLevel
                                                
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_SET_PROTECTION_LEVEL_PARAMETERS.$", 0x0, false, 0x7993608d6b00cba4 );                    
        SDK_FIXED_SIZE( opm_set_protection_level_parameters_t, 0x10 );                    
    };                                          
};
#include "magic/opm_set_protection_level_parameters_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_set_protection_level_parameters_t, 0x10 );
