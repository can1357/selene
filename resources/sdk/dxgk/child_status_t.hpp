#pragma once
#include <sdkgen/support_library.hpp>
#include "child_status_type_t.hpp"
#include "../d3dk/mdt/video_output_technology_t.hpp"

#include "magic/child_status_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_CHILD_STATUS]
    // => WDK 10 (NV)
    //
    struct child_status_t                                                                  
    {                                                                                      
        struct u0_hot_plug_t                                                               
        {                                                                                  
            // WDK 10                                                                      
            //                                                                             
            _m02 uint8_t connected;                                                          //{ +0x0000    } | .Connected
                                                                                           
            SDK_NONVOL_PROPERTIES( "_DXGK_CHILD_STATUS.HotPlug.$", 0x0, false, 0x98977e56ea686aba );                    
            SDK_FIXED_SIZE( u0_hot_plug_t, 0x1 );                                          
        };                                                                                 
                                                                                           
        struct u1_rotation_t                                                               
        {                                                                                  
            // WDK 10                                                                      
            //                                                                             
            _m04 uint8_t angle;                                                              //{ +0x0000    } | .Angle
                                                                                           
            SDK_NONVOL_PROPERTIES( "_DXGK_CHILD_STATUS.Rotation.$", 0x0, false, 0xf430b9944e118ef5 );                
            SDK_FIXED_SIZE( u1_rotation_t, 0x1 );                                          
        };                                                                                 
                                                                                           
        struct u2_miracast_t                                                               
        {                                                                                  
            // WDK 10                                                                      
            //                                                                             
            _m06 uint8_t                                   connected;                        //{ +0x0000    } | .Connected
            _m07 enum d3dk::mdt::video_output_technology_t miracast_monitor_type;            //{ +0x0004    } | .MiracastMonitorType
                                                                                           
            SDK_NONVOL_PROPERTIES( "_DXGK_CHILD_STATUS.Miracast.$", 0x0, false, 0x317caaf657f12e38 );                                
            SDK_FIXED_SIZE( u2_miracast_t, 0x8 );                                          
        };                                                                                 
                                                                                           
        // WDK 10                                                                          
        //                                                                                 
        _m00 enum dxgk::child_status_type_t                                      type;       //{ +0x0000    } | .Type
        _m01 uint32_t                                                            child_uid;  //{ +0x0004    } | .ChildUid
        _m03 u0_hot_plug_t                                                       hot_plug;   //{ +0x0008    } | .HotPlug
        _m05 u1_rotation_t                                                       rotation;   //{ +0x0008    } | .Rotation
        _m08 u2_miracast_t                                                       miracast;   //{ +0x0008    } | .Miracast
                                                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_CHILD_STATUS.$", 0x0, false, 0xcda8f51e48cb0a47 );          
        SDK_FIXED_SIZE( child_status_t, 0x10 );                                            
    };                                                                                     
};
#include "magic/child_status_t.end.hpp"
SDK_VERIFY( struct dxgk::child_status_t::u0_hot_plug_t, 0x1 );
SDK_VERIFY( struct dxgk::child_status_t::u1_rotation_t, 0x1 );
SDK_VERIFY( struct dxgk::child_status_t::u2_miracast_t, 0x8 );
SDK_VERIFY( struct dxgk::child_status_t, 0x10 );
