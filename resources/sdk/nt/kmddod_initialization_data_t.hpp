#pragma once
#include <sdkgen/support_library.hpp>
#include "../dxgk/event_type_t.hpp"
#include "device_power_state_t.hpp"
#include "../kuser/d3dddiformat_t.hpp"
#include "../dxgk/interrupt_type_t.hpp"
#include "../dxgk/surprise_removal_type_t.hpp"

namespace dxgk      { struct child_container_id_t;           }
namespace dxgk      { struct child_descriptor_t;             }
namespace dxgk      { struct child_status_t;                 }
namespace dxgk      { struct device_descriptor_t;            }
namespace dxgk      { struct display_information_t;          }
namespace dxgk      { struct start_info_t;                   }
namespace dxgk::arg { struct collectdbginfo_t;               }
namespace dxgk::arg { struct commitvidpn_t;                  }
namespace dxgk::arg { struct enumvidpncofuncmodality_t;      }
namespace dxgk::arg { struct escape_t;                       }
namespace dxgk::arg { struct getscanline_t;                  }
namespace dxgk::arg { struct issupportedvidpn_t;             }
namespace dxgk::arg { struct present_displayonly_t;          }
namespace dxgk::arg { struct queryadapterinfo_t;             }
namespace dxgk::arg { struct queryvidpnhwcapability_t;       }
namespace dxgk::arg { struct recommendfunctionalvidpn_t;     }
namespace dxgk::arg { struct recommendmonitormodes_t;        }
namespace dxgk::arg { struct setpalette_t;                   }
namespace dxgk::arg { struct setpointerposition_t;           }
namespace dxgk::arg { struct setpointershape_t;              }
namespace dxgk::arg { struct setvidpnsourcevisibility_t;     }
namespace dxgk::arg { struct system_display_enable_flags_t;  }
namespace dxgk::arg { struct updateactivevidpnpresentpath_t; }
namespace video     { struct request_packet_t;               }

#include "magic/kmddod_initialization_data_t.start.hpp"
namespace nt
{
    struct guid_t;
    struct device_object_t;
    struct query_interface_t;
    struct dxgkrnl_interface_t;

    // [struct _KMDDOD_INITIALIZATION_DATA]
    // => WDK 10 (NV)
    //
    struct kmddod_initialization_data_t                                                                                          
    {                                                                                                                            
        enum class u0_dxgk_ddi_set_power_state_t : int32_t                                                                       
        {                                                                                                                        
            none =           0x0,                                                                                                  // WDK 10
            reserved =       0x1,                                                                                                  // WDK 10
            sleep =          0x2,                                                                                                  // WDK 10
            hibernate =      0x3,                                                                                                  // WDK 10
            shutdown =       0x4,                                                                                                  // WDK 10
            shutdown_reset = 0x5,                                                                                                  // WDK 10
            shutdown_off =   0x6,                                                                                                  // WDK 10
            warm_eject =     0x7,                                                                                                  // WDK 10
            display_off =    0x8,                                                                                                  // WDK 10
        };                                                                                                                       
                                                                                                                                 
