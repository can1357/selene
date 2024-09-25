#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3dk/mdt/video_output_technology_t.hpp"

#include "magic/connection_change_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_CONNECTION_CHANGE]
    // => WDK 10 (NV)
    //
    struct connection_change_t                                                                   
    {                                                                                            
        struct u0_monitor_connect_t                                                              
        {                                                                                        
            // WDK 10                                                                            
            //                                                                                   
            _m03 enum d3dk::mdt::video_output_technology_t link_target_type;                       //{ +0x0000    } | .LinkTargetType
                                                                                                 
            SDK_NONVOL_PROPERTIES( "_DXGK_CONNECTION_CHANGE.MonitorConnect.$", 0x0, false, 0x40d829eeee07761 );                                      
            SDK_FIXED_SIZE( u0_monitor_connect_t, 0x4 );                                         
        };                                                                                       
                                                                                                 
        struct u1_target_connect_t                                                               
        {                                                                                        
            // WDK 10                                                                            
            //                                                                                   
            _m05 enum d3dk::mdt::video_output_technology_t base_target_type;                       //{ +0x0000    } | .BaseTargetType
            _m06 uint32_t                                  new_target_id;                          //{ +0x0004    } | .NewTargetId
                                                                                                 
            SDK_NONVOL_PROPERTIES( "_DXGK_CONNECTION_CHANGE.TargetConnect.$", 0x0, false, 0x274516f40508458d );                                      
            SDK_FIXED_SIZE( u1_target_connect_t, 0x8 );                                          
        };                                                                                       
                                                                                                 
        struct u2_target_join_t                                                                  
        {                                                                                        
            // WDK 10                                                                            
            //                                                                                   
            _m08 enum d3dk::mdt::video_output_technology_t base_target_type;                       //{ +0x0000    } | .BaseTargetType
            _m09 uint32_t                                  new_target_id;                          //{ +0x0004    } | .NewTargetId
                                                                                                 
            SDK_NONVOL_PROPERTIES( "_DXGK_CONNECTION_CHANGE.TargetJoin.$", 0x0, false, 0xc2b142490f8579e2 );                                      
            SDK_FIXED_SIZE( u2_target_join_t, 0x8 );                                             
        };                                                                                       
                                                                                                 
        // WDK 10                                                                                
        //                                                                                       
        _m00 uint64_t                                                       connection_change_id;  //{ +0x0000    } | .ConnectionChangeId
        _m01 uint24_t                                                       target_id;             //{ +0x0008@0  } | .TargetId
        _m02 uint4_t                                                        connection_status;     //{ +0x0008@24 } | .ConnectionStatus
        _m04 u0_monitor_connect_t                                           monitor_connect;       //{ +0x000c    } | .MonitorConnect
        _m07 u1_target_connect_t                                            target_connect;        //{ +0x000c    } | .TargetConnect
        _m10 u1_target_connect_t                                            target_join;           //{ +0x000c    } | .TargetJoin
                                                                                                 
        SDK_NONVOL_PROPERTIES( "_DXGK_CONNECTION_CHANGE.$", 0x0, false, 0x335fda77b859c880 );                     
        SDK_FIXED_SIZE( connection_change_t, 0x18 );                                             
    };                                                                                           
};
#include "magic/connection_change_t.end.hpp"
SDK_VERIFY( struct dxgk::connection_change_t::u0_monitor_connect_t, 0x4 );
SDK_VERIFY( struct dxgk::connection_change_t::u1_target_connect_t, 0x8 );
SDK_VERIFY( struct dxgk::connection_change_t::u2_target_join_t, 0x8 );
SDK_VERIFY( struct dxgk::connection_change_t, 0x18 );
