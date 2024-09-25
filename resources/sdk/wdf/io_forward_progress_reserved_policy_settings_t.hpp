#pragma once
#include <sdkgen/support_library.hpp>
#include "io_forward_progress_action_t.hpp"

namespace nt { struct irp_t; }

#include "magic/io_forward_progress_reserved_policy_settings_t.start.hpp"
namespace wdf
{
    struct wdfqueue_t;

    // [struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct io_forward_progress_reserved_policy_settings_t                                                                 
    {                                                                                                                     
        union u0_policy_t                                                                                                 
        {                                                                                                                 
            struct u5_examine_policy_t                                                                                    
            {                                                                                                             
                using pfn_wdf_io_wdm_irp_for_forward_progress_t = sdk::function<enum wdf::io_forward_progress_action_t(struct wdf::wdfqueue_t*, struct nt::irp_t*)>*;                                                          
                                                                                                                          
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                          
                //                                                                                                        
                _m00 pfn_wdf_io_wdm_irp_for_forward_progress_t  evt_io_wdm_irp_for_forward_progress;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EvtIoWdmIrpForForwardProgress
                                                                                                                          
                SDK_NONVOL_PROPERTIES( "_WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS.Policy.ExaminePolicy.$", 0x8, true, 0xfb2830fa72c2171e );                                                          
                SDK_FIXED_SIZE( u5_examine_policy_t, 0x8 );                                                               
            };                                                                                                            
                                                                                                                          
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
            //                                                                                                            
            _m01 u5_examine_policy_t                                                                examine_policy;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ExaminePolicy
                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS.Policy.$", 0x8, true, 0x631faee4242cfd5a );                      
            SDK_FIXED_SIZE( u0_policy_t, 0x8 );                                                                           
        };                                                                                                                
                                                                                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                                                
        _m02 u0_policy_t                                                                                           policy;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Policy
                                                                                                                          
        SDK_NONVOL_PROPERTIES( "_WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS.$", 0x8, true, 0xc51b625b4590c003 );       
        SDK_FIXED_SIZE( io_forward_progress_reserved_policy_settings_t, 0x8 );                                            
    };                                                                                                                    
};
#include "magic/io_forward_progress_reserved_policy_settings_t.end.hpp"
SDK_VERIFY( struct wdf::io_forward_progress_reserved_policy_settings_t::u0_policy_t::u5_examine_policy_t, 0x8 );
SDK_VERIFY( union wdf::io_forward_progress_reserved_policy_settings_t::u0_policy_t, 0x8 );
SDK_VERIFY( struct wdf::io_forward_progress_reserved_policy_settings_t, 0x8 );