        using pdxgkddi_add_device_t =                                     sdk::function<int32_t(const struct nt::device_object_t*, void**)>*;                                                        
        using pdxgkddi_start_device_t =                                   sdk::function<int32_t(const void*, struct dxgk::start_info_t*, struct nt::dxgkrnl_interface_t*, uint32_t*, uint32_t*)>*;                                                        
        using pdxgkddi_dispatch_io_request_t =                            sdk::function<int32_t(const void*, uint32_t, struct video::request_packet_t*)>*;                                                        
        using pdxgkddi_query_child_relations_t =                          sdk::function<int32_t(const void*, struct dxgk::child_descriptor_t*, uint32_t)>*;                                                        
        using pdxgkddi_query_child_status_t =                             sdk::function<int32_t(const void*, struct dxgk::child_status_t*, uint8_t)>*;                                                        
        using pdxgkddi_query_device_descriptor_t =                        sdk::function<int32_t(const void*, uint32_t, struct dxgk::device_descriptor_t*)>*;                                                        
        using pdxgkddi_set_power_state_t =                                sdk::function<int32_t(const void*, uint32_t, enum nt::device_power_state_t, enum )>*;                                                        
        using pdxgkddi_notify_acpi_event_t =                              sdk::function<int32_t(const void*, enum dxgk::event_type_t, uint32_t, void*, uint32_t*)>*;                                                        
        using pdxgkddi_query_interface_t =                                sdk::function<int32_t(const void*, struct nt::query_interface_t*)>*;                                                        
        using pdxgkddi_queryadapterinfo_t =                               sdk::function<int32_t(const void*, const struct dxgk::arg::queryadapterinfo_t*)>*;                                                        
        using pdxgkddi_setpalette_t =                                     sdk::function<int32_t(const void*, const struct dxgk::arg::setpalette_t*)>*;                                                        
        using pdxgkddi_setpointerposition_t =                             sdk::function<int32_t(const void*, const struct dxgk::arg::setpointerposition_t*)>*;                                                        
        using pdxgkddi_setpointershape_t =                                sdk::function<int32_t(const void*, const struct dxgk::arg::setpointershape_t*)>*;                                                        
        using pdxgkddi_escape_t =                                         sdk::function<int32_t(const void*, const struct dxgk::arg::escape_t*)>*;                                                        
        using pdxgkddi_collectdbginfo_t =                                 sdk::function<int32_t(const void*, const struct dxgk::arg::collectdbginfo_t*)>*;                                                        
        using pdxgkddi_issupportedvidpn_t =                               sdk::function<int32_t(const void*, struct dxgk::arg::issupportedvidpn_t*)>*;                                                        
        using pdxgkddi_recommendfunctionalvidpn_t =                       sdk::function<int32_t(const void*, const struct dxgk::arg::recommendfunctionalvidpn_t const*)>*;                                                        
        using pdxgkddi_enumvidpncofuncmodality_t =                        sdk::function<int32_t(const void*, const struct dxgk::arg::enumvidpncofuncmodality_t const*)>*;                                                        
        using pdxgkddi_setvidpnsourcevisibility_t =                       sdk::function<int32_t(const void*, const struct dxgk::arg::setvidpnsourcevisibility_t*)>*;                                                        
        using pdxgkddi_commitvidpn_t =                                    sdk::function<int32_t(const void*, const struct dxgk::arg::commitvidpn_t const*)>*;                                                        
        using pdxgkddi_updateactivevidpnpresentpath_t =                   sdk::function<int32_t(const void*, const struct dxgk::arg::updateactivevidpnpresentpath_t const*)>*;                                                        
        using pdxgkddi_recommendmonitormodes_t =                          sdk::function<int32_t(const void*, const struct dxgk::arg::recommendmonitormodes_t const*)>*;                                                        
        using pdxgkddi_getscanline_t =                                    sdk::function<int32_t(const void*, struct dxgk::arg::getscanline_t*)>*;                                                        
        using pdxgkddi_queryvidpnhwcapability_t =                         sdk::function<int32_t(const void*, struct dxgk::arg::queryvidpnhwcapability_t*)>*;                                                        
        using pdxgkddi_presentdisplayonly_t =                             sdk::function<int32_t(const void*, const struct dxgk::arg::present_displayonly_t*)>*;                                                        
        using pdxgkddi_stop_device_and_release_post_display_ownership_t = sdk::function<int32_t(void*, uint32_t, struct dxgk::display_information_t*)>*;                                                        
        using dxgk_ddi_stop_device_and_release_post_display_ownership_t = pdxgkddi_stop_device_and_release_post_display_ownership_t ;                                                        
        using pdxgkddi_system_display_enable_t =                          sdk::function<int32_t(void*, uint32_t, struct dxgk::arg::system_display_enable_flags_t*, uint32_t*, uint32_t*, enum kuser::d3dddiformat_t*)>*;                                                        
        using pdxgkddi_system_display_write_t =                           sdk::function<void(void*, void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)>*;                                                        
        using pdxgkddi_get_child_container_id_t =                         sdk::function<int32_t(void*, uint32_t, struct dxgk::child_container_id_t*)>*;                                                        
        using pdxgkddi_controlinterrupt_t =                               sdk::function<int32_t(const void*, const enum dxgk::interrupt_type_t, uint8_t)>*;                                                        
        using dxgk_ddi_set_power_component_f_state_t =                    sdk::function<int32_t(const void*, uint32_t, uint32_t)>*;                                                        
        using dxgk_ddi_power_runtime_control_request_t =                  sdk::function<int32_t(const void*, const struct nt::guid_t*, void*, uint64_t, void*, uint64_t, uint64_t*)>*;                                                        
        using pdxgkddi_notify_surprise_removal_t =                        sdk::function<int32_t(void*, enum dxgk::surprise_removal_type_t)>*;                                                        
                                                                                                                                 
