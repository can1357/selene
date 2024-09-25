#pragma once
#include <sdkgen/support_library.hpp>
#include "class_vpd_b0_data_t.hpp"
#include "class_vpd_b1_data_t.hpp"
#include "class_vpd_b2_data_t.hpp"
#include "class_read_capacity16_data_t.hpp"
#include "class_vpd_ecop_block_device_rod_limits_t.hpp"

#include "magic/class_function_support_info_t.start.hpp"
namespace nt
{
    struct storage_hw_firmware_info_t;

    // [struct _CLASS_FUNCTION_SUPPORT_INFO]
    // => WDK 10 (NV)
    //
    struct class_function_support_info_t                                                                                          
    {                                                                                                                             
        struct u0_valid_inquiry_pages_t                                                                                           
        {                                                                                                                         
            // WDK 10                                                                                                             
            //                                                                                                                    
            _m03 uint1_t block_limits;                                                                                              //{ +0x0000@0  } | .BlockLimits
            _m04 uint1_t block_device_characteristics;                                                                              //{ +0x0000@1  } | .BlockDeviceCharacteristics
            _m05 uint1_t lb_provisioning;                                                                                           //{ +0x0000@2  } | .LBProvisioning
            _m06 uint1_t block_device_rod_limits;                                                                                   //{ +0x0000@3  } | .BlockDeviceRODLimits
            _m07 uint1_t zoned_block_device_characteristics;                                                                        //{ +0x0000@4  } | .ZonedBlockDeviceCharacteristics
            _m08 uint5_t device_type;                                                                                               //{ +0x0000@27 } | .DeviceType
                                                                                                                                  
            SDK_NONVOL_PROPERTIES( "_CLASS_FUNCTION_SUPPORT_INFO.ValidInquiryPages.$", 0x0, false, 0x4256557984cbb955 );                                                                            
            SDK_FIXED_SIZE( u0_valid_inquiry_pages_t, 0x4 );                                                                            
        };                                                                                                                        
                                                                                                                                  
        struct u1_lower_layer_support_t                                                                                           
        {                                                                                                                         
            enum class u2_seek_penalty_property_t : int32_t                                                                       
            {                                                                                                                     
                support_unknown = 0x0,                                                                                              // WDK 10
                supported =       0x1,                                                                                              // WDK 10
                not_supported =   0x2,                                                                                              // WDK 10
            };                                                                                                                    
                                                                                                                                  
            enum class u3_access_alignment_property_t : int32_t                                                                   
            {                                                                                                                     
                support_unknown = 0x0,                                                                                              // WDK 10
                supported =       0x1,                                                                                              // WDK 10
                not_supported =   0x2,                                                                                              // WDK 10
            };                                                                                                                    
                                                                                                                                  
            enum class u3_trim_property_t : int32_t                                                                               
            {                                                                                                                     
                support_unknown = 0x0,                                                                                              // WDK 10
                supported =       0x1,                                                                                              // WDK 10
                not_supported =   0x2,                                                                                              // WDK 10
            };                                                                                                                    
                                                                                                                                  
            enum class u3_trim_process_t : int32_t                                                                                
            {                                                                                                                     
                support_unknown = 0x0,                                                                                              // WDK 10
                supported =       0x1,                                                                                              // WDK 10
                not_supported =   0x2,                                                                                              // WDK 10
            };                                                                                                                    
                                                                                                                                  
            // WDK 10                                                                                                             
            //                                                                                                                    
            _m10 u2_seek_penalty_property_t                    seek_penalty_property;                                               //{ +0x0000    } | .SeekPenaltyProperty
            _m11 u2_seek_penalty_property_t                    access_alignment_property;                                           //{ +0x0004    } | .AccessAlignmentProperty
            _m12 u2_seek_penalty_property_t                    trim_property;                                                       //{ +0x0008    } | .TrimProperty
            _m13 u2_seek_penalty_property_t                    trim_process;                                                        //{ +0x000c    } | .TrimProcess
                                                                                                                                  
            SDK_NONVOL_PROPERTIES( "_CLASS_FUNCTION_SUPPORT_INFO.LowerLayerSupport.$", 0x0, false, 0xd5791096e479e1f5 );                                                                   
            SDK_FIXED_SIZE( u1_lower_layer_support_t, 0x10 );                                                                     
        };                                                                                                                        
                                                                                                                                  
