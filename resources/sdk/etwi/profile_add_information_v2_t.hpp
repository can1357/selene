#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/profile_add_information_v2_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_PROFILE_ADD_INFORMATION_V2]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct profile_add_information_v2_t              
    {                                                
        struct u0_intel_t                            
        {                                            
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                       
            _m00 uint8_t perf_evt_event_select;        //{ +0x0000    +0x0000    +0x0000    } | .PerfEvtEventSelect
            _m01 uint8_t perf_evt_unit_select;         //{ +0x0001    +0x0001    +0x0001    } | .PerfEvtUnitSelect
            _m02 uint8_t perf_evt_c_mask;              //{ +0x0002    +0x0002    +0x0002    } | .PerfEvtCMask
            _m03 uint8_t perf_evt_c_inv;               //{ +0x0003    +0x0003    +0x0003    } | .PerfEvtCInv
            _m04 uint8_t perf_evt_any_thread;          //{ +0x0004    +0x0004    +0x0004    } | .PerfEvtAnyThread
            _m05 uint8_t perf_evt_edge_detect;         //{ +0x0005    +0x0005    +0x0005    } | .PerfEvtEdgeDetect
                                                     
            SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Intel.$", 0x6, true, 0xf55121cce9e4698a );                            
            SDK_FIXED_SIZE( u0_intel_t, 0x6 );                            
        };                                           
                                                     
        struct u3_amd_t                              
        {                                            
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                       
            _m07 uint8_t perf_evt_event_select;        //{ +0x0000    +0x0000    +0x0000    } | .PerfEvtEventSelect
            _m08 uint8_t perf_evt_unit_select;         //{ +0x0001    +0x0001    +0x0001    } | .PerfEvtUnitSelect
                                                     
            SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Amd.$", 0x2, true, 0xda21ea34ece6ca02 );                            
            SDK_FIXED_SIZE( u3_amd_t, 0x2 );                            
        };                                           
                                                     
        struct u6_arm_t                              
        {                                            
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
            //                                       
            _m10 uint32_t perf_evt_type;               //{ +0x0000    +0x0000    +0x0000    } | .PerfEvtType
            _m11 uint8_t  allows_halt;                 //{ +0x0004    +0x0004    +0x0004    } | .AllowsHalt
                                                     
            SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Arm.$", 0x8, true, 0xe80828a9cd263888 );                    
            SDK_FIXED_SIZE( u6_arm_t, 0x8 );                    
        };                                           
                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                           
        _m06 u0_intel_t                        intel;  //{ +0x0000    +0x0000    +0x0000    } | .Intel
        _m09 u3_amd_t                          amd;    //{ +0x0000    +0x0000    +0x0000    } | .Amd
        _m12 u6_arm_t                          arm;    //{ +0x0000    +0x0000    +0x0000    } | .Arm
                                                     
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.$", 0x8, true, 0x283246ca1233b200 );      
        SDK_FIXED_SIZE( profile_add_information_v2_t, 0x8 );      
    };                                               
};
#include "magic/profile_add_information_v2_t.end.hpp"
SDK_VERIFY( struct etwi::profile_add_information_v2_t::u0_intel_t, 0x6 );
SDK_VERIFY( struct etwi::profile_add_information_v2_t::u3_amd_t, 0x2 );
SDK_VERIFY( struct etwi::profile_add_information_v2_t::u6_arm_t, 0x8 );
SDK_VERIFY( struct etwi::profile_add_information_v2_t, 0x8 );
