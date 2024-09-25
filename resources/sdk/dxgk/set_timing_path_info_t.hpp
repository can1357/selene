#pragma once
#include <sdkgen/support_library.hpp>
#include "connection_change_t.hpp"
#include "../d3d/ddi/color_space_type_t.hpp"
#include "../d3dk/mdt/wire_format_and_preference_t.hpp"
#include "../d3d/ddi/output_wire_color_space_type_t.hpp"

#include "magic/set_timing_path_info_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SET_TIMING_PATH_INFO]
    // => WDK 10 (NV)
    //
    struct set_timing_path_info_t                                                  
    {                                                                              
        struct u0_input_t                                                          
        {                                                                          
            // WDK 10                                                              
            //                                                                     
            _m04 uint2_t vid_pn_path_updates;                                        //{ +0x0000@0  } | .VidPnPathUpdates
            _m05 uint1_t active;                                                     //{ +0x0000@2  } | .Active
            _m06 uint1_t ignore_connectivity;                                        //{ +0x0000@3  } | .IgnoreConnectivity
            _m07 uint1_t preserve_inherited;                                         //{ +0x0000@4  } | .PreserveInherited
            _m08 uint3_t sync_lock_group;                                            //{ +0x0000@5  } | .SyncLockGroup
            _m09 uint4_t sync_lock_style;                                            //{ +0x0000@8  } | .SyncLockStyle
                                                                                   
            SDK_NONVOL_PROPERTIES( "_DXGK_SET_TIMING_PATH_INFO.Input.$", 0x0, false, 0xb3fcb3836cf549aa );                                            
            SDK_FIXED_SIZE( u0_input_t, 0x4 );                                            
        };                                                                         
                                                                                   
        struct u1_output_t                                                         
        {                                                                          
            // WDK 10                                                              
            //                                                                     
            _m12 uint1_t recheck_mpo;                                                //{ +0x0000@0  } | .RecheckMPO
                                                                                   
            SDK_NONVOL_PROPERTIES( "_DXGK_SET_TIMING_PATH_INFO.Output.$", 0x0, false, 0x899936405cf5731e );                                    
            SDK_FIXED_SIZE( u1_output_t, 0x4 );                                    
        };                                                                         
                                                                                   
        // WDK 10                                                                  
        //                                                                         
        _m00 uint32_t                                      vid_pn_target_id;         //{ +0x0000    } | .VidPnTargetId
        _m01 enum d3d::ddi::color_space_type_t             output_color_space;       //{ +0x0004    } | .OutputColorSpace
        _m02 enum d3d::ddi::output_wire_color_space_type_t output_wire_color_space;  //{ +0x0004    } | .OutputWireColorSpace
        _m03 union d3dk::mdt::wire_format_and_preference_t selected_wire_format;     //{ +0x0008    } | .SelectedWireFormat
        _m10 u0_input_t                                    input;                    //{ +0x000c    } | .Input
        _m11 uint32_t                                      input_flags;              //{ +0x000c    } | .InputFlags
        _m13 u1_output_t                                   output;                   //{ +0x0010    } | .Output
        _m14 uint32_t                                      output_flags;             //{ +0x0010    } | .OutputFlags
        _m15 struct dxgk::connection_change_t              target_state;             //{ +0x0018    } | .TargetState
        _m16 uint8_t                                       glitch_cause;             //{ +0x0030    } | .GlitchCause
        _m17 uint8_t                                       glitch_effect;            //{ +0x0031    } | .GlitchEffect
        _m18 uint8_t                                       glitch_duration;          //{ +0x0032    } | .GlitchDuration
        _m19 uint32_t                                      diagnostic_info;          //{ +0x0030    } | .DiagnosticInfo
                                                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_SET_TIMING_PATH_INFO.$", 0x0, false, 0x53d8b808768af534 );                        
        SDK_FIXED_SIZE( set_timing_path_info_t, 0x38 );                            
    };                                                                             
};
#include "magic/set_timing_path_info_t.end.hpp"
SDK_VERIFY( struct dxgk::set_timing_path_info_t::u0_input_t, 0x4 );
SDK_VERIFY( struct dxgk::set_timing_path_info_t::u1_output_t, 0x4 );
SDK_VERIFY( struct dxgk::set_timing_path_info_t, 0x38 );
