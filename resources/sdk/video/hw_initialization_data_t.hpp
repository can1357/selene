#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/hw_dma_return_t.hpp"
#include "../nt/interface_type_t.hpp"

namespace dma { struct parameters_t;      }
namespace nt  { struct query_interface_t; }

#include "magic/hw_initialization_data_t.start.hpp"
namespace video
{
    struct access_range_t;
    struct request_packet_t;
    struct child_enum_info_t;
    struct port_config_info_t;
    struct power_management_t;

    // [struct _VIDEO_HW_INITIALIZATION_DATA]
    // => WDK 10 (NV)
    //
    struct hw_initialization_data_t                                                           
    {                                                                                         
        enum class u0_hw_get_video_child_descriptor_t : int32_t                               
        {                                                                                     
            monitor =          0x1,                                                             // WDK 10
            non_primary_chip = 0x2,                                                             // WDK 10
            video_chip =       0x3,                                                             // WDK 10
            other =            0x4,                                                             // WDK 10
        };                                                                                    
                                                                                              
        using pvideo_hw_find_adapter_t =         sdk::function<int32_t(void*, void*, wchar_t*, struct video::port_config_info_t*, uint8_t*)>*;                               
        using pvideo_hw_start_io_t =             sdk::function<uint8_t(void*, struct video::request_packet_t*)>*;                               
        using pvideo_hw_reset_hw_t =             sdk::function<uint8_t(void*, uint32_t, uint32_t)>*;                               
        using pvideo_hw_start_dma_t =            sdk::function<enum nt::hw_dma_return_t(void*, struct dma::parameters_t*)>*;                               
        using hw_set_power_state_t =             sdk::function<int32_t(void*, uint32_t, struct video::power_management_t*)>*;                               
        using hw_get_power_state_t =             sdk::function<int32_t(void*, uint32_t, struct video::power_management_t*)>*;                               
        using pvideo_hw_get_child_descriptor_t = sdk::function<int32_t(void*, struct video::child_enum_info_t*, enum *, uint8_t*, uint32_t*, uint32_t*)>*;                               
        using pvideo_hw_query_interface_t =      sdk::function<int32_t(void*, struct nt::query_interface_t*)>*;                               
        using pvideo_hw_legacyresources_t =      sdk::function<void(uint32_t, uint32_t, struct video::access_range_t**, uint32_t*)>*;                               
                                                                                              
        // WDK 10                                                                             
        //                                                                                    
        _m00 uint32_t                                          hw_init_data_size;               //{ +0x0000    } | .HwInitDataSize
        _m01 enum nt::interface_type_t                         adapter_interface_type;          //{ +0x0004    } | .AdapterInterfaceType
        _m02 pvideo_hw_find_adapter_t                          hw_find_adapter;                 //{ +0x0008    } | .HwFindAdapter
        _m03 sdk::function<uint8_t(void*)>*                    hw_initialize;                   //{ +0x0010    } | .HwInitialize
        _m04 sdk::function<uint8_t(void*)>*                    hw_interrupt;                    //{ +0x0018    } | .HwInterrupt
        _m05 pvideo_hw_start_io_t                              hw_start_io;                     //{ +0x0020    } | .HwStartIO
        _m06 uint32_t                                          hw_device_extension_size;        //{ +0x0028    } | .HwDeviceExtensionSize
        _m07 uint32_t                                          starting_device_number;          //{ +0x002c    } | .StartingDeviceNumber
        _m08 pvideo_hw_reset_hw_t                              hw_reset_hw;                     //{ +0x0030    } | .HwResetHw
        _m09 sdk::function<void(void*)>*                       hw_timer;                        //{ +0x0038    } | .HwTimer
        _m10 pvideo_hw_start_dma_t                             hw_start_dma;                    //{ +0x0040    } | .HwStartDma
        _m11 hw_set_power_state_t                              hw_set_power_state;              //{ +0x0048    } | .HwSetPowerState
        _m12 hw_get_power_state_t                              hw_get_power_state;              //{ +0x0050    } | .HwGetPowerState
        _m13 pvideo_hw_get_child_descriptor_t                  hw_get_video_child_descriptor;   //{ +0x0058    } | .HwGetVideoChildDescriptor
        _m14 pvideo_hw_query_interface_t                       hw_query_interface;              //{ +0x0060    } | .HwQueryInterface
        _m15 uint32_t                                          hw_child_device_extension_size;  //{ +0x0068    } | .HwChildDeviceExtensionSize
        _m16 struct video::access_range_t*                     hw_legacy_resource_list;         //{ +0x0070    } | .HwLegacyResourceList
        _m17 uint32_t                                          hw_legacy_resource_count;        //{ +0x0078    } | .HwLegacyResourceCount
        _m18 pvideo_hw_legacyresources_t                       hw_get_legacy_resources;         //{ +0x0080    } | .HwGetLegacyResources
        _m19 uint8_t                                           allow_early_enumeration;         //{ +0x0088    } | .AllowEarlyEnumeration
                                                                                              
        SDK_NONVOL_PROPERTIES( "_VIDEO_HW_INITIALIZATION_DATA.$", 0x0, false, 0x71627ac5c6a16473 );                               
        SDK_FIXED_SIZE( hw_initialization_data_t, 0x90 );                                     
    };                                                                                        
};
#include "magic/hw_initialization_data_t.end.hpp"
SDK_VERIFY( struct video::hw_initialization_data_t, 0x90 );
