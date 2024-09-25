#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "../pnp/veto_type_t.hpp"
#include "plugplay_event_category_t.hpp"

#include "magic/plugplay_event_block_t.start.hpp"
namespace nt
{
    // [struct _PLUGPLAY_EVENT_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct plugplay_event_block_t                                                               
    {                                                                                           
        struct u0_device_class_t                                                                
        {                                                                                       
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
            //                                                                                  
            _m06 struct nt::guid_t      class_guid;                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ClassGuid
            _m07 sdk::array<wchar_t, 1> symbolic_link_name;                                       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SymbolicLinkName
                                                                                                
            SDK_NONVOL_PROPERTIES( "_PLUGPLAY_EVENT_BLOCK.DeviceClass.$", 0x14, true, 0x12858e45544361c2 );                                                
            SDK_FIXED_SIZE( u0_device_class_t, 0x14 );                                                
        };                                                                                      
                                                                                                
        struct u5_target_device_t                                                               
        {                                                                                       
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                                                  
            _m09 sdk::array<wchar_t, 1> device_id;                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceId
                                                                                                
            // WDK 10                                                                           
            //                                                                                  
            _m10 sdk::array<wchar_t, 1> device_ids;                                               //{ +0x0000    } | .DeviceIds
                                                                                                
            SDK_NONVOL_PROPERTIES( "_PLUGPLAY_EVENT_BLOCK.TargetDevice.$", 0x2, true, 0xa36b7bd4075b1b50 );                                        
            SDK_FIXED_SIZE( u5_target_device_t, 0x2 );                                          
        };                                                                                      
                                                                                                
        struct u10_install_device_t                                                             
        {                                                                                       
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
            //                                                                                  
            _m12 sdk::array<wchar_t, 1> device_id;                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceId
                                                                                                
            SDK_NONVOL_PROPERTIES( "_PLUGPLAY_EVENT_BLOCK.InstallDevice.$", 0x2, true, 0xd78ea03f23162d4b );                                       
            SDK_FIXED_SIZE( u10_install_device_t, 0x2 );                                        
        };                                                                                      
                                                                                                
        struct u11_custom_notification_t                                                        
        {                                                                                       
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                  
            _m14 void*                  notification_structure;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NotificationStructure
                                                                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                  
            _m15 sdk::array<wchar_t, 1> device_id;                                                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceId
                                                                                                
            // WDK 10                                                                           
            //                                                                                  
            _m16 sdk::array<wchar_t, 1> device_ids;                                               //{ +0x0008    } | .DeviceIds
                                                                                                
            SDK_NONVOL_PROPERTIES( "_PLUGPLAY_EVENT_BLOCK.CustomNotification.$", 0x10, true, 0x6cf9a66d51fb9e53 );                                                    
            SDK_FIXED_SIZE( u11_custom_notification_t, 0x10 );                                                    
        };                                                                                      
                                                                                                
        struct u16_profile_notification_t                                                       
        {                                                                                       
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
            //                                                                                  
            _m18 void* notification;                                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Notification
                                                                                                
            SDK_NONVOL_PROPERTIES( "_PLUGPLAY_EVENT_BLOCK.ProfileNotification.$", 0x8, true, 0x18c353dd9a1322b1 );                                          
            SDK_FIXED_SIZE( u16_profile_notification_t, 0x8 );                                          
        };                                                                                      
                                                                                                
        struct u21_power_notification_t                                                         
        {                                                                                       
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
            //                                                                                  
            _m20 uint32_t notification_code;                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NotificationCode
            _m21 uint32_t notification_data;                                                      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NotificationData
                                                                                                
            SDK_NONVOL_PROPERTIES( "_PLUGPLAY_EVENT_BLOCK.PowerNotification.$", 0x8, true, 0xc1e54975f23a919c );                                               
            SDK_FIXED_SIZE( u21_power_notification_t, 0x8 );                                               
        };                                                                                      
                                                                                                
        struct u26_veto_notification_t                                                          
        {                                                                                       
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
            //                                                                                  
            _m23 enum pnp::veto_type_t  veto_type;                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VetoType
            _m24 sdk::array<wchar_t, 1> device_id_veto_name_buffer;                               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceIdVetoNameBuffer
                                                                                                
            SDK_NONVOL_PROPERTIES( "_PLUGPLAY_EVENT_BLOCK.VetoNotification.$", 0x8, true, 0x1d8fd748308cf3fa );                                                        
            SDK_FIXED_SIZE( u26_veto_notification_t, 0x8 );                                                        
        };                                                                                      
                                                                                                
        struct u31_blocked_driver_notification_t                                                
        {                                                                                       
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
            //                                                                                  
            _m26 struct nt::guid_t blocked_driver_guid;                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BlockedDriverGuid
                                                                                                
            SDK_NONVOL_PROPERTIES( "_PLUGPLAY_EVENT_BLOCK.BlockedDriverNotification.$", 0x10, true, 0x9775e25daf66734a );                                                 
            SDK_FIXED_SIZE( u31_blocked_driver_notification_t, 0x10 );                                                 
        };                                                                                      
                                                                                                
        struct u36_invalid_id_notification_t                                                    
        {                                                                                       
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
            //                                                                                  
            _m28 sdk::array<wchar_t, 1> parent_id;                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ParentId
                                                                                                
            SDK_NONVOL_PROPERTIES( "_PLUGPLAY_EVENT_BLOCK.InvalidIDNotification.$", 0x2, true, 0x8ceeb4f4de26e6d6 );                                       
            SDK_FIXED_SIZE( u36_invalid_id_notification_t, 0x2 );                                       
        };                                                                                      
                                                                                                
        struct u41_power_setting_notification_t                                                 
        {                                                                                       
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
            //                                                                                  
            _m30 struct nt::guid_t      power_setting_guid;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PowerSettingGuid
            _m31 uint32_t               flags;                                                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
            _m32 uint32_t               session_id;                                               //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SessionId
            _m33 uint32_t               data_length;                                              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DataLength
            _m34 sdk::array<uint8_t, 1> data;                                                     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Data
                                                                                                
            SDK_MAGIC_PROPERTIES( "_PLUGPLAY_EVENT_BLOCK.PowerSettingNotification.$", 0x20, true, 0xde08aa2cf6e753e1 );                                                
            SDK_FIXED_SIZE( u41_power_setting_notification_t, 0x20 );                                                
        };                                                                                      
                                                                                                
        struct u45_property_change_notification_t                                               
        {                                                                                       
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
            //                                                                                  
            _m36 sdk::array<wchar_t, 1> device_id;                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceId
                                                                                                
            SDK_MAGIC_PROPERTIES( "_PLUGPLAY_EVENT_BLOCK.PropertyChangeNotification.$", 0x2, true, 0x247fe306ede2d54f );                                       
            SDK_FIXED_SIZE( u45_property_change_notification_t, 0x2 );                                       
        };                                                                                      
                                                                                                
        struct u45_device_instance_notification_t                                               
        {                                                                                       
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
            //                                                                                  
            _m38 sdk::array<wchar_t, 1> device_id;                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceId
                                                                                                
            SDK_MAGIC_PROPERTIES( "_PLUGPLAY_EVENT_BLOCK.DeviceInstanceNotification.$", 0x2, true, 0xa2c54fb15f0bb9f8 );                                       
            SDK_FIXED_SIZE( u45_device_instance_notification_t, 0x2 );                                       
        };                                                                                      
                                                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                                      
        _m00 struct nt::guid_t                                     event_guid;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EventGuid
        _m01 enum nt::plugplay_event_category_t                    event_category;                //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .EventCategory
        _m02 uint32_t*                                             result;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Result
        _m03 uint32_t                                              flags;                         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Flags
        _m04 uint32_t                                              total_size;                    //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .TotalSize
        _m05 void*                                                 device_object;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .DeviceObject
        _m08 u0_device_class_t                                     device_class;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .DeviceClass
        _m11 u5_target_device_t                                    target_device;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .TargetDevice
        _m13 u10_install_device_t                                  install_device;                //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .InstallDevice
        _m17 u11_custom_notification_t                             custom_notification;           //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .CustomNotification
        _m19 u16_profile_notification_t                            profile_notification;          //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ProfileNotification
        _m22 u21_power_notification_t                              power_notification;            //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .PowerNotification
        _m25 u26_veto_notification_t                               veto_notification;             //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .VetoNotification
        _m27 u31_blocked_driver_notification_t                     blocked_driver_notification;   //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .BlockedDriverNotification
        _m29 u36_invalid_id_notification_t                         invalid_id_notification;       //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .InvalidIDNotification
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                                      
        _m35 u41_power_setting_notification_t                      power_setting_notification;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PowerSettingNotification
        _m37 u5_target_device_t                                    property_change_notification;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PropertyChangeNotification
        _m39 u5_target_device_t                                    device_instance_notification;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DeviceInstanceNotification
                                                                                                
        SDK_NONVOL_PROPERTIES( "_PLUGPLAY_EVENT_BLOCK.$", 0x50, true, 0x84c6fecb05f9a01d );                             
        SDK_DYNAMIC_SIZE( plugplay_event_block_t );                                             
    };                                                                                          
};
#include "magic/plugplay_event_block_t.end.hpp"
SDK_VERIFY( struct nt::plugplay_event_block_t::u0_device_class_t, 0x14 );
SDK_VERIFY( struct nt::plugplay_event_block_t::u5_target_device_t, 0x2 );
SDK_VERIFY( struct nt::plugplay_event_block_t::u10_install_device_t, 0x2 );
SDK_VERIFY( struct nt::plugplay_event_block_t::u11_custom_notification_t, 0x10 );
SDK_VERIFY( struct nt::plugplay_event_block_t::u16_profile_notification_t, 0x8 );
SDK_VERIFY( struct nt::plugplay_event_block_t::u21_power_notification_t, 0x8 );
SDK_VERIFY( struct nt::plugplay_event_block_t::u26_veto_notification_t, 0x8 );
SDK_VERIFY( struct nt::plugplay_event_block_t::u31_blocked_driver_notification_t, 0x10 );
SDK_VERIFY( struct nt::plugplay_event_block_t::u36_invalid_id_notification_t, 0x2 );
SDK_VERIFY( struct nt::plugplay_event_block_t::u41_power_setting_notification_t, 0x20 );
SDK_VERIFY( struct nt::plugplay_event_block_t::u45_property_change_notification_t, 0x2 );
SDK_VERIFY( struct nt::plugplay_event_block_t::u45_device_instance_notification_t, 0x2 );