        struct u3_idle_power_t                                                                                                    
        {                                                                                                                         
            // WDK 10                                                                                                             
            //                                                                                                                    
            _m23 uint1_t  d3_cold_supported;                                                                                        //{ +0x0000@0  } | .D3ColdSupported
            _m24 uint1_t  device_wakeable;                                                                                          //{ +0x0000@1  } | .DeviceWakeable
            _m25 uint1_t  idle_power_enabled;                                                                                       //{ +0x0000@2  } | .IdlePowerEnabled
            _m26 uint1_t  d3_idle_timeout_overridden;                                                                               //{ +0x0000@3  } | .D3IdleTimeoutOverridden
            _m27 uint1_t  no_verify_during_idle_power;                                                                              //{ +0x0000@4  } | .NoVerifyDuringIdlePower
            _m28 uint32_t d3_idle_timeout;                                                                                          //{ +0x0004    } | .D3IdleTimeout
                                                                                                                                  
            SDK_NONVOL_PROPERTIES( "_CLASS_FUNCTION_SUPPORT_INFO.IdlePower.$", 0x0, false, 0xf81177fca0ddaefe );                                                                     
            SDK_FIXED_SIZE( u3_idle_power_t, 0x8 );                                                                               
        };                                                                                                                        
                                                                                                                                  
        enum class u4_hw_firmware_get_info_support_t : int32_t                                                                    
        {                                                                                                                         
            support_unknown = 0x0,                                                                                                  // WDK 10
            supported =       0x1,                                                                                                  // WDK 10
            not_supported =   0x2,                                                                                                  // WDK 10
        };                                                                                                                        
                                                                                                                                  
        using block_device_rod_limits_data_t = struct nt::class_vpd_ecop_block_device_rod_limits_t;                                         
                                                                                                                                  
        // WDK 10                                                                                                                 
        //                                                                                                                        
        _m00 uint64_t                                                                    sync_lock;                                 //{ +0x0000    } | .SyncLock
        _m01 uint32_t                                                                    generation_count;                          //{ +0x0008    } | .GenerationCount
        _m02 volatile uint32_t                                                           change_request_count;                      //{ +0x000c    } | .ChangeRequestCount
        _m09 u0_valid_inquiry_pages_t                                                    valid_inquiry_pages;                       //{ +0x0010    } | .ValidInquiryPages
        _m14 u1_lower_layer_support_t                                                    lower_layer_support;                       //{ +0x0014    } | .LowerLayerSupport
        _m15 uint8_t                                                                     reg_access_alignment_query_not_supported;  //{ +0x0024    } | .RegAccessAlignmentQueryNotSupported
        _m16 uint8_t                                                                     asynchronous_notification_supported;       //{ +0x0025    } | .AsynchronousNotificationSupported
        _m17 uint8_t                                                                     use_mode_sense10;                          //{ +0x0026    } | .UseModeSense10
        _m18 struct nt::class_vpd_b0_data_t                                              block_limits_data;                         //{ +0x0028    } | .BlockLimitsData
        _m19 struct nt::class_vpd_b1_data_t                                              device_characteristics_data;               //{ +0x0048    } | .DeviceCharacteristicsData
        _m20 struct nt::class_vpd_b2_data_t                                              lb_provisioning_data;                      //{ +0x0058    } | .LBProvisioningData
        _m21 struct nt::class_read_capacity16_data_t                                     read_capacity16_data;                      //{ +0x0064    } | .ReadCapacity16Data
        _m22 block_device_rod_limits_data_t                                              block_device_rod_limits_data;              //{ +0x0080    } | .BlockDeviceRODLimitsData
        _m29 u3_idle_power_t                                                             idle_power;                                //{ +0x00a0    } | .IdlePower
        _m30 u2_seek_penalty_property_t                                                  hw_firmware_get_info_support;              //{ +0x00a8    } | .HwFirmwareGetInfoSupport
        _m31 struct nt::storage_hw_firmware_info_t*                                      hw_firmware_info;                          //{ +0x00b0    } | .HwFirmwareInfo
                                                                                                                                  
        SDK_NONVOL_PROPERTIES( "_CLASS_FUNCTION_SUPPORT_INFO.$", 0x0, false, 0xb97adff534d342a7 );                                         
        SDK_FIXED_SIZE( class_function_support_info_t, 0xb8 );                                                                    
    };                                                                                                                            
};
#include "magic/class_function_support_info_t.end.hpp"
SDK_VERIFY( struct nt::class_function_support_info_t::u0_valid_inquiry_pages_t, 0x4 );
SDK_VERIFY( struct nt::class_function_support_info_t::u1_lower_layer_support_t, 0x10 );
SDK_VERIFY( struct nt::class_function_support_info_t::u3_idle_power_t, 0x8 );
SDK_VERIFY( struct nt::class_function_support_info_t, 0xb8 );
