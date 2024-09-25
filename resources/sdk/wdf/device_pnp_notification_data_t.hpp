#pragma once
#include <sdkgen/support_library.hpp>
#include "device_pnp_state_t.hpp"
#include "state_notification_type_t.hpp"

#include "magic/device_pnp_notification_data_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DEVICE_PNP_NOTIFICATION_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_pnp_notification_data_t                                               
    {                                                                                   
        union u0_data_t                                                                 
        {                                                                               
            struct u5_enter_state_t                                                     
            {                                                                           
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
                //                                                                      
                _m01 enum wdf::device_pnp_state_t current_state;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentState
                _m02 enum wdf::device_pnp_state_t new_state;                              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NewState
                                                                                        
                SDK_NONVOL_PROPERTIES( "_WDF_DEVICE_PNP_NOTIFICATION_DATA.Data.EnterState.$", 0x8, true, 0x6d4084c9e3337edc );                                      
                SDK_FIXED_SIZE( u5_enter_state_t, 0x8 );                                      
            };                                                                          
                                                                                        
            struct u10_post_process_state_t                                             
            {                                                                           
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
                //                                                                      
                _m04 enum wdf::device_pnp_state_t current_state;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentState
                                                                                        
                SDK_NONVOL_PROPERTIES( "_WDF_DEVICE_PNP_NOTIFICATION_DATA.Data.PostProcessState.$", 0x4, true, 0x1e83baa2ea0a6af6 );                                      
                SDK_FIXED_SIZE( u10_post_process_state_t, 0x4 );                                      
            };                                                                          
                                                                                        
            struct u15_leave_state_t                                                    
            {                                                                           
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
                //                                                                      
                _m06 enum wdf::device_pnp_state_t current_state;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentState
                _m07 enum wdf::device_pnp_state_t new_state;                              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NewState
                                                                                        
                SDK_NONVOL_PROPERTIES( "_WDF_DEVICE_PNP_NOTIFICATION_DATA.Data.LeaveState.$", 0x8, true, 0x335c3e5beb74a633 );                                      
                SDK_FIXED_SIZE( u15_leave_state_t, 0x8 );                                      
            };                                                                          
                                                                                        
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
            //                                                                          
            _m03 u5_enter_state_t                               enter_state;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EnterState
            _m05 u10_post_process_state_t                       post_process_state;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PostProcessState
            _m08 u15_leave_state_t                              leave_state;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LeaveState
                                                                                        
            SDK_NONVOL_PROPERTIES( "_WDF_DEVICE_PNP_NOTIFICATION_DATA.Data.$", 0x8, true, 0xe9fb6bd3561197f4 );                        
            SDK_FIXED_SIZE( u0_data_t, 0x8 );                                           
        };                                                                              
                                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                                                              
        _m00 enum wdf::state_notification_type_t                                   type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m09 u0_data_t                                                             data;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Data
                                                                                        
        SDK_NONVOL_PROPERTIES( "_WDF_DEVICE_PNP_NOTIFICATION_DATA.$", 0xc, true, 0xa0365fb64e1d6dcc );     
        SDK_FIXED_SIZE( device_pnp_notification_data_t, 0xc );                          
    };                                                                                  
};
#include "magic/device_pnp_notification_data_t.end.hpp"
SDK_VERIFY( struct wdf::device_pnp_notification_data_t::u0_data_t::u5_enter_state_t, 0x8 );
SDK_VERIFY( struct wdf::device_pnp_notification_data_t::u0_data_t::u10_post_process_state_t, 0x4 );
SDK_VERIFY( struct wdf::device_pnp_notification_data_t::u0_data_t::u15_leave_state_t, 0x8 );
SDK_VERIFY( union wdf::device_pnp_notification_data_t::u0_data_t, 0x8 );
SDK_VERIFY( struct wdf::device_pnp_notification_data_t, 0xc );
