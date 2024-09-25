#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3dk/mdt/vidpn_present_path_copyprotection_type_t.hpp"
#include "../../d3dk/mdt/vidpn_present_path_copyprotection_support_t.hpp"

#include "magic/settargetanalogcopyprotection_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETTARGETANALOGCOPYPROTECTION]
    // => WDK 10 (NV)
    //
    struct settargetanalogcopyprotection_t                      
    {                                                           
        using d3dkmdt_vidpn_present_path_copyprotection_type_t = enum d3dk::mdt::vidpn_present_path_copyprotection_type_t;                        
        using copy_protection_type_t =                           d3dkmdt_vidpn_present_path_copyprotection_type_t ;                        
        using copy_protection_support_t =                        struct d3dk::mdt::vidpn_present_path_copyprotection_support_t;                        
                                                                
        // WDK 10                                               
        //                                                      
        _m00 uint32_t                   target_id;                //{ +0x0000    } | .TargetId
        _m01 copy_protection_type_t     copy_protection_type;     //{ +0x0004    } | .CopyProtectionType
        _m02 uint32_t                   aps_trigger_bits;         //{ +0x0008    } | .APSTriggerBits
        _m03 copy_protection_support_t  copy_protection_support;  //{ +0x000c    } | .CopyProtectionSupport
                                                                
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETTARGETANALOGCOPYPROTECTION.$", 0x0, false, 0x3b1b541b8c402821 );                        
        SDK_FIXED_SIZE( settargetanalogcopyprotection_t, 0x10 );                        
    };                                                          
};
#include "magic/settargetanalogcopyprotection_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::settargetanalogcopyprotection_t, 0x10 );
