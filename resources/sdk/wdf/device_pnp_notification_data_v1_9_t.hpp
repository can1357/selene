#pragma once
#include <sdkgen/support_library.hpp>
#include "device_pnp_state_t.hpp"
#include "state_notification_type_t.hpp"

#include "magic/device_pnp_notification_data_v1_9_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9]
    // => Windows 10 v1607
    //
    struct device_pnp_notification_data_v1_9_t                                          
    {                                                                                   
        union u0_data_t                                                                 
        {                                                                               
            struct u1_enter_state_t                                                     
            {                                                                           
                // Windows 10 v1607                                                     
                //                                                                      
                _m01 enum wdf::device_pnp_state_t current_state;                          //{ +0x0000    } | .CurrentState
                _m02 enum wdf::device_pnp_state_t new_state;                              //{ +0x0004    } | .NewState
                                                                                        
                SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.Data.EnterState.$", 0x0, false, 0x3e9574d55b639973 );                                      
                SDK_FIXED_SIZE( u1_enter_state_t, 0x8 );                                      
            };                                                                          
                                                                                        
            struct u2_post_process_state_t                                              
            {                                                                           
                // Windows 10 v1607                                                     
                //                                                                      
                _m04 enum wdf::device_pnp_state_t current_state;                          //{ +0x0000    } | .CurrentState
                                                                                        
                SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.Data.PostProcessState.$", 0x0, false, 0xf0a87b0b38511233 );                                      
                SDK_FIXED_SIZE( u2_post_process_state_t, 0x4 );                                      
            };                                                                          
                                                                                        
            struct u3_leave_state_t                                                     
            {                                                                           
                // Windows 10 v1607                                                     
                //                                                                      
                _m06 enum wdf::device_pnp_state_t current_state;                          //{ +0x0000    } | .CurrentState
                _m07 enum wdf::device_pnp_state_t new_state;                              //{ +0x0004    } | .NewState
                                                                                        
                SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.Data.LeaveState.$", 0x0, false, 0x89f4c3b22d53a5b8 );                                      
                SDK_FIXED_SIZE( u3_leave_state_t, 0x8 );                                      
            };                                                                          
                                                                                        
            // Windows 10 v1607                                                         
            //                                                                          
            _m03 u1_enter_state_t                               enter_state;              //{ +0x0000    } | .EnterState
            _m05 u2_post_process_state_t                        post_process_state;       //{ +0x0000    } | .PostProcessState
            _m08 u3_leave_state_t                               leave_state;              //{ +0x0000    } | .LeaveState
                                                                                        
            SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.Data.$", 0x0, false, 0x2a1780d333ea6001 );                        
            SDK_FIXED_SIZE( u0_data_t, 0x8 );                                           
        };                                                                              
                                                                                        
        // Windows 10 v1607                                                             
        //                                                                              
        _m00 enum wdf::state_notification_type_t                                   type;  //{ +0x0000    } | .Type
        _m09 u0_data_t                                                             data;  //{ +0x0004    } | .Data
                                                                                        
        SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9.$", 0x0, false, 0x6ac97d097112e3e6 );     
        SDK_FIXED_SIZE( device_pnp_notification_data_v1_9_t, 0xc );                     
    };                                                                                  
};
#include "magic/device_pnp_notification_data_v1_9_t.end.hpp"
SDK_VERIFY( struct wdf::device_pnp_notification_data_v1_9_t::u0_data_t::u1_enter_state_t, 0x8 );
SDK_VERIFY( struct wdf::device_pnp_notification_data_v1_9_t::u0_data_t::u2_post_process_state_t, 0x4 );
SDK_VERIFY( struct wdf::device_pnp_notification_data_v1_9_t::u0_data_t::u3_leave_state_t, 0x8 );
SDK_VERIFY( union wdf::device_pnp_notification_data_v1_9_t::u0_data_t, 0x8 );
SDK_VERIFY( struct wdf::device_pnp_notification_data_v1_9_t, 0xc );
