#pragma once
#include <sdkgen/support_library.hpp>
#include "wakestate_t.hpp"
#include "descriptor_t.hpp"
#include "devicereset_t.hpp"
#include "../nt/kevent_t.hpp"
#include "power_policy_t.hpp"
#include "../sm/context_t.hpp"
#include "rt_power_data_t.hpp"
#include "devicepresence_t.hpp"
#include "rt_power_state_t.hpp"
#include "wmilib_context_t.hpp"
#include "ping_pong_state_t.hpp"
#include "rt_power_engine_t.hpp"
#include "../io/gate_state_t.hpp"
#include "../nt/fast_mutex_t.hpp"
#include "pofx_ref_tracker_t.hpp"
#include "../io/remove_lock_t.hpp"
#include "device_attributes_t.hpp"
#include "../hidp/device_desc_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "../nt/system_power_state_t.hpp"
#include "../nt/device_capabilities_t.hpp"
#include "submit_idle_notification_callback_info_t.hpp"

namespace ex  { struct wnf_subscription_t; }
namespace nt  { struct device_object_t;    }
namespace nt  { struct device_relations_t; }
namespace nt  { struct irp_t;              }
namespace nt  { struct pohandle_t;         }
namespace pci { struct recorder_log_t;     }

#include "magic/fdo_extension_t.start.hpp"
namespace hid
{
    struct ss_component_t;
    struct fdo_extension_t;
    struct hidclass_pingpong_t;
    struct hidclass_collection_t;
    struct hidclass_device_extension_t;
    struct hidclass_driver_extension_t;

