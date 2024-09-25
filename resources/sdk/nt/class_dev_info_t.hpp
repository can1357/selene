#pragma once
#include <sdkgen/support_library.hpp>
#include "class_wmi_info_t.hpp"

#include "magic/class_dev_info_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct device_object_t;
    struct scsi_request_block_t;
    struct device_capabilities_t;

    // [struct _CLASS_DEV_INFO]
    // => WDK 10 (NV)
    //
    struct class_dev_info_t                                                 
    {                                                                       
        using pclass_error_t =                  sdk::function<void(struct nt::device_object_t*, struct nt::scsi_request_block_t*, int32_t*, uint8_t*)>*;                              
        using class_read_write_verification_t = sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*;                              
        using class_device_control_t =          sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*;                              
        using class_shutdown_flush_t =          sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*;                              
        using class_create_close_t =            sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*;                              
        using class_init_device_t =             sdk::function<int32_t(struct nt::device_object_t*)>*;                              
        using class_start_device_t =            sdk::function<int32_t(struct nt::device_object_t*)>*;                              
        using class_power_device_t =            sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*;                              
        using class_stop_device_t =             sdk::function<int32_t(struct nt::device_object_t*, uint8_t)>*;                              
        using class_remove_device_t =           sdk::function<int32_t(struct nt::device_object_t*, uint8_t)>*;                              
        using pclass_query_pnp_capabilities_t = sdk::function<int32_t(struct nt::device_object_t*, struct nt::device_capabilities_t*)>*;                              
                                                                            
        // WDK 10                                                           
        //                                                                  
        _m00 uint32_t                         device_extension_size;          //{ +0x0000    } | .DeviceExtensionSize
        _m01 uint32_t                         device_type;                    //{ +0x0004    } | .DeviceType
        _m02 uint8_t                          stack_size;                     //{ +0x0008    } | .StackSize
        _m03 uint32_t                         device_characteristics;         //{ +0x000c    } | .DeviceCharacteristics
        _m04 pclass_error_t                   class_error;                    //{ +0x0010    } | .ClassError
        _m05 class_read_write_verification_t  class_read_write_verification;  //{ +0x0018    } | .ClassReadWriteVerification
        _m06 class_device_control_t           class_device_control;           //{ +0x0020    } | .ClassDeviceControl
        _m07 class_shutdown_flush_t           class_shutdown_flush;           //{ +0x0028    } | .ClassShutdownFlush
        _m08 class_create_close_t             class_create_close;             //{ +0x0030    } | .ClassCreateClose
        _m09 class_init_device_t              class_init_device;              //{ +0x0038    } | .ClassInitDevice
        _m10 class_start_device_t             class_start_device;             //{ +0x0040    } | .ClassStartDevice
        _m11 class_power_device_t             class_power_device;             //{ +0x0048    } | .ClassPowerDevice
        _m12 class_stop_device_t              class_stop_device;              //{ +0x0050    } | .ClassStopDevice
        _m13 class_remove_device_t            class_remove_device;            //{ +0x0058    } | .ClassRemoveDevice
        _m14 pclass_query_pnp_capabilities_t  class_query_pnp_capabilities;   //{ +0x0060    } | .ClassQueryPnpCapabilities
        _m15 struct nt::class_wmi_info_t      class_wmi_info;                 //{ +0x0068    } | .ClassWmiInfo
                                                                            
        SDK_NONVOL_PROPERTIES( "_CLASS_DEV_INFO.$", 0x0, false, 0x2b5310819c22905c );                              
        SDK_FIXED_SIZE( class_dev_info_t, 0xa8 );                              
    };                                                                      
};
#include "magic/class_dev_info_t.end.hpp"
SDK_VERIFY( struct nt::class_dev_info_t, 0xa8 );
