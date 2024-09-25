#pragma once
#include <sdkgen/support_library.hpp>
#include "vidschescapetype_t.hpp"
#include "escape_pfn_control_command_t.hpp"

#include "magic/vidsch_escape_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_VIDSCH_ESCAPE]
    // => WDK 10 (NV)
    //
    struct vidsch_escape_t                                                    
    {                                                                         
        struct u0_tdr_control2_t                                              
        {                                                                     
            // WDK 10                                                         
            //                                                                
            _m03 uint32_t tdr_control;                                          //{ +0x0000    } | .TdrControl
            _m04 uint32_t node_ordinal;                                         //{ +0x0004    } | .NodeOrdinal
                                                                              
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDSCH_ESCAPE.TdrControl2.$", 0x0, false, 0xd74740de5b8a13ff );                                  
            SDK_FIXED_SIZE( u0_tdr_control2_t, 0x8 );                                  
        };                                                                    
                                                                              
        struct u1_tdr_limit_t                                                 
        {                                                                     
            // WDK 10                                                         
            //                                                                
            _m09 uint32_t count;                                                //{ +0x0000    } | .Count
            _m10 uint32_t time;                                                 //{ +0x0004    } | .Time
                                                                              
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDSCH_ESCAPE.TdrLimit.$", 0x0, false, 0x7fb56c0953363e2c );                           
            SDK_FIXED_SIZE( u1_tdr_limit_t, 0x8 );                            
        };                                                                    
                                                                              
        // WDK 10                                                             
        //                                                                    
        _m00 enum d3dk::mt::vidschescapetype_t           type;                  //{ +0x0000    } | .Type
        _m01 int32_t                                     preemption_control;    //{ +0x0004    } | .PreemptionControl
        _m02 int32_t                                     enable_context_delay;  //{ +0x0004    } | .EnableContextDelay
        _m05 u0_tdr_control2_t                           tdr_control2;          //{ +0x0004    } | .TdrControl2
        _m06 int32_t                                     suspend_scheduler;     //{ +0x0004    } | .SuspendScheduler
        _m07 uint32_t                                    tdr_control;           //{ +0x0004    } | .TdrControl
        _m08 uint32_t                                    suspend_time;          //{ +0x0004    } | .SuspendTime
        _m11 u1_tdr_limit_t                              tdr_limit;             //{ +0x0004    } | .TdrLimit
        _m12 enum d3dk::mt::escape_pfn_control_command_t pfn_control;           //{ +0x0004    } | .PfnControl
                                                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDSCH_ESCAPE.$", 0x0, false, 0xc171314aa6e998fc );                     
        SDK_FIXED_SIZE( vidsch_escape_t, 0xc );                               
    };                                                                        
};
#include "magic/vidsch_escape_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::vidsch_escape_t::u0_tdr_control2_t, 0x8 );
SDK_VERIFY( struct d3dk::mt::vidsch_escape_t::u1_tdr_limit_t, 0x8 );
SDK_VERIFY( struct d3dk::mt::vidsch_escape_t, 0xc );