    // [struct _FDO_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fdo_extension_t                                                                                  
    {                                                                                                       
        using idle_callback_info_t = struct hid::submit_idle_notification_callback_info_t;                                                    
                                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
        //                                                                                                  
        _m000 struct nt::device_object_t*               fdo;                                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fdo
        _m001 struct hid::hidclass_driver_extension_t*  driver_ext;                                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .driverExt
        _m002 struct hid::descriptor_t                  hid_descriptor;                                       //{ +0x0010    +0x005c    +0x005c    +0x005c    } | .hidDescriptor
        _m003 struct hid::device_attributes_t           hid_device_attributes;                                //{ +0x001c    +0x0068    +0x0068    +0x0068    } | .hidDeviceAttributes
        _m004 uint8_t*                                  raw_report_description;                               //{ +0x0040    +0x0088    +0x0088    +0x0088    } | .rawReportDescription
        _m005 uint32_t                                  raw_report_description_length;                        //{ +0x0048    +0x0090    +0x0090    +0x0090    } | .rawReportDescriptionLength
        _m006 struct hid::hidclass_collection_t*        class_collection_array;                               //{ +0x0050    +0x0098    +0x0098    +0x0098    } | .classCollectionArray
        _m007 struct hidp::device_desc_t                device_desc;                                          //{ +0x0058    +0x00a0    +0x00a0    +0x00a0    } | .deviceDesc
        _m008 uint8_t                                   dev_desc_initialized;                                 //{ +0x0098    +0x00e0    +0x00e0    +0x00e0    } | .devDescInitialized
        _m009 uint32_t                                  max_report_size;                                      //{ +0x009c    +0x00e4    +0x00e4    +0x00e4    } | .maxReportSize
        _m010 uint32_t                                  num_ping_pongs;                                       //{ +0x00a0    +0x00e8    +0x00e8    +0x00e8    } | .numPingPongs
        _m011 struct hid::hidclass_pingpong_t*          ping_pongs;                                           //{ +0x00a8    +0x00f0    +0x00f0    +0x00f0    } | .pingPongs
        _m012 uint32_t                                  open_count;                                           //{ +0x00b0    +0x00f8    +0x00f8    +0x00f8    } | .openCount
        _m013 nt::unicode_view                          name;                                                 //{ +0x00b8    +0x0100    +0x0100    +0x0100    } | .name
        _m014 struct nt::device_relations_t*            device_relations;                                     //{ +0x00c8    +0x0110    +0x0110    +0x0110    } | .deviceRelations
        _m015 enum hid::ping_pong_state_t               ping_pong_state;                                      //{ +0x00d0    +0x0118    +0x0118    +0x0118    } | .pingPongState
        _m016 struct hid::hidclass_device_extension_t** collection_pdo_extensions;                            //{ +0x00d8    +0x0120    +0x0120    +0x0120    } | .collectionPdoExtensions
        _m017 struct nt::device_capabilities_t          device_capabilities;                                  //{ +0x00e0    +0x0128    +0x0128    +0x0128    } | .deviceCapabilities
        _m018 enum nt::system_power_state_t             system_power_state;                                   //{ +0x0120    +0x0168    +0x0168    +0x0168    } | .systemPowerState
        _m019 enum nt::device_power_state_t             device_power_state;                                   //{ +0x0124    +0x016c    +0x016c    +0x016c    } | .devicePowerState
        _m020 struct nt::irp_t*                         wait_wake_irp;                                        //{ +0x0128    +0x0170    +0x0170    +0x0170    } | .waitWakeIrp
        _m021 enum hid::wakestate_t                     wake_state;                                           //{ +0x0130    +0x0178    +0x0178    +0x0178    } | .WakeState
        _m022 uint8_t                                   system_wake_source;                                   //{ +0x0134    +0x017c    +0x017c    +0x017c    } | .systemWakeSource
        _m023 uint64_t                                  collection_power_delayed_irp_queue_spin_lock;         //{ +0x0138    +0x0180    +0x0180    +0x0180    } | .collectionPowerDelayedIrpQueueSpinLock
        _m024 nt::list_entry_t                          collection_power_delayed_irp_queue;                   //{ +0x0140    +0x0188    +0x0188    +0x0188    } | .collectionPowerDelayedIrpQueue
        _m025 uint32_t                                  num_pending_power_delayed_irps;                       //{ +0x0150    +0x0198    +0x0198    +0x0198    } | .numPendingPowerDelayedIrps
        _m026 uint8_t                                   is_output_only_device;                                //{ +0x0154    +0x019c    +0x019c    +0x019c    } | .isOutputOnlyDevice
        _m027 idle_callback_info_t                      idle_callback_info;                                   //{ +0x0158    +0x01a0    +0x01a0    +0x01a0    } | .idleCallbackInfo
        _m028 struct nt::irp_t*                         idle_notification_request;                            //{ +0x0168    +0x01b0    +0x01b0    +0x01b0    } | .idleNotificationRequest
        _m029 struct nt::kevent_t                       idle_done_event;                                      //{ +0x0170    +0x01b8    +0x01b8    +0x01b8    } | .idleDoneEvent
        _m030 int32_t                                   num_idle_pdos;                                        //{ +0x0188    +0x01d0    +0x01d0    +0x01d0    } | .numIdlePdos
        _m031 nt::list_entry_t                          collection_wait_wake_irp_queue;                       //{ +0x0190    +0x01d8    +0x01d8    +0x01d8    } | .collectionWaitWakeIrpQueue
        _m032 uint64_t                                  collection_wait_wake_irp_queue_spin_lock;             //{ +0x01a0    +0x01e8    +0x01e8    +0x01e8    } | .collectionWaitWakeIrpQueueSpinLock
        _m033 struct hid::fdo_extension_t*              next_fdo_ext;                                         //{ +0x01a8    +0x01f0    +0x01f0    +0x01f0    } | .nextFdoExt
        _m034 struct nt::irp_t*                         current_system_state_irp;                             //{ +0x01b0    +0x01f8    +0x01f8    +0x01f8    } | .currentSystemStateIrp
        _m035 uint32_t                                  bus_number;                                           //{ +0x01b8    +0x0200    +0x0200    +0x0200    } | .BusNumber
        _m036 struct hid::wmilib_context_t              wmi_lib_info;                                         //{ +0x01c0    +0x0208    +0x0208    +0x0208    } | .WmiLibInfo
        _m037 uint32_t                                  is_present;                                           //{ +0x0200    +0x0248    +0x0248    +0x0248    } | .isPresent
        _m038 uint8_t                                   present_reported;                                     //{ +0x0204    +0x024c    +0x024c    +0x024c    } | .presentReported
        _m039 uint8_t                                   retain_ww_irp_when_device_absent;                     //{ +0x0205    +0x024d    +0x024d    +0x024d    } | .retainWWIrpWhenDeviceAbsent
        _m040 struct nt::kevent_t                       power_down_complete_event;                            //{ +0x0208    +0x0250    +0x0250    +0x0250    } | .powerDownCompleteEvent
        _m041 struct io::remove_lock_t                  hid_fdo_remove_lock;                                  //{ +0x0230    +0x0280    +0x0280    +0x0280    } | .hidFdoRemoveLock
        _m042 struct pci::recorder_log_t*               recorder_log;                                         //{ +0x0250    +0x02a0    +0x02a0    +0x02a0    } | .recorderLog
        _m043 struct nt::pohandle_t*                    po_handle;                                            //{ +0x0258    +0x02b8    +0x02b8    +0x02b8    } | .poHandle
        _m044 struct sm::context_t                      sm_context;                                           //{ +0x0260    +0x02c0    +0x02c0    +0x02c0    } | .SmContext
        _m045 enum io::gate_state_t                     io_gate_state;                                        //{ +0x0658    +0x06b8    +0x06b8    +0x06b8    } | .IoGateState
        _m046 uint8_t                                   sm_waiting_for_io_completion;                         //{ +0x065c    +0x06bc    +0x06bc    +0x06bc    } | .SmWaitingForIoCompletion
        _m047 struct hid::rt_power_data_t               rt_power_data;                                        //{ +0x0660    +0x06c0    +0x06c0    +0x06c0    } | .rtPowerData
        _m048 struct hid::rt_power_state_t              rt_power_state;                                       //{ +0x067c    +0x06e8    +0x06f4    +0x06e8    } | .rtPowerState
        _m049 struct hid::rt_power_engine_t             rt_power_engine;                                      //{ +0x0688    +0x06f0    +0x0700    +0x06f0    } | .rtPowerEngine
        _m050 struct nt::kevent_t                       pnp_event;                                            //{ +0x0698    +0x0718    +0x0728    +0x0718    } | .pnpEvent
        _m051 int32_t                                   pnp_status;                                           //{ +0x06b0    +0x0730    +0x0740    +0x0730    } | .pnpStatus
        _m052 int32_t                                   in_flight_io_count;                                   //{ +0x06b4    +0x0734    +0x0744    +0x0734    } | .InFlightIoCount
        _m053 enum nt::device_power_state_t             target_dx_state;                                      //{ +0x06b8    +0x0738    +0x0748    +0x0738    } | .TargetDxState
        _m054 struct hid::pofx_ref_tracker_t            po_fx_ref_tracker;                                    //{ +0x06bc    +0x073c    +0x074c    +0x073c    } | .PoFxRefTracker
        _m055 struct hid::devicereset_t                 device_reset;                                         //{ +0x06d0    +0x0750    +0x0760    +0x0750    } | .DeviceReset
        _m056 int64_t                                   last_trace_logging_time;                              //{ +0x0700    +0x07a8    +0x07f0    +0x07a8    } | .LastTraceLoggingTime
        _m057 uint8_t                                   is_on_usb;                                            //{ +0x0708    +0x07b0    +0x07f8    +0x07b0    } | .IsOnUSB
                                                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
        //                                                                                                  
        _m058 wchar_t*                                  device_instance_path;                                 //{ +0x0010    +0x0010    +0x0010    } | .DeviceInstancePath
        _m059 uint32_t                                  device_instance_path_size;                            //{ +0x0018    +0x0018    +0x0018    } | .DeviceInstancePathSize
        _m060 wchar_t*                                  device_description;                                   //{ +0x0020    +0x0020    +0x0020    } | .DeviceDescription
        _m061 uint32_t                                  device_description_size;                              //{ +0x0028    +0x0028    +0x0028    } | .DeviceDescriptionSize
        _m062 wchar_t*                                  device_service_name;                                  //{ +0x0030    +0x0030    +0x0030    } | .DeviceServiceName
        _m063 uint32_t                                  device_service_name_size;                             //{ +0x0038    +0x0038    +0x0038    } | .DeviceServiceNameSize
        _m064 wchar_t*                                  device_upper_filters;                                 //{ +0x0040    +0x0040    +0x0040    } | .DeviceUpperFilters
        _m065 uint32_t                                  device_upper_filters_size;                            //{ +0x0048    +0x0048    +0x0048    } | .DeviceUpperFiltersSize
        _m066 wchar_t*                                  device_lower_filters;                                 //{ +0x0050    +0x0050    +0x0050    } | .DeviceLowerFilters
        _m067 uint32_t                                  device_lower_filters_size;                            //{ +0x0058    +0x0058    +0x0058    } | .DeviceLowerFiltersSize
        _m068 struct pci::recorder_log_t*               recorder_log_device_info;                             //{ +0x02a8    +0x02a8    +0x02a8    } | .recorderLogDeviceInfo
        _m069 struct pci::recorder_log_t*               recorder_log_int_reports;                             //{ +0x02b0    +0x02b0    +0x02b0    } | .recorderLogIntReports
        _m070 enum hid::power_policy_t                  current_power_policy;                                 //{ +0x0700    +0x0710    +0x0700    } | .CurrentPowerPolicy
        _m071 int64_t                                   suppress_input_entry_time;                            //{ +0x0708    +0x0718    +0x0708    } | .SuppressInputEntryTime
        _m072 uint64_t                                  po_scenario_instance_id;                              //{ +0x0710    +0x0720    +0x0710    } | .PoScenarioInstanceId
        _m073 struct hid::devicepresence_t              device_presence;                                      //{ +0x0780    +0x0790    +0x0780    } | .DevicePresence
        _m074 uint8_t                                   write_report_ex_supported;                            //{ +0x07a0    +0x07b0    +0x07a0    } | .WriteReportExSupported
        _m075 uint8_t                                   combo_hardware_id_v2_enabled;                         //{ +0x07a1    +0x07b1    +0x07a1    } | .ComboHardwareIdV2Enabled
        _m076 uint64_t                                  num_read_reports;                                     //{ +0x07b8    +0x0800    +0x07b8    } | .NumReadReports
        _m077 uint64_t                                  num_read_reports_since_start;                         //{ +0x07c0    +0x0808    +0x07c0    } | .NumReadReportsSinceStart
        _m078 uint64_t                                  num_read_reports_since_presence;                      //{ +0x07c8    +0x0810    +0x07c8    } | .NumReadReportsSincePresence
        _m079 uint64_t                                  num_read_reports_since_d0;                            //{ +0x07d0    +0x0818    +0x07d0    } | .NumReadReportsSinceD0
        _m080 uint64_t                                  num_read_reports_since_capture_state;                 //{ +0x07d8    +0x0820    +0x07d8    } | .NumReadReportsSinceCaptureState
        _m081 int64_t                                   last_read_report_success_time;                        //{ +0x07e0    +0x0828    +0x07e0    } | .LastReadReportSuccessTime
        _m082 int64_t                                   last_int_read_completion_time;                        //{ +0x07e0    +0x0828    +0x07e0    } | .LastIntReadCompletionTime
        _m083 int32_t                                   last_read_report_status;                              //{ +0x07e8    +0x0830    +0x07e8    } | .LastReadReportStatus
        _m084 int32_t                                   last_int_read_completion_status;                      //{ +0x07e8    +0x0830    +0x07e8    } | .LastIntReadCompletionStatus
        _m085 int64_t                                   last_stop_idle_for_io_time;                           //{ +0x07f0    +0x0838    +0x07f0    } | .LastStopIdleForIoTime
        _m086 uint8_t                                   debug_break_on_int_read_completion;                   //{ +0x07f8    +0x0840    +0x07f8    } | .DebugBreakOnIntReadCompletion
        _m087 struct hid::ss_component_t*               sleepstudy_unstable_pdo;                              //{ +0x0800    +0x0848    +0x0800    } | .SleepstudyUnstablePdo
        _m088 struct hid::ss_component_t*               sleepstudy_hardware_io;                               //{ +0x0808    +0x0850    +0x0808    } | .SleepstudyHardwareIo
        _m089 struct hid::ss_component_t*               sleepstudy_software_io;                               //{ +0x0810    +0x0858    +0x0810    } | .SleepstudySoftwareIo
        _m090 struct hid::ss_component_t*               sleepstudy_state_machine;                             //{ +0x0818    +0x0860    +0x0818    } | .SleepstudyStateMachine
        _m091 struct hid::ss_component_t*               sleepstudy_no_epm;                                    //{ +0x0820    +0x0868    +0x0820    } | .SleepstudyNoEpm
        _m092 uint32_t                                  pending_po_fx_power_not_required;                     //{ +0x0828    +0x0870    +0x0828    } | .PendingPoFxPowerNotRequired
        _m093 uint8_t                                   idle_irp_failed_before_dx_completion;                 //{ +0x082c    +0x0874    +0x082c    } | .IdleIrpFailedBeforeDxCompletion
        _m094 int64_t                                   waiting_for_required_callback_dx_no_wake_entry_time;  //{ +0x0830    +0x0878    +0x0830    } | .WaitingForRequiredCallback_Dx_NoWake_EntryTime
        _m095 int64_t                                   waiting_for_required_callback_dx_no_wake_exit_time;   //{ +0x0838    +0x0880    +0x0838    } | .WaitingForRequiredCallback_Dx_NoWake_ExitTime
        _m096 int64_t                                   dx_no_wake_entry_time;                                //{ +0x0840    +0x0888    +0x0840    } | .Dx_NoWake_EntryTime
        _m097 int64_t                                   dx_no_wake_exit_time;                                 //{ +0x0848    +0x0890    +0x0848    } | .Dx_NoWake_ExitTime
                                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                                    
        //                                                                                                  
        _m098 void*                                     cs_handle;                                            //{ +0x0220    +0x0268    +0x0268    } | .csHandle
        _m099 uint32_t                                  cs_state;                                             //{ +0x0228    +0x0270    +0x0270    } | .csState
                                                                                                            
        // Windows 10 v2004, Windows 10 v20H2                                                               
        //                                                                                                  
        _m100 struct ex::wnf_subscription_t*            wnf_subscription_suppress_input;                      //{ +0x0278    +0x0278    } | .wnfSubscriptionSuppressInput
                                                                                                            
        // Windows 11                                                                                       
        //                                                                                                  
        _m101 void*                                     power_setting_callback_handle;                        //{ +0x0268    } | .PowerSettingCallbackHandle
        _m102 uint32_t                                  power_setting_callback_state;                         //{ +0x0270    } | .PowerSettingCallbackState
        _m103 struct ex::wnf_subscription_t*            wnf_subscription_system_input_suppression;            //{ +0x0278    } | .wnfSubscriptionSystemInputSuppression
        _m104 uint8_t                                   pdo_reenumerate_self_interface_enabled;               //{ +0x07b2    } | .PdoReenumerateSelfInterfaceEnabled
        _m105 struct nt::fast_mutex_t                   collection_pdo_reenumerate_mutex;                     //{ +0x07b8    } | .CollectionPdoReenumerateMutex
        _m106 uint32_t                                  has_dumped_to_wpp;                                    //{ +0x0898    } | .HasDumpedToWpp
                                                                                                            
        SDK_MAGIC_PROPERTIES( "_FDO_EXTENSION.$", 0x850, true, 0x87b72ba2d1f04226 );                                                    
        SDK_DYNAMIC_SIZE( fdo_extension_t );                                                                
    };                                                                                                      
};
#include "magic/fdo_extension_t.end.hpp"
