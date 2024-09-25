#pragma once
#include <sdkgen/support_library.hpp>
#include "vidpn_present_path_copyprotection_type_t.hpp"
#include "vidpn_present_path_copyprotection_support_t.hpp"

#include "magic/vidpn_present_path_copyprotection_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct vidpn_present_path_copyprotection_t                  
    {                                                           
        using d3dkmdt_vidpn_present_path_copyprotection_type_t = enum d3dk::mdt::vidpn_present_path_copyprotection_type_t;                        
        using copy_protection_type_t =                           d3dkmdt_vidpn_present_path_copyprotection_type_t ;                        
        using copy_protection_support_t =                        struct d3dk::mdt::vidpn_present_path_copyprotection_support_t;                        
                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                      
        _m00 copy_protection_type_t     copy_protection_type;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CopyProtectionType
        _m01 uint32_t                   aps_trigger_bits;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .APSTriggerBits
        _m02 sdk::array<uint8_t, 256>   oem_copy_protection;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .OEMCopyProtection
        _m03 copy_protection_support_t  copy_protection_support;  //{ +0x0108    +0x0108    +0x0108    +0x0108    +0x0108    } | .CopyProtectionSupport
                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION.$", 0x10c, true, 0xd5a7ccf26780a40b );                        
        SDK_FIXED_SIZE( vidpn_present_path_copyprotection_t, 0x10c );                        
    };                                                          
};
#include "magic/vidpn_present_path_copyprotection_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::vidpn_present_path_copyprotection_t, 0x10c );