        // WDK 10                                                                                                                
        //                                                                                                                       
        _m000 uint32_t                                                   version;                                                  //{ +0x0000    } | .Version
        _m001 pdxgkddi_add_device_t                                      dxgk_ddi_add_device;                                      //{ +0x0008    } | .DxgkDdiAddDevice
        _m002 pdxgkddi_start_device_t                                    dxgk_ddi_start_device;                                    //{ +0x0010    } | .DxgkDdiStartDevice
        _m003 sdk::function<int32_t(const void*)>*                       dxgk_ddi_stop_device;                                     //{ +0x0018    } | .DxgkDdiStopDevice
        _m004 sdk::function<int32_t(const void*)>*                       dxgk_ddi_remove_device;                                   //{ +0x0020    } | .DxgkDdiRemoveDevice
        _m005 pdxgkddi_dispatch_io_request_t                             dxgk_ddi_dispatch_io_request;                             //{ +0x0028    } | .DxgkDdiDispatchIoRequest
        _m006 sdk::function<uint8_t(const void*, uint32_t)>*             dxgk_ddi_interrupt_routine;                               //{ +0x0030    } | .DxgkDdiInterruptRoutine
        _m007 sdk::function<void(const void*)>*                          dxgk_ddi_dpc_routine;                                     //{ +0x0038    } | .DxgkDdiDpcRoutine
        _m008 pdxgkddi_query_child_relations_t                           dxgk_ddi_query_child_relations;                           //{ +0x0040    } | .DxgkDdiQueryChildRelations
        _m009 pdxgkddi_query_child_status_t                              dxgk_ddi_query_child_status;                              //{ +0x0048    } | .DxgkDdiQueryChildStatus
        _m010 pdxgkddi_query_device_descriptor_t                         dxgk_ddi_query_device_descriptor;                         //{ +0x0050    } | .DxgkDdiQueryDeviceDescriptor
        _m011 pdxgkddi_set_power_state_t                                 dxgk_ddi_set_power_state;                                 //{ +0x0058    } | .DxgkDdiSetPowerState
        _m012 pdxgkddi_notify_acpi_event_t                               dxgk_ddi_notify_acpi_event;                               //{ +0x0060    } | .DxgkDdiNotifyAcpiEvent
        _m013 sdk::function<void(const void*)>*                          dxgk_ddi_reset_device;                                    //{ +0x0068    } | .DxgkDdiResetDevice
        _m014 sdk::function<void()>*                                     dxgk_ddi_unload;                                          //{ +0x0070    } | .DxgkDdiUnload
        _m015 pdxgkddi_query_interface_t                                 dxgk_ddi_query_interface;                                 //{ +0x0078    } | .DxgkDdiQueryInterface
        _m016 sdk::function<void(uint8_t, uint32_t, uint8_t)>*           dxgk_ddi_control_etw_logging;                             //{ +0x0080    } | .DxgkDdiControlEtwLogging
        _m017 pdxgkddi_queryadapterinfo_t                                dxgk_ddi_query_adapter_info;                              //{ +0x0088    } | .DxgkDdiQueryAdapterInfo
        _m018 pdxgkddi_setpalette_t                                      dxgk_ddi_set_palette;                                     //{ +0x0090    } | .DxgkDdiSetPalette
        _m019 pdxgkddi_setpointerposition_t                              dxgk_ddi_set_pointer_position;                            //{ +0x0098    } | .DxgkDdiSetPointerPosition
        _m020 pdxgkddi_setpointershape_t                                 dxgk_ddi_set_pointer_shape;                               //{ +0x00a0    } | .DxgkDdiSetPointerShape
        _m021 pdxgkddi_escape_t                                          dxgk_ddi_escape;                                          //{ +0x00a8    } | .DxgkDdiEscape
        _m022 pdxgkddi_collectdbginfo_t                                  dxgk_ddi_collect_dbg_info;                                //{ +0x00b0    } | .DxgkDdiCollectDbgInfo
        _m023 pdxgkddi_issupportedvidpn_t                                dxgk_ddi_is_supported_vid_pn;                             //{ +0x00b8    } | .DxgkDdiIsSupportedVidPn
        _m024 pdxgkddi_recommendfunctionalvidpn_t                        dxgk_ddi_recommend_functional_vid_pn;                     //{ +0x00c0    } | .DxgkDdiRecommendFunctionalVidPn
        _m025 pdxgkddi_enumvidpncofuncmodality_t                         dxgk_ddi_enum_vid_pn_cofunc_modality;                     //{ +0x00c8    } | .DxgkDdiEnumVidPnCofuncModality
        _m026 pdxgkddi_setvidpnsourcevisibility_t                        dxgk_ddi_set_vid_pn_source_visibility;                    //{ +0x00d0    } | .DxgkDdiSetVidPnSourceVisibility
        _m027 pdxgkddi_commitvidpn_t                                     dxgk_ddi_commit_vid_pn;                                   //{ +0x00d8    } | .DxgkDdiCommitVidPn
        _m028 pdxgkddi_updateactivevidpnpresentpath_t                    dxgk_ddi_update_active_vid_pn_present_path;               //{ +0x00e0    } | .DxgkDdiUpdateActiveVidPnPresentPath
        _m029 pdxgkddi_recommendmonitormodes_t                           dxgk_ddi_recommend_monitor_modes;                         //{ +0x00e8    } | .DxgkDdiRecommendMonitorModes
        _m030 pdxgkddi_getscanline_t                                     dxgk_ddi_get_scan_line;                                   //{ +0x00f0    } | .DxgkDdiGetScanLine
        _m031 pdxgkddi_queryvidpnhwcapability_t                          dxgk_ddi_query_vid_pn_hw_capability;                      //{ +0x00f8    } | .DxgkDdiQueryVidPnHWCapability
        _m032 pdxgkddi_presentdisplayonly_t                              dxgk_ddi_present_display_only;                            //{ +0x0100    } | .DxgkDdiPresentDisplayOnly
        _m033 dxgk_ddi_stop_device_and_release_post_display_ownership_t  dxgk_ddi_stop_device_and_release_post_display_ownership;  //{ +0x0108    } | .DxgkDdiStopDeviceAndReleasePostDisplayOwnership
        _m034 pdxgkddi_system_display_enable_t                           dxgk_ddi_system_display_enable;                           //{ +0x0110    } | .DxgkDdiSystemDisplayEnable
        _m035 pdxgkddi_system_display_write_t                            dxgk_ddi_system_display_write;                            //{ +0x0118    } | .DxgkDdiSystemDisplayWrite
        _m036 pdxgkddi_get_child_container_id_t                          dxgk_ddi_get_child_container_id;                          //{ +0x0120    } | .DxgkDdiGetChildContainerId
        _m037 pdxgkddi_controlinterrupt_t                                dxgk_ddi_control_interrupt;                               //{ +0x0128    } | .DxgkDdiControlInterrupt
        _m038 dxgk_ddi_set_power_component_f_state_t                     dxgk_ddi_set_power_component_f_state;                     //{ +0x0130    } | .DxgkDdiSetPowerComponentFState
        _m039 dxgk_ddi_power_runtime_control_request_t                   dxgk_ddi_power_runtime_control_request;                   //{ +0x0138    } | .DxgkDdiPowerRuntimeControlRequest
        _m040 pdxgkddi_notify_surprise_removal_t                         dxgk_ddi_notify_surprise_removal;                         //{ +0x0140    } | .DxgkDdiNotifySurpriseRemoval
        _m041 sdk::function<int32_t(const void*, void*)>*                dxgk_ddi_power_runtime_set_device_handle;                 //{ +0x0148    } | .DxgkDdiPowerRuntimeSetDeviceHandle
                                                                                                                                 
        SDK_NONVOL_PROPERTIES( "_KMDDOD_INITIALIZATION_DATA.$", 0x0, false, 0x7a826efef984d60e );                                                        
        SDK_FIXED_SIZE( kmddod_initialization_data_t, 0x150 );                                                                   
    };                                                                                                                           
};
#include "magic/kmddod_initialization_data_t.end.hpp"
SDK_VERIFY( struct nt::kmddod_initialization_data_t, 0x150 );
