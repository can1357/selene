#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_caching_type_t.hpp"
#include "../dxgk/vidpn_interface_version_t.hpp"
#include "../dxgk/monitor_interface_version_t.hpp"

namespace acpi          { struct eval_input_buffer_complex_v1_t;  }
namespace acpi          { struct eval_output_buffer_v1_t;         }
namespace d3dk::mdt     { struct hvidpn_t;                        }
namespace dxgk          { struct child_status_t;                  }
namespace dxgk          { struct device_info_t;                   }
namespace dxgk          { struct diagnostic_header_t;             }
namespace dxgk          { struct display_information_t;           }
namespace dxgk          { struct display_ownership_flags_t;       }
namespace dxgk          { struct monitor_interface_t;             }
namespace dxgk          { struct querysegmentmemorystate_t;       }
namespace dxgk          { struct vidpn_interface_t;               }
namespace dxgk::arg::cb { struct allocatecontiguousmemory_t;      }
namespace dxgk::arg::cb { struct allocatepagesformdl_t;           }
namespace dxgk::arg::cb { struct createcontextallocation_t;       }
namespace dxgk::arg::cb { struct enumhandlechildren_t;            }
namespace dxgk::arg::cb { struct freecontiguousmemory_t;          }
namespace dxgk::arg::cb { struct freepagesfrommdl_t;              }
namespace dxgk::arg::cb { struct getcaptureaddress_t;             }
namespace dxgk::arg::cb { struct gethandledata_t;                 }
namespace dxgk::arg::cb { struct invalidatehwcontext_t;           }
namespace dxgk::arg::cb { struct isfeatureenabled_t;              }
namespace dxgk::arg::cb { struct mapcontextallocation_t;          }
namespace dxgk::arg::cb { struct mapframebufferpointer_t;         }
namespace dxgk::arg::cb { struct mapmdltoiommu_t;                 }
namespace dxgk::arg::cb { struct notify_interrupt_data_t;         }
namespace dxgk::arg::cb { struct pinframebufferforsave_t;         }
namespace dxgk::arg::cb { struct protectedsessionstatus_t;        }
namespace dxgk::arg::cb { struct releasehandledata_t;             }
namespace dxgk::arg::cb { struct reservegpuvirtualaddressrange_t; }
namespace dxgk::arg::cb { struct savememoryforhotupdate_t;        }
namespace dxgk::arg::cb { struct signalevent_t;                   }
namespace dxgk::arg::cb { struct unmapframebufferpointer_t;       }
namespace dxgk::arg::cb { struct unmapmdlfromiommu_t;             }
namespace dxgk::arg::cb { struct unpinframebufferforsave_t;       }
namespace dxgk::arg::cb { struct updatecontextallocation_t;       }
namespace pci           { struct device_presence_parameters_t;    }

#include "magic/dxgkrnl_interface_t.start.hpp"
namespace nt
{
    struct guid_t;
    struct interface_t;

    // [struct _DXGKRNL_INTERFACE]
    // => WDK 10 (NV)
    //
    struct dxgkrnl_interface_t                                                                         
    {                                                                                                  
        enum class u0_dxgk_cb_query_services_t : int32_t                                               
        {                                                                                              
            agp =             0x0,                                                                       // WDK 10
            debug_report =    0x1,                                                                       // WDK 10
            timed_operation = 0x2,                                                                       // WDK 10
            spb =             0x3,                                                                       // WDK 10
            bdd =             0x4,                                                                       // WDK 10
            firmware_table =  0x5,                                                                       // WDK 10
            idd =             0x6,                                                                       // WDK 10
        };                                                                                             
                                                                                                       
