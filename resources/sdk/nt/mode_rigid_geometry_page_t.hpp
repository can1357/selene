#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_rigid_geometry_page_t.start.hpp"
namespace nt
{
    // [struct _MODE_RIGID_GEOMETRY_PAGE]
    // => WDK 10 (NV)
    //
    struct mode_rigid_geometry_page_t                        
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint6_t                page_code;                 //{ +0x0000@0  } | .PageCode
        _m01 uint1_t                page_savable;              //{ +0x0000@7  } | .PageSavable
        _m02 uint8_t                page_length;               //{ +0x0001    } | .PageLength
        _m03 sdk::array<uint8_t, 3> number_of_cylinders;       //{ +0x0002    } | .NumberOfCylinders
        _m04 uint8_t                number_of_heads;           //{ +0x0005    } | .NumberOfHeads
        _m05 sdk::array<uint8_t, 3> start_write_precom;        //{ +0x0006    } | .StartWritePrecom
        _m06 sdk::array<uint8_t, 3> start_reduced_current;     //{ +0x0009    } | .StartReducedCurrent
        _m07 sdk::array<uint8_t, 2> drive_step_rate;           //{ +0x000c    } | .DriveStepRate
        _m08 sdk::array<uint8_t, 3> land_zone_cyclinder;       //{ +0x000e    } | .LandZoneCyclinder
        _m09 uint2_t                rotational_position_lock;  //{ +0x0011@0  } | .RotationalPositionLock
        _m10 uint8_t                rotation_offset;           //{ +0x0012    } | .RotationOffset
        _m11 sdk::array<uint8_t, 2> roataion_rate;             //{ +0x0014    } | .RoataionRate
                                                             
        SDK_NONVOL_PROPERTIES( "_MODE_RIGID_GEOMETRY_PAGE.$", 0x0, false, 0xb7e3a643212bbc88 );                         
        SDK_FIXED_SIZE( mode_rigid_geometry_page_t, 0x18 );                         
    };                                                       
};
#include "magic/mode_rigid_geometry_page_t.end.hpp"
SDK_VERIFY( struct nt::mode_rigid_geometry_page_t, 0x18 );
