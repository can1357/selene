#pragma once
#include <sdkgen/support_library.hpp>
#include "_2dregion_t.hpp"
#include "frequency_range_t.hpp"
#include "monitor_capabilities_origin_t.hpp"
#include "monitor_frequency_range_constraint_t.hpp"

#include "magic/monitor_frequency_range_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_MONITOR_FREQUENCY_RANGE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct monitor_frequency_range_t                                          
    {                                                                         
        union u0_constraint_t                                                 
        {                                                                     
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
            //                                                                
            _m03 struct d3dk::mdt::_2dregion_t active_size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ActiveSize
            _m04 uint64_t                      max_pixel_rate;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MaxPixelRate
                                                                              
            SDK_NONVOL_PROPERTIES( "_D3DKMDT_MONITOR_FREQUENCY_RANGE.Constraint.$", 0x8, true, 0x85e338c3c920f315 );                               
            SDK_FIXED_SIZE( u0_constraint_t, 0x8 );                               
        };                                                                    
                                                                              
        using d3dkmdt_monitor_frequency_range_constraint_t = enum d3dk::mdt::monitor_frequency_range_constraint_t;                
                                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                    
        _m00 enum d3dk::mdt::monitor_capabilities_origin_t    origin;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Origin
        _m01 struct d3dk::mdt::frequency_range_t              range_limits;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .RangeLimits
        _m02 d3dkmdt_monitor_frequency_range_constraint_t     constraint_type;  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .ConstraintType
        _m05 u0_constraint_t                                  constraint;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Constraint
                                                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_MONITOR_FREQUENCY_RANGE.$", 0x30, true, 0x875e21fd6b4b293c );                
        SDK_FIXED_SIZE( monitor_frequency_range_t, 0x30 );                    
    };                                                                        
};
#include "magic/monitor_frequency_range_t.end.hpp"
SDK_VERIFY( union d3dk::mdt::monitor_frequency_range_t::u0_constraint_t, 0x8 );
SDK_VERIFY( struct d3dk::mdt::monitor_frequency_range_t, 0x30 );
