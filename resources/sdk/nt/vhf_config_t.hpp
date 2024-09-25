#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

namespace hid { struct xfer_packet_t; }

#include "magic/vhf_config_t.start.hpp"
namespace nt
{
    struct device_object_t;

    // [struct _VHF_CONFIG]
    // => WDK 10 (NV)
    //
    struct vhf_config_t                                                           
    {                                                                             
        using pevt_vhf_async_operation_t = sdk::function<void(void*, void*, void*, struct hid::xfer_packet_t*)>*;                                         
        using pevt_vhf_async_operation_t = sdk::function<void(void*, void*, void*, struct hid::xfer_packet_t*)>*;                                         
        using pevt_vhf_async_operation_t = sdk::function<void(void*, void*, void*, struct hid::xfer_packet_t*)>*;                                         
        using pevt_vhf_async_operation_t = sdk::function<void(void*, void*, void*, struct hid::xfer_packet_t*)>*;                                         
                                                                                  
        // WDK 10                                                                 
        //                                                                        
        _m00 uint32_t                    size;                                      //{ +0x0000    } | .Size
        _m01 void*                       vhf_client_context;                        //{ +0x0008    } | .VhfClientContext
        _m02 uint32_t                    operation_context_size;                    //{ +0x0010    } | .OperationContextSize
        _m03 struct nt::device_object_t* device_object;                             //{ +0x0018    } | .DeviceObject
        _m04 uint16_t                    vendor_id;                                 //{ +0x0020    } | .VendorID
        _m05 uint16_t                    product_id;                                //{ +0x0022    } | .ProductID
        _m06 uint16_t                    version_number;                            //{ +0x0024    } | .VersionNumber
        _m07 struct nt::guid_t           container_id;                              //{ +0x0028    } | .ContainerID
        _m08 uint16_t                    instance_id_length;                        //{ +0x0038    } | .InstanceIDLength
        _m09 wchar_t*                    instance_id;                               //{ +0x0040    } | .InstanceID
        _m10 uint16_t                    report_descriptor_length;                  //{ +0x0048    } | .ReportDescriptorLength
        _m11 uint8_t*                    report_descriptor;                         //{ +0x0050    } | .ReportDescriptor
        _m12 sdk::function<void(void*)>* evt_vhf_ready_for_next_read_report;        //{ +0x0058    } | .EvtVhfReadyForNextReadReport
        _m13 pevt_vhf_async_operation_t  evt_vhf_async_operation_get_feature;       //{ +0x0060    } | .EvtVhfAsyncOperationGetFeature
        _m14 pevt_vhf_async_operation_t  evt_vhf_async_operation_set_feature;       //{ +0x0068    } | .EvtVhfAsyncOperationSetFeature
        _m15 pevt_vhf_async_operation_t  evt_vhf_async_operation_write_report;      //{ +0x0070    } | .EvtVhfAsyncOperationWriteReport
        _m16 pevt_vhf_async_operation_t  evt_vhf_async_operation_get_input_report;  //{ +0x0078    } | .EvtVhfAsyncOperationGetInputReport
        _m17 sdk::function<void(void*)>* evt_vhf_cleanup;                           //{ +0x0080    } | .EvtVhfCleanup
        _m18 uint16_t                    hardware_i_ds_length;                      //{ +0x0088    } | .HardwareIDsLength
        _m19 wchar_t*                    hardware_i_ds;                             //{ +0x0090    } | .HardwareIDs
                                                                                  
        SDK_NONVOL_PROPERTIES( "_VHF_CONFIG.$", 0x0, false, 0x84d0a6277c0f6937 );                                         
        SDK_FIXED_SIZE( vhf_config_t, 0x98 );                                         
    };                                                                            
};
#include "magic/vhf_config_t.end.hpp"
SDK_VERIFY( struct nt::vhf_config_t, 0x98 );