        using dxgkcb_eval_acpi_method_t =                sdk::function<int32_t(void*, uint32_t, struct acpi::eval_input_buffer_complex_v1_t*, uint32_t, struct acpi::eval_output_buffer_v1_t*, uint32_t)>*;                                             
        using dxgkcb_get_device_information_t =          sdk::function<int32_t(void*, struct dxgk::device_info_t*)>*;                                             
        using dxgkcb_indicate_child_status_t =           sdk::function<int32_t(void*, struct dxgk::child_status_t*)>*;                                             
        using dxgkcb_map_memory_t =                      sdk::function<int32_t(void*, int64_t, uint32_t, uint8_t, uint8_t, enum nt::memory_caching_type_t, void**)>*;                                             
        using dxgkcb_query_services_t =                  sdk::function<int32_t(void*, enum , struct nt::interface_t*)>*;                                             
        using dxgk_cb_read_device_space_t =              sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t, uint32_t*)>*;                                             
        using dxgkcb_synchronize_execution_t =           sdk::function<int32_t(void*, sdk::function<uint8_t(void*)>*, void*, uint32_t, uint8_t*)>*;                                             
        using dxgk_cb_write_device_space_t =             sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t, uint32_t*)>*;                                             
        using dxgkcb_is_device_present_t =               sdk::function<int32_t(void*, struct pci::device_presence_parameters_t*, uint8_t*)>*;                                             
        using dxgkcb_gethandledata_t =                   sdk::function<void*(const struct dxgk::arg::cb::gethandledata_t*)>*;                                             
        using dxgkcb_enumhandlechildren_t =              sdk::function<uint32_t(const struct dxgk::arg::cb::enumhandlechildren_t*)>*;                                             
        using dxgkcb_notify_interrupt_t =                sdk::function<void(const void*, struct dxgk::arg::cb::notify_interrupt_data_t*)>*;                                             
        using dxgkcb_queryvidpninterface_t =             sdk::function<int32_t(const struct d3dk::mdt::hvidpn_t*, const enum dxgk::vidpn_interface_version_t, const struct dxgk::vidpn_interface_t**)>*;                                             
        using dxgkcb_querymonitorinterface_t =           sdk::function<int32_t(const void*, const enum dxgk::monitor_interface_version_t, const struct dxgk::monitor_interface_t**)>*;                                             
        using dxgkcb_getcaptureaddress_t =               sdk::function<int32_t(struct dxgk::arg::cb::getcaptureaddress_t*)>*;                                             
        using dxgkcb_log_etw_event_t =                   sdk::function<void(const const struct nt::guid_t*, uint8_t, uint16_t, void*)>*;                                             
        using dxgkcb_exclude_adapter_access_t =          sdk::function<int32_t(void*, uint32_t, sdk::function<void(const void*, void*, int32_t)>*, void*)>*;                                             
        using dxgkcb_createcontextallocation_t =         sdk::function<int32_t(struct dxgk::arg::cb::createcontextallocation_t*)>*;                                             
        using dxgk_cb_destroy_context_allocation_t =     sdk::function<int32_t(const void*, const void*)>*;                                             
        using dxgkcb_acquire_post_display_ownership_t =  sdk::function<int32_t(void*, struct dxgk::display_information_t*)>*;                                             
        using dxgk_cb_power_runtime_control_request_t =  sdk::function<int32_t(const void*, const struct nt::guid_t*, void*, uint64_t, void*, uint64_t, uint64_t*)>*;                                             
        using dxgk_cb_set_power_component_latency_t =    sdk::function<void(const void*, uint32_t, uint64_t)>*;                                             
        using dxgk_cb_set_power_component_residency_t =  sdk::function<void(const void*, uint32_t, uint64_t)>*;                                             
        using dxgkcb_completepstatetransition_t =        sdk::function<void(const void*, uint32_t, uint32_t)>*;                                             
        using dxgkcb_mapcontextallocation_t =            sdk::function<uint64_t(const void*, const struct dxgk::arg::cb::mapcontextallocation_t*)>*;                                             
        using dxgkcb_updatecontextallocation_t =         sdk::function<int32_t(const void*, const struct dxgk::arg::cb::updatecontextallocation_t*)>*;                                             
        using dxgkcb_reservegpuvirtualaddressrange_t =   sdk::function<int32_t(const void*, struct dxgk::arg::cb::reservegpuvirtualaddressrange_t*)>*;                                             
        using dxgkcb_acquirehandledata_t =               sdk::function<void*(const struct dxgk::arg::cb::gethandledata_t*, void**)>*;                                             
        using dxgkcb_releasehandledata_t =               sdk::function<void(const struct dxgk::arg::cb::releasehandledata_t)>*;                                             
        using dxgkcb_invalidatehwcontext_t =             sdk::function<int32_t(const struct dxgk::arg::cb::invalidatehwcontext_t*)>*;                                             
        using dxgkcb_unblockuefiframebufferranges_t =    sdk::function<int32_t(const void*, const struct dxgk::querysegmentmemorystate_t*)>*;                                             
        using dxgkcb_acquire_post_display_ownership2_t = sdk::function<int32_t(void*, struct dxgk::display_information_t*, struct dxgk::display_ownership_flags_t*)>*;                                             
        using dxgkcb_setprotectedsessionstatus_t =       sdk::function<int32_t(const struct dxgk::arg::cb::protectedsessionstatus_t*)>*;                                             
        using dxgkcb_allocatecontiguousmemory_t =        sdk::function<int32_t(const void*, struct dxgk::arg::cb::allocatecontiguousmemory_t*)>*;                                             
        using dxgkcb_freecontiguousmemory_t =            sdk::function<int32_t(const void*, const struct dxgk::arg::cb::freecontiguousmemory_t*)>*;                                             
        using dxgkcb_allocatepagesformdl_t =             sdk::function<int32_t(const void*, struct dxgk::arg::cb::allocatepagesformdl_t*)>*;                                             
        using dxgkcb_freepagesfrommdl_t =                sdk::function<int32_t(const void*, const struct dxgk::arg::cb::freepagesfrommdl_t*)>*;                                             
        using dxgkcb_pinframebufferforsave_t =           sdk::function<int32_t(const void*, struct dxgk::arg::cb::pinframebufferforsave_t*)>*;                                             
        using dxgkcb_unpinframebufferforsave_t =         sdk::function<int32_t(const void*, const struct dxgk::arg::cb::unpinframebufferforsave_t*)>*;                                             
        using dxgkcb_mapframebufferpointer_t =           sdk::function<int32_t(const void*, struct dxgk::arg::cb::mapframebufferpointer_t*)>*;                                             
        using dxgkcb_unmapframebufferpointer_t =         sdk::function<int32_t(const void*, const struct dxgk::arg::cb::unmapframebufferpointer_t*)>*;                                             
        using dxgkcb_mapmdltoiommu_t =                   sdk::function<int32_t(const void*, struct dxgk::arg::cb::mapmdltoiommu_t*)>*;                                             
        using dxgkcb_unmapmdlfromiommu_t =               sdk::function<void(const void*, const struct dxgk::arg::cb::unmapmdlfromiommu_t*)>*;                                             
        using dxgkcb_report_diagnostic_t =               sdk::function<int32_t(void*, struct dxgk::diagnostic_header_t*)>*;                                             
        using dxgkcb_signalevent_t =                     sdk::function<int32_t(const struct dxgk::arg::cb::signalevent_t*)>*;                                             
        using dxgkcb_isfeatureenabled_t =                sdk::function<int32_t(struct dxgk::arg::cb::isfeatureenabled_t*)>*;                                             
        using dxgkcb_savememoryforhotupdate_t =          sdk::function<int32_t(const void*, const struct dxgk::arg::cb::savememoryforhotupdate_t*)>*;                                             
                                                                                                       
        // WDK 10                                                                                      
        //                                                                                             
        _m000 uint32_t                                    size;                                          //{ +0x0000    } | .Size
        _m001 uint32_t                                    version;                                       //{ +0x0004    } | .Version
        _m002 void*                                       device_handle;                                 //{ +0x0008    } | .DeviceHandle
        _m003 dxgkcb_eval_acpi_method_t                   dxgk_cb_eval_acpi_method;                      //{ +0x0010    } | .DxgkCbEvalAcpiMethod
        _m004 dxgkcb_get_device_information_t             dxgk_cb_get_device_information;                //{ +0x0018    } | .DxgkCbGetDeviceInformation
        _m005 dxgkcb_indicate_child_status_t              dxgk_cb_indicate_child_status;                 //{ +0x0020    } | .DxgkCbIndicateChildStatus
        _m006 dxgkcb_map_memory_t                         dxgk_cb_map_memory;                            //{ +0x0028    } | .DxgkCbMapMemory
        _m007 sdk::function<uint8_t(void*)>*              dxgk_cb_queue_dpc;                             //{ +0x0030    } | .DxgkCbQueueDpc
        _m008 dxgkcb_query_services_t                     dxgk_cb_query_services;                        //{ +0x0038    } | .DxgkCbQueryServices
        _m009 dxgk_cb_read_device_space_t                 dxgk_cb_read_device_space;                     //{ +0x0040    } | .DxgkCbReadDeviceSpace
        _m010 dxgkcb_synchronize_execution_t              dxgk_cb_synchronize_execution;                 //{ +0x0048    } | .DxgkCbSynchronizeExecution
        _m011 sdk::function<int32_t(void*, void*)>*       dxgk_cb_unmap_memory;                          //{ +0x0050    } | .DxgkCbUnmapMemory
        _m012 dxgk_cb_write_device_space_t                dxgk_cb_write_device_space;                    //{ +0x0058    } | .DxgkCbWriteDeviceSpace
        _m013 dxgkcb_is_device_present_t                  dxgk_cb_is_device_present;                     //{ +0x0060    } | .DxgkCbIsDevicePresent
        _m014 dxgkcb_gethandledata_t                      dxgk_cb_get_handle_data;                       //{ +0x0068    } | .DxgkCbGetHandleData
        _m015 sdk::function<uint32_t(uint32_t)>*          dxgk_cb_get_handle_parent;                     //{ +0x0070    } | .DxgkCbGetHandleParent
        _m016 dxgkcb_enumhandlechildren_t                 dxgk_cb_enum_handle_children;                  //{ +0x0078    } | .DxgkCbEnumHandleChildren
        _m017 dxgkcb_notify_interrupt_t                   dxgk_cb_notify_interrupt;                      //{ +0x0080    } | .DxgkCbNotifyInterrupt
        _m018 sdk::function<void(const void*)>*           dxgk_cb_notify_dpc;                            //{ +0x0088    } | .DxgkCbNotifyDpc
        _m019 dxgkcb_queryvidpninterface_t                dxgk_cb_query_vid_pn_interface;                //{ +0x0090    } | .DxgkCbQueryVidPnInterface
        _m020 dxgkcb_querymonitorinterface_t              dxgk_cb_query_monitor_interface;               //{ +0x0098    } | .DxgkCbQueryMonitorInterface
        _m021 dxgkcb_getcaptureaddress_t                  dxgk_cb_get_capture_address;                   //{ +0x00a0    } | .DxgkCbGetCaptureAddress
        _m022 dxgkcb_log_etw_event_t                      dxgk_cb_log_etw_event;                         //{ +0x00a8    } | .DxgkCbLogEtwEvent
        _m023 dxgkcb_exclude_adapter_access_t             dxgk_cb_exclude_adapter_access;                //{ +0x00b0    } | .DxgkCbExcludeAdapterAccess
        _m024 dxgkcb_createcontextallocation_t            dxgk_cb_create_context_allocation;             //{ +0x00b8    } | .DxgkCbCreateContextAllocation
        _m025 dxgk_cb_destroy_context_allocation_t        dxgk_cb_destroy_context_allocation;            //{ +0x00c0    } | .DxgkCbDestroyContextAllocation
        _m026 sdk::function<void(const void*, uint32_t)>* dxgk_cb_set_power_component_active;            //{ +0x00c8    } | .DxgkCbSetPowerComponentActive
        _m027 sdk::function<void(const void*, uint32_t)>* dxgk_cb_set_power_component_idle;              //{ +0x00d0    } | .DxgkCbSetPowerComponentIdle
        _m028 dxgkcb_acquire_post_display_ownership_t     dxgk_cb_acquire_post_display_ownership;        //{ +0x00d8    } | .DxgkCbAcquirePostDisplayOwnership
        _m029 dxgk_cb_power_runtime_control_request_t     dxgk_cb_power_runtime_control_request;         //{ +0x00e0    } | .DxgkCbPowerRuntimeControlRequest
        _m030 dxgk_cb_set_power_component_latency_t       dxgk_cb_set_power_component_latency;           //{ +0x00e8    } | .DxgkCbSetPowerComponentLatency
        _m031 dxgk_cb_set_power_component_residency_t     dxgk_cb_set_power_component_residency;         //{ +0x00f0    } | .DxgkCbSetPowerComponentResidency
        _m032 sdk::function<void(const void*, uint32_t)>* dxgk_cb_complete_f_state_transition;           //{ +0x00f8    } | .DxgkCbCompleteFStateTransition
        _m033 dxgkcb_completepstatetransition_t           dxgk_cb_complete_p_state_transition;           //{ +0x0100    } | .DxgkCbCompletePStateTransition
        _m034 dxgkcb_mapcontextallocation_t               dxgk_cb_map_context_allocation;                //{ +0x0108    } | .DxgkCbMapContextAllocation
        _m035 dxgkcb_updatecontextallocation_t            dxgk_cb_update_context_allocation;             //{ +0x0110    } | .DxgkCbUpdateContextAllocation
        _m036 dxgkcb_reservegpuvirtualaddressrange_t      dxgk_cb_reserve_gpu_virtual_address_range;     //{ +0x0118    } | .DxgkCbReserveGpuVirtualAddressRange
        _m037 dxgkcb_acquirehandledata_t                  dxgk_cb_acquire_handle_data;                   //{ +0x0120    } | .DxgkCbAcquireHandleData
        _m038 dxgkcb_releasehandledata_t                  dxgk_cb_release_handle_data;                   //{ +0x0128    } | .DxgkCbReleaseHandleData
        _m039 sdk::function<void(const void*, uint32_t)>* dxgk_cb_hardware_content_protection_teardown;  //{ +0x0130    } | .DxgkCbHardwareContentProtectionTeardown
        _m040 sdk::function<void(const void*, uint32_t)>* dxgk_cb_multi_plane_overlay_disabled;          //{ +0x0138    } | .DxgkCbMultiPlaneOverlayDisabled
        _m041 sdk::function<void(const void*, uint32_t)>* dxgk_cb_mitigated_range_update;                //{ +0x0140    } | .DxgkCbMitigatedRangeUpdate
        _m042 dxgkcb_invalidatehwcontext_t                dxgk_cb_invalidate_hw_context;                 //{ +0x0148    } | .DxgkCbInvalidateHwContext
        _m043 sdk::function<int32_t(const void*)>*        dxgk_cb_indicate_connector_change;             //{ +0x0150    } | .DxgkCbIndicateConnectorChange
        _m044 dxgkcb_unblockuefiframebufferranges_t       dxgk_cb_unblock_uefi_frame_buffer_ranges;      //{ +0x0158    } | .DxgkCbUnblockUEFIFrameBufferRanges
        _m045 dxgkcb_acquire_post_display_ownership2_t    dxgk_cb_acquire_post_display_ownership2;       //{ +0x0160    } | .DxgkCbAcquirePostDisplayOwnership2
        _m046 dxgkcb_setprotectedsessionstatus_t          dxgk_cb_set_protected_session_status;          //{ +0x0168    } | .DxgkCbSetProtectedSessionStatus
        _m047 dxgkcb_allocatecontiguousmemory_t           dxgk_cb_allocate_contiguous_memory;            //{ +0x0170    } | .DxgkCbAllocateContiguousMemory
        _m048 dxgkcb_freecontiguousmemory_t               dxgk_cb_free_contiguous_memory;                //{ +0x0178    } | .DxgkCbFreeContiguousMemory
        _m049 dxgkcb_allocatepagesformdl_t                dxgk_cb_allocate_pages_for_mdl;                //{ +0x0180    } | .DxgkCbAllocatePagesForMdl
        _m050 dxgkcb_freepagesfrommdl_t                   dxgk_cb_free_pages_from_mdl;                   //{ +0x0188    } | .DxgkCbFreePagesFromMdl
        _m051 dxgkcb_pinframebufferforsave_t              dxgk_cb_pin_frame_buffer_for_save;             //{ +0x0190    } | .DxgkCbPinFrameBufferForSave
        _m052 dxgkcb_unpinframebufferforsave_t            dxgk_cb_unpin_frame_buffer_for_save;           //{ +0x0198    } | .DxgkCbUnpinFrameBufferForSave
        _m053 dxgkcb_mapframebufferpointer_t              dxgk_cb_map_frame_buffer_pointer;              //{ +0x01a0    } | .DxgkCbMapFrameBufferPointer
        _m054 dxgkcb_unmapframebufferpointer_t            dxgk_cb_unmap_frame_buffer_pointer;            //{ +0x01a8    } | .DxgkCbUnmapFrameBufferPointer
        _m055 dxgkcb_mapmdltoiommu_t                      dxgk_cb_map_mdl_to_io_mmu;                     //{ +0x01b0    } | .DxgkCbMapMdlToIoMmu
        _m056 dxgkcb_unmapmdlfromiommu_t                  dxgk_cb_unmap_mdl_from_io_mmu;                 //{ +0x01b8    } | .DxgkCbUnmapMdlFromIoMmu
        _m057 dxgkcb_report_diagnostic_t                  dxgk_cb_report_diagnostic;                     //{ +0x01c0    } | .DxgkCbReportDiagnostic
        _m058 dxgkcb_signalevent_t                        dxgk_cb_signal_event;                          //{ +0x01c8    } | .DxgkCbSignalEvent
        _m059 dxgkcb_isfeatureenabled_t                   dxgk_cb_is_feature_enabled;                    //{ +0x01d0    } | .DxgkCbIsFeatureEnabled
        _m060 dxgkcb_savememoryforhotupdate_t             dxgk_cb_save_memory_for_hot_update;            //{ +0x01d8    } | .DxgkCbSaveMemoryForHotUpdate
                                                                                                       
        SDK_NONVOL_PROPERTIES( "_DXGKRNL_INTERFACE.$", 0x0, false, 0xf65651314433623f );                                             
        SDK_FIXED_SIZE( dxgkrnl_interface_t, 0x1e0 );                                                  
    };                                                                                                 
};
#include "magic/dxgkrnl_interface_t.end.hpp"
SDK_VERIFY( struct nt::dxgkrnl_interface_t, 0x1e0 );
