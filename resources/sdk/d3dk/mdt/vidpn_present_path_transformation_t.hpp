#pragma once
#include <sdkgen/support_library.hpp>
#include "vidpn_present_path_scaling_t.hpp"
#include "vidpn_present_path_rotation_t.hpp"
#include "vidpn_present_path_scaling_support_t.hpp"
#include "vidpn_present_path_rotation_support_t.hpp"

#include "magic/vidpn_present_path_transformation_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_VIDPN_PRESENT_PATH_TRANSFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct vidpn_present_path_transformation_t                              
    {                                                                       
        using scaling_support_t =  struct d3dk::mdt::vidpn_present_path_scaling_support_t;                 
        using rotation_support_t = struct d3dk::mdt::vidpn_present_path_rotation_support_t;                 
                                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                  
        _m00 enum d3dk::mdt::vidpn_present_path_scaling_t  scaling;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Scaling
        _m01 scaling_support_t                             scaling_support;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ScalingSupport
        _m02 enum d3dk::mdt::vidpn_present_path_rotation_t rotation;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Rotation
        _m03 rotation_support_t                            rotation_support;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .RotationSupport
                                                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIDPN_PRESENT_PATH_TRANSFORMATION.$", 0x10, true, 0xefe427d5d2c5dadd );                 
        SDK_FIXED_SIZE( vidpn_present_path_transformation_t, 0x10 );                 
    };                                                                      
};
#include "magic/vidpn_present_path_transformation_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::vidpn_present_path_transformation_t, 0x10 );
