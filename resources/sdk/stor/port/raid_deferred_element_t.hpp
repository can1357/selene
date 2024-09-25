#pragma once
#include <sdkgen/support_library.hpp>
#include "raid_address_t.hpp"
#include "stor_scsi_address_t.hpp"
#include "raid_deferred_type_t.hpp"
#include "raid_deferred_header_t.hpp"

namespace nt { struct scsi_request_block_t; }

#include "magic/raid_deferred_element_t.start.hpp"
namespace stor::port
{
    struct stor_timer_context_t;
    struct stor_async_notify_context_t;

    // [struct _RAID_DEFERRED_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_deferred_element_t                                                                    
    {                                                                                                 
        struct u0_timer_t                                                                             
        {                                                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                                                        
            _m03 sdk::function<void(void*)>* hw_timer_routine;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HwTimerRoutine
            _m04 uint32_t                    timeout;                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Timeout
                                                                                                      
            SDK_MAGIC_PROPERTIES( "_RAID_DEFERRED_ELEMENT.Timer.$", 0x10, true, 0x49b9c20a6e87e8b8 );                                    
            SDK_FIXED_SIZE( u0_timer_t, 0x10 );                                                       
        };                                                                                            
                                                                                                      
        struct u4_error_t                                                                             
        {                                                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
            //                                                                                        
            _m06 struct nt::scsi_request_block_t* srb;                                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Srb
            _m07 uint32_t                         error_code;                                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ErrorCode
            _m08 uint32_t                         unique_id;                                            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .UniqueId
            _m09 sdk::array<uint8_t, 16>          free_error_info;                                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FreeErrorInfo
                                                                                                      
            SDK_MAGIC_PROPERTIES( "_RAID_DEFERRED_ELEMENT.Error.$", 0x20, true, 0x37c6456439084dfb );                                   
            SDK_FIXED_SIZE( u4_error_t, 0x20 );                                                       
        };                                                                                            
                                                                                                      
        struct u8_pause_device_t                                                                      
        {                                                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                                                                        
            _m11 uint32_t timeout;                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Timeout
                                                                                                      
            SDK_MAGIC_PROPERTIES( "_RAID_DEFERRED_ELEMENT.PauseDevice.$", 0x4, true, 0x407809cede2a6dd2 );                           
            SDK_FIXED_SIZE( u8_pause_device_t, 0x4 );                                                 
        };                                                                                            
                                                                                                      
        struct u12_busy_t                                                                             
        {                                                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                                                        
            _m13 uint32_t requests_to_complete;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RequestsToComplete
                                                                                                      
            SDK_MAGIC_PROPERTIES( "_RAID_DEFERRED_ELEMENT.Busy.$", 0x4, true, 0xed44228eb77362b6 );                                        
            SDK_FIXED_SIZE( u12_busy_t, 0x4 );                                                        
        };                                                                                            
                                                                                                      
        struct u16_device_busy_t                                                                      
        {                                                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                                                        
            _m15 uint32_t requests_to_complete;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RequestsToComplete
                                                                                                      
            SDK_MAGIC_PROPERTIES( "_RAID_DEFERRED_ELEMENT.DeviceBusy.$", 0x4, true, 0xc21bbf1396282da );                                        
            SDK_FIXED_SIZE( u16_device_busy_t, 0x4 );                                                 
        };                                                                                            
                                                                                                      
        struct u16_additional_timer_t                                                                 
        {                                                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
            //                                                                                        
            _m17 struct stor::port::stor_timer_context_t* stor_timer;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StorTimer
            _m18 int64_t                                  timeout;                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Timeout
            _m19 uint32_t                                 tolerable_delay;                              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TolerableDelay
                                                                                                      
            SDK_MAGIC_PROPERTIES( "_RAID_DEFERRED_ELEMENT.AdditionalTimer.$", 0x18, true, 0x9bca27cb4af55660 );                                   
            SDK_FIXED_SIZE( u16_additional_timer_t, 0x18 );                                           
        };                                                                                            
                                                                                                      
        struct u20_async_notification_t                                                               
        {                                                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
            //                                                                                        
            _m21 struct stor::port::stor_async_notify_context_t* stor_async_notify;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StorAsyncNotify
                                                                                                      
            SDK_MAGIC_PROPERTIES( "_RAID_DEFERRED_ELEMENT.AsyncNotification.$", 0x8, true, 0x7741359d9cd32e01 );                                     
            SDK_FIXED_SIZE( u20_async_notification_t, 0x8 );                                          
        };                                                                                            
                                                                                                      
        using address_t = sdk::variant<struct stor::port::stor_scsi_address_t, union stor::port::raid_address_t>;                   
                                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                                            
        _m00 struct stor::port::raid_deferred_header_t                             header;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 enum stor::port::raid_deferred_type_t                                 type;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Type
        _m02 address_t                                                             address;             //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Address
        _m05 u0_timer_t                                                            timer;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Timer
        _m10 u4_error_t                                                            error;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Error
        _m12 u8_pause_device_t                                                     pause_device;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PauseDevice
        _m14 u12_busy_t                                                            busy;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Busy
        _m16 u12_busy_t                                                            device_busy;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DeviceBusy
        _m20 u16_additional_timer_t                                                additional_timer;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AdditionalTimer
        _m22 u20_async_notification_t                                              async_notification;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AsyncNotification
                                                                                                      
        SDK_MAGIC_PROPERTIES( "_RAID_DEFERRED_ELEMENT.$", 0x50, true, 0x4677f54d9ceb4b29 );                   
        SDK_FIXED_SIZE( raid_deferred_element_t, 0x50 );                                              
    };                                                                                                
};
#include "magic/raid_deferred_element_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_deferred_element_t::u0_timer_t, 0x10 );
SDK_VERIFY( struct stor::port::raid_deferred_element_t::u4_error_t, 0x20 );
SDK_VERIFY( struct stor::port::raid_deferred_element_t::u8_pause_device_t, 0x4 );
SDK_VERIFY( struct stor::port::raid_deferred_element_t::u12_busy_t, 0x4 );
SDK_VERIFY( struct stor::port::raid_deferred_element_t::u16_device_busy_t, 0x4 );
SDK_VERIFY( struct stor::port::raid_deferred_element_t::u16_additional_timer_t, 0x18 );
SDK_VERIFY( struct stor::port::raid_deferred_element_t::u20_async_notification_t, 0x8 );
SDK_VERIFY( struct stor::port::raid_deferred_element_t, 0x50 );
