#pragma once
#include <sdkgen/support_library.hpp>
#include "cx_callback_type_t.hpp"
#include "../wdf/power_device_state_t.hpp"

namespace wdf { struct wdfcmreslist_t; }
namespace wdf { struct wdfdevice_t;    }

#include "magic/cx_pnp_power_callback_context_t.start.hpp"
namespace fx
{
    // [class FxCxPnpPowerCallbackContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cx_pnp_power_callback_context_t                                                                        
    {                                                                                                            
        struct u0_prepare_hardware_t                                                                             
        {                                                                                                        
            using pre_callback_t =                                         sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*;                                                
            using post_callback_t =                                        sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*;                                                
            using pfn_wdfcx_device_pre_prepare_hardware_failed_cleanup_t = sdk::function<void(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*;                                                
            using cleanup_callback_t =                                     pfn_wdfcx_device_pre_prepare_hardware_failed_cleanup_t ;                                                
                                                                                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
            //                                                                                                   
            _m02 pre_callback_t      pre_callback;                                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m03 post_callback_t     post_callback;                                                                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PostCallback
            _m04 cleanup_callback_t  cleanup_callback;                                                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CleanupCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.PrepareHardware.$", 0x18, true, 0x284e7457753be008 );                                                
            SDK_FIXED_SIZE( u0_prepare_hardware_t, 0x18 );                                                       
        };                                                                                                       
                                                                                                                 
        struct u4_release_hardware_t                                                                             
        {                                                                                                        
            using pre_callback_t =  sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*;                                             
            using post_callback_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*;                                             
                                                                                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
            //                                                                                                   
            _m06 pre_callback_t   pre_callback;                                                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m07 post_callback_t  post_callback;                                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PostCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.ReleaseHardware.$", 0x10, true, 0xcf4b53a65a9b953d );                                             
            SDK_FIXED_SIZE( u4_release_hardware_t, 0x10 );                                                       
        };                                                                                                       
                                                                                                                 
        struct u8_d0_entry_t                                                                                     
        {                                                                                                        
            using pre_callback_t =                                 sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                
            using post_callback_t =                                sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                
            using pfn_wdfcx_device_pre_d0_entry_failed_cleanup_t = sdk::function<void(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                
                                                                                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
            //                                                                                                   
            _m09 pre_callback_t                                  pre_callback;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m10 post_callback_t                                 post_callback;                                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PostCallback
            _m11 pfn_wdfcx_device_pre_d0_entry_failed_cleanup_t  cleanup_callback;                                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CleanupCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.D0Entry.$", 0x18, true, 0x37c9929b390ab799 );                                                
            SDK_FIXED_SIZE( u8_d0_entry_t, 0x18 );                                                               
        };                                                                                                       
                                                                                                                 
        struct u12_d0_exit_t                                                                                     
        {                                                                                                        
            using pre_callback_t =  sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                             
            using post_callback_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                             
                                                                                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
            //                                                                                                   
            _m13 pre_callback_t   pre_callback;                                                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m14 post_callback_t  post_callback;                                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PostCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.D0Exit.$", 0x10, true, 0xb6377cff6b5be638 );                                             
            SDK_FIXED_SIZE( u12_d0_exit_t, 0x10 );                                                               
        };                                                                                                       
                                                                                                                 
        struct u16_sm_io_init_t                                                                                  
        {                                                                                                        
            using pre_callback_t =  sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                
            using post_callback_t = sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                
                                                                                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
            //                                                                                                   
            _m16 pre_callback_t                                 pre_callback;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m17 post_callback_t                                post_callback;                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PostCallback
            _m18 sdk::function<void(struct wdf::wdfdevice_t*)>* cleanup_callback;                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CleanupCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.SmIoInit.$", 0x18, true, 0x93e1fe1913b8d3bd );                                                
            SDK_FIXED_SIZE( u16_sm_io_init_t, 0x18 );                                                            
        };                                                                                                       
                                                                                                                 
        struct u20_sm_io_restart_t                                                                               
        {                                                                                                        
            using pre_callback_t =  sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                
            using post_callback_t = sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                
                                                                                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
            //                                                                                                   
            _m20 pre_callback_t                                 pre_callback;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m21 post_callback_t                                post_callback;                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PostCallback
            _m22 sdk::function<void(struct wdf::wdfdevice_t*)>* cleanup_callback;                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CleanupCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.SmIoRestart.$", 0x18, true, 0xb97bb9a5b51163bf );                                                
            SDK_FIXED_SIZE( u20_sm_io_restart_t, 0x18 );                                                         
        };                                                                                                       
                                                                                                                 
        struct u24_sm_io_suspend_t                                                                               
        {                                                                                                        
            using pre_callback_t =  sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                             
            using post_callback_t = sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                             
                                                                                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
            //                                                                                                   
            _m24 pre_callback_t   pre_callback;                                                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m25 post_callback_t  post_callback;                                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PostCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.SmIoSuspend.$", 0x10, true, 0x13400ac24d342219 );                                             
            SDK_FIXED_SIZE( u24_sm_io_suspend_t, 0x10 );                                                         
        };                                                                                                       
                                                                                                                 
        struct u28_sm_io_flush_t                                                                                 
        {                                                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
            //                                                                                                   
            _m27 sdk::function<void(struct wdf::wdfdevice_t*)>* pre_callback;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m28 sdk::function<void(struct wdf::wdfdevice_t*)>* post_callback;                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PostCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.SmIoFlush.$", 0x10, true, 0xf056a150f895257c );                                             
            SDK_FIXED_SIZE( u28_sm_io_flush_t, 0x10 );                                                           
        };                                                                                                       
                                                                                                                 
        struct u32_sm_io_cleanup_t                                                                               
        {                                                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
            //                                                                                                   
            _m30 sdk::function<void(struct wdf::wdfdevice_t*)>* pre_callback;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m31 sdk::function<void(struct wdf::wdfdevice_t*)>* post_callback;                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PostCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.SmIoCleanup.$", 0x10, true, 0x4cf7359ff43e5bb5 );                                             
            SDK_FIXED_SIZE( u32_sm_io_cleanup_t, 0x10 );                                                         
        };                                                                                                       
                                                                                                                 
        struct u36_surprise_removal_t                                                                            
        {                                                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
            //                                                                                                   
            _m33 sdk::function<void(struct wdf::wdfdevice_t*)>* pre_callback;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m34 sdk::function<void(struct wdf::wdfdevice_t*)>* post_callback;                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PostCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.SurpriseRemoval.$", 0x10, true, 0xd17e4b515a076f75 );                                             
            SDK_FIXED_SIZE( u36_surprise_removal_t, 0x10 );                                                      
        };                                                                                                       
                                                                                                                 
        struct u40_generic_t                                                                                     
        {                                                                                                        
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                   
            _m36 void* pre_callback;                                                                               //{ +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m37 void* post_callback;                                                                              //{ +0x0008    +0x0008    +0x0008    } | .PostCallback
            _m38 void* cleanup_callback;                                                                           //{ +0x0010    +0x0010    +0x0010    } | .CleanupCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.Generic.$", 0x18, true, 0xf582188fcd9202ac );                                                
            SDK_FIXED_SIZE( u40_generic_t, 0x18 );                                                               
        };                                                                                                       
                                                                                                                 
        struct u43_sm_io_restart_ex_t                                                                            
        {                                                                                                        
            using pre_callback_t =     sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                
            using post_callback_t =    sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                
            using cleanup_callback_t = sdk::function<void(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                
                                                                                                                 
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                   
            _m40 pre_callback_t      pre_callback;                                                                 //{ +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m41 post_callback_t     post_callback;                                                                //{ +0x0008    +0x0008    +0x0008    } | .PostCallback
            _m42 cleanup_callback_t  cleanup_callback;                                                             //{ +0x0010    +0x0010    +0x0010    } | .CleanupCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.SmIoRestartEx.$", 0x18, true, 0xd7faec2e75f12178 );                                                
            SDK_FIXED_SIZE( u43_sm_io_restart_ex_t, 0x18 );                                                      
        };                                                                                                       
                                                                                                                 
        struct u46_sm_io_suspend_ex_t                                                                            
        {                                                                                                        
            using pre_callback_t =  sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                             
            using post_callback_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                             
                                                                                                                 
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                   
            _m44 pre_callback_t   pre_callback;                                                                    //{ +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m45 post_callback_t  post_callback;                                                                   //{ +0x0008    +0x0008    +0x0008    } | .PostCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.SmIoSuspendEx.$", 0x10, true, 0xc75e44209e8b6a52 );                                             
            SDK_FIXED_SIZE( u46_sm_io_suspend_ex_t, 0x10 );                                                      
        };                                                                                                       
                                                                                                                 
        struct u49_arm_wake_from_s0_t                                                                            
        {                                                                                                        
            using pre_callback_t =  sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                
            using post_callback_t = sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                
                                                                                                                 
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                   
            _m47 pre_callback_t                                 pre_callback;                                      //{ +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m48 post_callback_t                                post_callback;                                     //{ +0x0008    +0x0008    +0x0008    } | .PostCallback
            _m49 sdk::function<void(struct wdf::wdfdevice_t*)>* cleanup_callback;                                  //{ +0x0010    +0x0010    +0x0010    } | .CleanupCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.ArmWakeFromS0.$", 0x18, true, 0xa12b2fb273d4fd34 );                                                
            SDK_FIXED_SIZE( u49_arm_wake_from_s0_t, 0x18 );                                                      
        };                                                                                                       
                                                                                                                 
        struct u52_disarm_wake_from_s0_t                                                                         
        {                                                                                                        
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                   
            _m51 sdk::function<void(struct wdf::wdfdevice_t*)>* pre_callback;                                      //{ +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m52 sdk::function<void(struct wdf::wdfdevice_t*)>* post_callback;                                     //{ +0x0008    +0x0008    +0x0008    } | .PostCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.DisarmWakeFromS0.$", 0x10, true, 0xba1e27d5e8e70c43 );                                             
            SDK_FIXED_SIZE( u52_disarm_wake_from_s0_t, 0x10 );                                                   
        };                                                                                                       
                                                                                                                 
        struct u55_wake_from_s0_triggered_t                                                                      
        {                                                                                                        
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                   
            _m54 sdk::function<void(struct wdf::wdfdevice_t*)>* pre_callback;                                      //{ +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m55 sdk::function<void(struct wdf::wdfdevice_t*)>* post_callback;                                     //{ +0x0008    +0x0008    +0x0008    } | .PostCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.WakeFromS0Triggered.$", 0x10, true, 0x78e694a74bde2d50 );                                             
            SDK_FIXED_SIZE( u55_wake_from_s0_triggered_t, 0x10 );                                                
        };                                                                                                       
                                                                                                                 
        struct u58_arm_wake_from_sx_t                                                                            
        {                                                                                                        
            using pre_callback_t =  sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                
            using post_callback_t = sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                
                                                                                                                 
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                   
            _m57 pre_callback_t                                 pre_callback;                                      //{ +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m58 post_callback_t                                post_callback;                                     //{ +0x0008    +0x0008    +0x0008    } | .PostCallback
            _m59 sdk::function<void(struct wdf::wdfdevice_t*)>* cleanup_callback;                                  //{ +0x0010    +0x0010    +0x0010    } | .CleanupCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.ArmWakeFromSx.$", 0x18, true, 0x9aac3bfb4121ef41 );                                                
            SDK_FIXED_SIZE( u58_arm_wake_from_sx_t, 0x18 );                                                      
        };                                                                                                       
                                                                                                                 
        struct u61_arm_wake_from_sx_with_reason_t                                                                
        {                                                                                                        
            using pre_callback_t =                                                     sdk::function<int32_t(struct wdf::wdfdevice_t*, uint8_t, uint8_t)>*;                                                
            using post_callback_t =                                                    sdk::function<int32_t(struct wdf::wdfdevice_t*, uint8_t, uint8_t)>*;                                                
            using pfn_wdfcx_device_pre_arm_wake_from_sx_with_reason_failed_cleanup_t = sdk::function<void(struct wdf::wdfdevice_t*, uint8_t, uint8_t)>*;                                                
            using cleanup_callback_t =                                                 pfn_wdfcx_device_pre_arm_wake_from_sx_with_reason_failed_cleanup_t ;                                                
                                                                                                                 
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                   
            _m61 pre_callback_t      pre_callback;                                                                 //{ +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m62 post_callback_t     post_callback;                                                                //{ +0x0008    +0x0008    +0x0008    } | .PostCallback
            _m63 cleanup_callback_t  cleanup_callback;                                                             //{ +0x0010    +0x0010    +0x0010    } | .CleanupCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.ArmWakeFromSxWithReason.$", 0x18, true, 0x49e7e468c7f3d3b8 );                                                
            SDK_FIXED_SIZE( u61_arm_wake_from_sx_with_reason_t, 0x18 );                                                
        };                                                                                                       
                                                                                                                 
        struct u64_disarm_wake_from_sx_t                                                                         
        {                                                                                                        
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                   
            _m65 sdk::function<void(struct wdf::wdfdevice_t*)>* pre_callback;                                      //{ +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m66 sdk::function<void(struct wdf::wdfdevice_t*)>* post_callback;                                     //{ +0x0008    +0x0008    +0x0008    } | .PostCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.DisarmWakeFromSx.$", 0x10, true, 0xf933eedf5c19c6d1 );                                             
            SDK_FIXED_SIZE( u64_disarm_wake_from_sx_t, 0x10 );                                                   
        };                                                                                                       
                                                                                                                 
        struct u67_wake_from_sx_triggered_t                                                                      
        {                                                                                                        
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                   
            _m68 sdk::function<void(struct wdf::wdfdevice_t*)>* pre_callback;                                      //{ +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m69 sdk::function<void(struct wdf::wdfdevice_t*)>* post_callback;                                     //{ +0x0008    +0x0008    +0x0008    } | .PostCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.WakeFromSxTriggered.$", 0x10, true, 0xaa250a10f7d3fd6e );                                             
            SDK_FIXED_SIZE( u67_wake_from_sx_triggered_t, 0x10 );                                                
        };                                                                                                       
                                                                                                                 
        struct u70_d0_entry_post_hardware_enabled_t                                                              
        {                                                                                                        
            using pre_callback_t =     sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                
            using post_callback_t =    sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                
            using cleanup_callback_t = sdk::function<void(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                
                                                                                                                 
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                   
            _m71 pre_callback_t      pre_callback;                                                                 //{ +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m72 post_callback_t     post_callback;                                                                //{ +0x0008    +0x0008    +0x0008    } | .PostCallback
            _m73 cleanup_callback_t  cleanup_callback;                                                             //{ +0x0010    +0x0010    +0x0010    } | .CleanupCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.D0EntryPostHardwareEnabled.$", 0x18, true, 0x9765895d0269d04a );                                                
            SDK_FIXED_SIZE( u70_d0_entry_post_hardware_enabled_t, 0x18 );                                                
        };                                                                                                       
                                                                                                                 
        struct u73_d0_exit_pre_hardware_disabled_t                                                               
        {                                                                                                        
            using pre_callback_t =  sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                             
            using post_callback_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                             
                                                                                                                 
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                                   
            _m75 pre_callback_t   pre_callback;                                                                    //{ +0x0000    +0x0000    +0x0000    } | .PreCallback
            _m76 post_callback_t  post_callback;                                                                   //{ +0x0008    +0x0008    +0x0008    } | .PostCallback
                                                                                                                 
            SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.D0ExitPreHardwareDisabled.$", 0x10, true, 0x3d727abdea747287 );                                             
            SDK_FIXED_SIZE( u73_d0_exit_pre_hardware_disabled_t, 0x10 );                                             
        };                                                                                                       
                                                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                                       
        _m00 enum fx::cx_callback_type_t                                          m_callback_type;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_CallbackType
        _m01 uint8_t                                                              m_pre_callback_successful;       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .m_PreCallbackSuccessful
        _m05 u0_prepare_hardware_t                                                prepare_hardware;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PrepareHardware
        _m08 u4_release_hardware_t                                                release_hardware;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReleaseHardware
        _m12 u8_d0_entry_t                                                        d0_entry;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .D0Entry
        _m15 u12_d0_exit_t                                                        d0_exit;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .D0Exit
        _m19 u16_sm_io_init_t                                                     sm_io_init;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SmIoInit
        _m23 u20_sm_io_restart_t                                                  sm_io_restart;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SmIoRestart
        _m26 u24_sm_io_suspend_t                                                  sm_io_suspend;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SmIoSuspend
        _m29 u28_sm_io_flush_t                                                    sm_io_flush;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SmIoFlush
        _m32 u32_sm_io_cleanup_t                                                  sm_io_cleanup;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SmIoCleanup
        _m35 u36_surprise_removal_t                                               surprise_removal;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SurpriseRemoval
                                                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
        //                                                                                                       
        _m39 u40_generic_t                                                        generic;                         //{ +0x0008    +0x0008    +0x0008    } | .Generic
        _m43 u43_sm_io_restart_ex_t                                               sm_io_restart_ex;                //{ +0x0008    +0x0008    +0x0008    } | .SmIoRestartEx
        _m46 u46_sm_io_suspend_ex_t                                               sm_io_suspend_ex;                //{ +0x0008    +0x0008    +0x0008    } | .SmIoSuspendEx
        _m50 u49_arm_wake_from_s0_t                                               arm_wake_from_s0;                //{ +0x0008    +0x0008    +0x0008    } | .ArmWakeFromS0
        _m53 u52_disarm_wake_from_s0_t                                            disarm_wake_from_s0;             //{ +0x0008    +0x0008    +0x0008    } | .DisarmWakeFromS0
        _m56 u55_wake_from_s0_triggered_t                                         wake_from_s0_triggered;          //{ +0x0008    +0x0008    +0x0008    } | .WakeFromS0Triggered
        _m60 u58_arm_wake_from_sx_t                                               arm_wake_from_sx;                //{ +0x0008    +0x0008    +0x0008    } | .ArmWakeFromSx
        _m64 u61_arm_wake_from_sx_with_reason_t                                   arm_wake_from_sx_with_reason;    //{ +0x0008    +0x0008    +0x0008    } | .ArmWakeFromSxWithReason
        _m67 u64_disarm_wake_from_sx_t                                            disarm_wake_from_sx;             //{ +0x0008    +0x0008    +0x0008    } | .DisarmWakeFromSx
        _m70 u67_wake_from_sx_triggered_t                                         wake_from_sx_triggered;          //{ +0x0008    +0x0008    +0x0008    } | .WakeFromSxTriggered
        _m74 u70_d0_entry_post_hardware_enabled_t                                 d0_entry_post_hardware_enabled;  //{ +0x0008    +0x0008    +0x0008    } | .D0EntryPostHardwareEnabled
        _m77 u73_d0_exit_pre_hardware_disabled_t                                  d0_exit_pre_hardware_disabled;   //{ +0x0008    +0x0008    +0x0008    } | .D0ExitPreHardwareDisabled
                                                                                                                 
        SDK_MAGIC_PROPERTIES( "FxCxPnpPowerCallbackContext.$", 0x20, true, 0x2d90c8e03a9f9d44 );                               
        SDK_FIXED_SIZE( cx_pnp_power_callback_context_t, 0x20 );                                                 
    };                                                                                                           
};
#include "magic/cx_pnp_power_callback_context_t.end.hpp"
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u0_prepare_hardware_t, 0x18 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u4_release_hardware_t, 0x10 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u8_d0_entry_t, 0x18 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u12_d0_exit_t, 0x10 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u16_sm_io_init_t, 0x18 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u20_sm_io_restart_t, 0x18 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u24_sm_io_suspend_t, 0x10 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u28_sm_io_flush_t, 0x10 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u32_sm_io_cleanup_t, 0x10 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u36_surprise_removal_t, 0x10 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u40_generic_t, 0x18 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u43_sm_io_restart_ex_t, 0x18 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u46_sm_io_suspend_ex_t, 0x10 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u49_arm_wake_from_s0_t, 0x18 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u52_disarm_wake_from_s0_t, 0x10 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u55_wake_from_s0_triggered_t, 0x10 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u58_arm_wake_from_sx_t, 0x18 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u61_arm_wake_from_sx_with_reason_t, 0x18 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u64_disarm_wake_from_sx_t, 0x10 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u67_wake_from_sx_triggered_t, 0x10 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u70_d0_entry_post_hardware_enabled_t, 0x18 );
SDK_VERIFY( struct fx::cx_pnp_power_callback_context_t::u73_d0_exit_pre_hardware_disabled_t, 0x10 );
SDK_VERIFY( class fx::cx_pnp_power_callback_context_t, 0x20 );
