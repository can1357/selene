#pragma once
#include <sdkgen/support_library.hpp>
#include "notification_flags_t.hpp"

#include "magic/notification_descriptor_t.start.hpp"
namespace whea
{
    // [struct _WHEA_NOTIFICATION_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct notification_descriptor_t                                  
    {                                                                 
        struct u0_polled_t                                            
        {                                                             
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                                        
            _m03 uint32_t poll_interval;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PollInterval
                                                                      
            SDK_NONVOL_PROPERTIES( "_WHEA_NOTIFICATION_DESCRIPTOR.Polled.$", 0x4, true, 0xf69e1c4859de91fb );                              
            SDK_FIXED_SIZE( u0_polled_t, 0x4 );                              
        };                                                            
                                                                      
        struct u5_interrupt_t                                         
        {                                                             
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                        
            _m05 uint32_t poll_interval;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PollInterval
            _m06 uint32_t vector;                                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Vector
            _m07 uint32_t switch_to_polling_threshold;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SwitchToPollingThreshold
            _m08 uint32_t switch_to_polling_window;                     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SwitchToPollingWindow
            _m09 uint32_t error_threshold;                              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorThreshold
            _m10 uint32_t error_threshold_window;                       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ErrorThresholdWindow
                                                                      
            SDK_NONVOL_PROPERTIES( "_WHEA_NOTIFICATION_DESCRIPTOR.Interrupt.$", 0x18, true, 0x85e8126363521d0f );                                            
            SDK_FIXED_SIZE( u5_interrupt_t, 0x18 );                                            
        };                                                            
                                                                      
        struct u10_local_interrupt_t                                  
        {                                                             
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                        
            _m12 uint32_t poll_interval;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PollInterval
            _m13 uint32_t vector;                                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Vector
            _m14 uint32_t switch_to_polling_threshold;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SwitchToPollingThreshold
            _m15 uint32_t switch_to_polling_window;                     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SwitchToPollingWindow
            _m16 uint32_t error_threshold;                              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorThreshold
            _m17 uint32_t error_threshold_window;                       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ErrorThresholdWindow
                                                                      
            SDK_NONVOL_PROPERTIES( "_WHEA_NOTIFICATION_DESCRIPTOR.LocalInterrupt.$", 0x18, true, 0xa3698f4d7f8c18e4 );                                            
            SDK_FIXED_SIZE( u10_local_interrupt_t, 0x18 );                                            
        };                                                            
                                                                      
        struct u11_sci_t                                              
        {                                                             
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                        
            _m19 uint32_t poll_interval;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PollInterval
            _m20 uint32_t vector;                                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Vector
            _m21 uint32_t switch_to_polling_threshold;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SwitchToPollingThreshold
            _m22 uint32_t switch_to_polling_window;                     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SwitchToPollingWindow
            _m23 uint32_t error_threshold;                              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorThreshold
            _m24 uint32_t error_threshold_window;                       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ErrorThresholdWindow
                                                                      
            SDK_NONVOL_PROPERTIES( "_WHEA_NOTIFICATION_DESCRIPTOR.Sci.$", 0x18, true, 0x2c604d754b058562 );                                            
            SDK_FIXED_SIZE( u11_sci_t, 0x18 );                                            
        };                                                            
                                                                      
        struct u12_nmi_t                                              
        {                                                             
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                        
            _m26 uint32_t poll_interval;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PollInterval
            _m27 uint32_t vector;                                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Vector
            _m28 uint32_t switch_to_polling_threshold;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SwitchToPollingThreshold
            _m29 uint32_t switch_to_polling_window;                     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SwitchToPollingWindow
            _m30 uint32_t error_threshold;                              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorThreshold
            _m31 uint32_t error_threshold_window;                       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ErrorThresholdWindow
                                                                      
            SDK_NONVOL_PROPERTIES( "_WHEA_NOTIFICATION_DESCRIPTOR.Nmi.$", 0x18, true, 0xac8cb4f31db17587 );                                            
            SDK_FIXED_SIZE( u12_nmi_t, 0x18 );                                            
        };                                                            
                                                                      
        struct u13_sea_t                                              
        {                                                             
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                        
            _m33 uint32_t poll_interval;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PollInterval
            _m34 uint32_t vector;                                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Vector
            _m35 uint32_t switch_to_polling_threshold;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SwitchToPollingThreshold
            _m36 uint32_t switch_to_polling_window;                     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SwitchToPollingWindow
            _m37 uint32_t error_threshold;                              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorThreshold
            _m38 uint32_t error_threshold_window;                       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ErrorThresholdWindow
                                                                      
            SDK_NONVOL_PROPERTIES( "_WHEA_NOTIFICATION_DESCRIPTOR.Sea.$", 0x18, true, 0xbf1354d707a86af7 );                                            
            SDK_FIXED_SIZE( u13_sea_t, 0x18 );                                            
        };                                                            
                                                                      
        struct u14_sei_t                                              
        {                                                             
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                        
            _m40 uint32_t poll_interval;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PollInterval
            _m41 uint32_t vector;                                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Vector
            _m42 uint32_t switch_to_polling_threshold;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SwitchToPollingThreshold
            _m43 uint32_t switch_to_polling_window;                     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SwitchToPollingWindow
            _m44 uint32_t error_threshold;                              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorThreshold
            _m45 uint32_t error_threshold_window;                       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ErrorThresholdWindow
                                                                      
            SDK_NONVOL_PROPERTIES( "_WHEA_NOTIFICATION_DESCRIPTOR.Sei.$", 0x18, true, 0x5b1950a4486d8be8 );                                            
            SDK_FIXED_SIZE( u14_sei_t, 0x18 );                                            
        };                                                            
                                                                      
        struct u15_gsiv_t                                             
        {                                                             
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                        
            _m47 uint32_t poll_interval;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PollInterval
            _m48 uint32_t vector;                                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Vector
            _m49 uint32_t switch_to_polling_threshold;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SwitchToPollingThreshold
            _m50 uint32_t switch_to_polling_window;                     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SwitchToPollingWindow
            _m51 uint32_t error_threshold;                              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorThreshold
            _m52 uint32_t error_threshold_window;                       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ErrorThresholdWindow
                                                                      
            SDK_NONVOL_PROPERTIES( "_WHEA_NOTIFICATION_DESCRIPTOR.Gsiv.$", 0x18, true, 0x7f5eb505ade2ce74 );                                            
            SDK_FIXED_SIZE( u15_gsiv_t, 0x18 );                                            
        };                                                            
                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                            
        _m00 uint8_t                                  type;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t                                  length;           //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Length
        _m02 union whea::notification_flags_t         flags;            //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m04 u0_polled_t                              polled;           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Polled
        _m11 u5_interrupt_t                           interrupt;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Interrupt
        _m18 u10_local_interrupt_t                    local_interrupt;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .LocalInterrupt
        _m25 u11_sci_t                                sci;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Sci
        _m32 u12_nmi_t                                nmi;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Nmi
        _m39 u13_sea_t                                sea;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Sea
        _m46 u14_sei_t                                sei;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Sei
        _m53 u15_gsiv_t                               gsiv;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Gsiv
                                                                      
        SDK_NONVOL_PROPERTIES( "_WHEA_NOTIFICATION_DESCRIPTOR.$", 0x1c, true, 0x7c82f19bc6d3a456 );                
        SDK_FIXED_SIZE( notification_descriptor_t, 0x1c );                
    };                                                                
};
#include "magic/notification_descriptor_t.end.hpp"
SDK_VERIFY( struct whea::notification_descriptor_t::u0_polled_t, 0x4 );
SDK_VERIFY( struct whea::notification_descriptor_t::u5_interrupt_t, 0x18 );
SDK_VERIFY( struct whea::notification_descriptor_t::u10_local_interrupt_t, 0x18 );
SDK_VERIFY( struct whea::notification_descriptor_t::u11_sci_t, 0x18 );
SDK_VERIFY( struct whea::notification_descriptor_t::u12_nmi_t, 0x18 );
SDK_VERIFY( struct whea::notification_descriptor_t::u13_sea_t, 0x18 );
SDK_VERIFY( struct whea::notification_descriptor_t::u14_sei_t, 0x18 );
SDK_VERIFY( struct whea::notification_descriptor_t::u15_gsiv_t, 0x18 );
SDK_VERIFY( struct whea::notification_descriptor_t, 0x1c );
