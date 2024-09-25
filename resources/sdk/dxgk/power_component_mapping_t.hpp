#pragma once
#include <sdkgen/support_library.hpp>
#include "power_component_type_t.hpp"

#include "magic/power_component_mapping_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_POWER_COMPONENT_MAPPING]
    // => WDK 10 (NV)
    //
    struct power_component_mapping_t                                   
    {                                                                  
        struct u0_engine_desc_t                                        
        {                                                              
            // WDK 10                                                  
            //                                                         
            _m01 uint32_t node_index;                                    //{ +0x0000    } | .NodeIndex
                                                                       
            SDK_NONVOL_PROPERTIES( "_DXGK_POWER_COMPONENT_MAPPING.EngineDesc.$", 0x0, false, 0x89b6eaaf8c6a8e6 );                                
            SDK_FIXED_SIZE( u0_engine_desc_t, 0x4 );                                
        };                                                             
                                                                       
        struct u1_monitor_refresh_desc_t                               
        {                                                              
            // WDK 10                                                  
            //                                                         
            _m03 uint32_t vid_pn_source_id;                              //{ +0x0000    } | .VidPnSourceID
                                                                       
            SDK_NONVOL_PROPERTIES( "_DXGK_POWER_COMPONENT_MAPPING.MonitorRefreshDesc.$", 0x0, false, 0x2b9091bbbc245800 );                                      
            SDK_FIXED_SIZE( u1_monitor_refresh_desc_t, 0x4 );                                      
        };                                                             
                                                                       
        struct u2_monitor_desc_t                                       
        {                                                              
            // WDK 10                                                  
            //                                                         
            _m05 uint32_t vid_pn_target_id;                              //{ +0x0000    } | .VidPnTargetID
                                                                       
            SDK_NONVOL_PROPERTIES( "_DXGK_POWER_COMPONENT_MAPPING.MonitorDesc.$", 0x0, false, 0x9d9b276fca4a88e4 );                                      
            SDK_FIXED_SIZE( u2_monitor_desc_t, 0x4 );                                      
        };                                                             
                                                                       
        struct u3_memory_desc_t                                        
        {                                                              
            // WDK 10                                                  
            //                                                         
            _m07 uint32_t segment_id;                                    //{ +0x0000    } | .SegmentID
                                                                       
            SDK_NONVOL_PROPERTIES( "_DXGK_POWER_COMPONENT_MAPPING.MemoryDesc.$", 0x0, false, 0xa337547b392370eb );                                
            SDK_FIXED_SIZE( u3_memory_desc_t, 0x4 );                                
        };                                                             
                                                                       
        struct u4_shared_desc_t                                        
        {                                                              
            // WDK 10                                                  
            //                                                         
            _m09 uint16_t shared_type_flag;                              //{ +0x0000    } | .SharedTypeFlag
            _m10 uint16_t driver_custom_value_set;                       //{ +0x0002    } | .DriverCustomValueSet
            _m11 uint32_t shared_type;                                   //{ +0x0000    } | .SharedType
                                                                       
            SDK_NONVOL_PROPERTIES( "_DXGK_POWER_COMPONENT_MAPPING.SharedDesc.$", 0x0, false, 0x10854497efa7c065 );                                             
            SDK_FIXED_SIZE( u4_shared_desc_t, 0x4 );                                             
        };                                                             
                                                                       
        // WDK 10                                                      
        //                                                             
        _m00 enum dxgk::power_component_type_t    component_type;        //{ +0x0000    } | .ComponentType
        _m02 u0_engine_desc_t                     engine_desc;           //{ +0x0004    } | .EngineDesc
        _m04 u1_monitor_refresh_desc_t            monitor_refresh_desc;  //{ +0x0004    } | .MonitorRefreshDesc
        _m06 u2_monitor_desc_t                    monitor_desc;          //{ +0x0004    } | .MonitorDesc
        _m08 u3_memory_desc_t                     memory_desc;           //{ +0x0004    } | .MemoryDesc
        _m12 u4_shared_desc_t                     shared_desc;           //{ +0x0004    } | .SharedDesc
                                                                       
        SDK_NONVOL_PROPERTIES( "_DXGK_POWER_COMPONENT_MAPPING.$", 0x0, false, 0x5e368b28566c44d );                     
        SDK_FIXED_SIZE( power_component_mapping_t, 0x8 );                     
    };                                                                 
};
#include "magic/power_component_mapping_t.end.hpp"
SDK_VERIFY( struct dxgk::power_component_mapping_t::u0_engine_desc_t, 0x4 );
SDK_VERIFY( struct dxgk::power_component_mapping_t::u1_monitor_refresh_desc_t, 0x4 );
SDK_VERIFY( struct dxgk::power_component_mapping_t::u2_monitor_desc_t, 0x4 );
SDK_VERIFY( struct dxgk::power_component_mapping_t::u3_memory_desc_t, 0x4 );
SDK_VERIFY( struct dxgk::power_component_mapping_t::u4_shared_desc_t, 0x4 );
SDK_VERIFY( struct dxgk::power_component_mapping_t, 0x8 );
