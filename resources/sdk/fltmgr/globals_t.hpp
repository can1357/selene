#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "../nt/fast_mutex_t.hpp"
#include "../nt/lock_operation_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "flt_resource_list_head_t.hpp"
#include "throttled_work_item_ctrl_t.hpp"
#include "../nt/paged_lookaside_list_t.hpp"
#include "../nt/npaged_lookaside_list_t.hpp"
#include "../wmi/fltio_notify_routines_t.hpp"

namespace ex { struct push_lock_cache_aware_legacy_t; }
namespace ex { struct timer_t;                        }
namespace nt { struct device_object_t;                }
namespace nt { struct driver_object_t;                }
namespace nt { struct kresourcemanager_t;             }
namespace nt { struct object_type_t;                  }

#include "magic/globals_t.start.hpp"
namespace fltmgr
{
    // [struct _GLOBALS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct globals_t                                                                                        
    {                                                                                                       
        struct u0_fltp_parameter_offset_table_t                                                             
        {                                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                
            //                                                                                              
            _m49 enum nt::lock_operation_t desired_access;                                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DesiredAccess
            _m50 uint8_t                   mdl_address_offset;                                                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MdlAddressOffset
            _m51 uint8_t                   buffer_offset;                                                     //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .BufferOffset
            _m52 uint8_t                   length_offset;                                                     //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .LengthOffset
            _m53 uint8_t                   reserved_offset;                                                   //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .ReservedOffset
                                                                                                            
            SDK_MAGIC_PROPERTIES( "_GLOBALS.FltpParameterOffsetTable.$", 0x8, true, 0xa6dfae9003e39285 );                                                                
            SDK_FIXED_SIZE( u0_fltp_parameter_offset_table_t, 0x8 );                                                                
        };                                                                                                  
                                                                                                            
        using manual_device_attach_timer_t = sdk::variant<struct nt::ktimer_t, struct ex::timer_t*>;                                             
                                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                                  
        _m000 uint32_t                                         debug_flags;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DebugFlags
        _m001 uint64_t                                         trace_flags;                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TraceFlags
        _m002 uint32_t                                         g_flags;                                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GFlags
        _m003 uint64_t                                         reg_handle;                                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RegHandle
        _m004 uint32_t                                         num_processors;                                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NumProcessors
        _m005 uint32_t                                         cache_line_size;                               //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .CacheLineSize
        _m006 uint32_t                                         aligned_instance_tracking_list_size;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AlignedInstanceTrackingListSize
        _m007 struct nt::device_object_t*                      control_device_object;                         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ControlDeviceObject
        _m008 struct nt::driver_object_t*                      driver_object;                                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DriverObject
        _m009 void*                                            ktm_transaction_manager_handle;                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .KtmTransactionManagerHandle
        _m010 void*                                            tx_vol_ktm_resource_manager_handle;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .TxVolKtmResourceManagerHandle
        _m011 struct nt::kresourcemanager_t*                   tx_vol_ktm_resource_manager;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .TxVolKtmResourceManager
        _m012 struct fltmgr::flt_resource_list_head_t          frame_list;                                    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .FrameList
        _m013 struct nt::fast_mutex_t                          phase2_init_lock;                              //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .Phase2InitLock
        _m014 nt::unicode_view                                 registry_path;                                 //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .RegistryPath
        _m015 sdk::array<wchar_t, 160>                         registry_path_buffer;                          //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .RegistryPathBuffer
        _m016 struct ex::push_lock_cache_aware_legacy_t*       global_volume_operation_lock;                  //{ +0x0260    +0x0260    +0x0260    +0x0260    } | .GlobalVolumeOperationLock
        _m017 struct nt::object_type_t*                        fltp_server_port_object_type;                  //{ +0x0268    +0x0268    +0x0268    +0x0268    } | .FltpServerPortObjectType
        _m018 struct nt::object_type_t*                        fltp_communication_port_object_type;           //{ +0x0270    +0x0270    +0x0270    +0x0270    } | .FltpCommunicationPortObjectType
        _m019 struct nt::device_object_t*                      msg_device_object;                             //{ +0x0278    +0x0278    +0x0278    +0x0278    } | .MsgDeviceObject
        _m020 manual_device_attach_timer_t                     manual_device_attach_timer;                    //{ +0x0280    +0x0280    +0x0280    +0x0280    } | .ManualDeviceAttachTimer
        _m021 struct nt::work_queue_item_t                     manual_device_attach_work;                     //{ +0x0300    +0x0288    +0x0288    +0x0288    } | .ManualDeviceAttachWork
        _m022 int32_t                                          manual_device_attach_limit;                    //{ +0x0320    +0x02a8    +0x02a8    +0x02a8    } | .ManualDeviceAttachLimit
        _m023 int32_t                                          manual_attach_delay_counter;                   //{ +0x0324    +0x02ac    +0x02ac    +0x02ac    } | .ManualAttachDelayCounter
        _m024 uint32_t                                         fast_manual_attach_timer_period;               //{ +0x0328    +0x02b0    +0x02b0    +0x02b0    } | .FastManualAttachTimerPeriod
        _m025 uint32_t                                         manual_attach_timer_period;                    //{ +0x032c    +0x02b4    +0x02b4    +0x02b4    } | .ManualAttachTimerPeriod
        _m026 uint32_t                                         manual_attach_delay;                           //{ +0x0330    +0x02b8    +0x02b8    +0x02b8    } | .ManualAttachDelay
        _m027 uint8_t                                          manual_attach_ignored_devices;                 //{ +0x0334    +0x02bc    +0x02bc    +0x02bc    } | .ManualAttachIgnoredDevices
        _m028 uint8_t                                          manual_attach_only_once_devices;               //{ +0x0335    +0x02bd    +0x02bd    +0x02bd    } | .ManualAttachOnlyOnceDevices
        _m029 uint8_t                                          manual_attach_fast_attach_devices;             //{ +0x0336    +0x02be    +0x02be    +0x02be    } | .ManualAttachFastAttachDevices
        _m030 struct nt::npaged_lookaside_list_t               targeted_io_ctrl_lookaside_list;               //{ +0x0340    +0x02c0    +0x0300    +0x02c0    } | .TargetedIoCtrlLookasideList
        _m031 struct nt::paged_lookaside_list_t                io_device_hint_lookaside_list;                 //{ +0x03c0    +0x0340    +0x0380    +0x0340    } | .IoDeviceHintLookasideList
        _m032 struct nt::npaged_lookaside_list_t               stream_list_ctrl_lookaside_list;               //{ +0x0440    +0x03c0    +0x0400    +0x03c0    } | .StreamListCtrlLookasideList
        _m033 struct nt::npaged_lookaside_list_t               file_list_ctrl_lookaside_list;                 //{ +0x04c0    +0x0440    +0x0480    +0x0440    } | .FileListCtrlLookasideList
        _m034 struct nt::npaged_lookaside_list_t               name_cache_create_ctrl_lookaside_list;         //{ +0x0540    +0x04c0    +0x0500    +0x04c0    } | .NameCacheCreateCtrlLookasideList
        _m035 struct nt::npaged_lookaside_list_t               async_io_context_lookaside_list;               //{ +0x05c0    +0x0540    +0x0580    +0x0540    } | .AsyncIoContextLookasideList
        _m036 struct nt::npaged_lookaside_list_t               work_item_lookaside_list;                      //{ +0x0640    +0x05c0    +0x0600    +0x05c0    } | .WorkItemLookasideList
        _m037 struct nt::npaged_lookaside_list_t               name_control_lookaside_list;                   //{ +0x06c0    +0x0640    +0x0680    +0x0640    } | .NameControlLookasideList
        _m038 struct nt::npaged_lookaside_list_t               operation_status_ctrl_lookaside_list;          //{ +0x0740    +0x06c0    +0x0700    +0x06c0    } | .OperationStatusCtrlLookasideList
        _m039 struct nt::npaged_lookaside_list_t               name_generation_context_lookaside_list;        //{ +0x07c0    +0x0740    +0x0780    +0x0740    } | .NameGenerationContextLookasideList
        _m040 struct nt::paged_lookaside_list_t                file_lock_lookaside_list;                      //{ +0x0840    +0x07c0    +0x0800    +0x07c0    } | .FileLockLookasideList
        _m041 struct nt::npaged_lookaside_list_t               txn_parameter_block_lookaside_list;            //{ +0x08c0    +0x0840    +0x0880    +0x0840    } | .TxnParameterBlockLookasideList
        _m042 struct nt::npaged_lookaside_list_t               tx_ctx_extension_n_paged_lookaside_list;       //{ +0x0940    +0x08c0    +0x0900    +0x08c0    } | .TxCtxExtensionNPagedLookasideList
        _m043 struct nt::npaged_lookaside_list_t               tx_vol_ctx_lookaside_list;                     //{ +0x09c0    +0x0940    +0x0980    +0x0940    } | .TxVolCtxLookasideList
        _m044 struct nt::paged_lookaside_list_t                tx_vol_stream_list_ctrl_entry_lookaside_list;  //{ +0x0a40    +0x09c0    +0x0a00    +0x09c0    } | .TxVolStreamListCtrlEntryLookasideList
        _m045 struct nt::npaged_lookaside_list_t               section_list_ctrl_lookaside_list;              //{ +0x0ac0    +0x0a40    +0x0a80    +0x0a40    } | .SectionListCtrlLookasideList
        _m046 struct nt::npaged_lookaside_list_t               section_ctx_extension_lookaside_list;          //{ +0x0b40    +0x0ac0    +0x0b00    +0x0ac0    } | .SectionCtxExtensionLookasideList
        _m047 struct nt::paged_lookaside_list_t                open_reparse_list_lookaside_list;              //{ +0x0bc0    +0x0b40    +0x0b80    +0x0b40    } | .OpenReparseListLookasideList
        _m048 struct nt::paged_lookaside_list_t                open_reparse_list_entry_lookaside_list;        //{ +0x0c40    +0x0bc0    +0x0c00    +0x0bc0    } | .OpenReparseListEntryLookasideList
        _m054 sdk::array<u0_fltp_parameter_offset_table_t, 28> fltp_parameter_offset_table;                   //{ +0x0cc0    +0x10c0    +0x1100    +0x10c0    } | .FltpParameterOffsetTable
        _m055 struct fltmgr::throttled_work_item_ctrl_t        throttled_work_ctrl;                           //{ +0x0da0    +0x11a0    +0x11e0    +0x11a0    } | .ThrottledWorkCtrl
        _m056 uint32_t                                         lost_item_delay_in_seconds;                    //{ +0x0df0    +0x11f0    +0x1230    +0x11f0    } | .LostItemDelayInSeconds
        _m057 nt::list_entry_t                                 verified_filters_list;                         //{ +0x0df8    +0x11f8    +0x1238    +0x11f8    } | .VerifiedFiltersList
        _m058 uint64_t                                         verified_filters_lock;                         //{ +0x0e08    +0x1208    +0x1248    +0x1208    } | .VerifiedFiltersLock
        _m059 int32_t                                          verified_resource_link_failures;               //{ +0x0e10    +0x1210    +0x1250    +0x1210    } | .VerifiedResourceLinkFailures
        _m060 int32_t                                          verified_resource_unlink_failures;             //{ +0x0e14    +0x1214    +0x1254    +0x1214    } | .VerifiedResourceUnlinkFailures
        _m061 struct wmi::fltio_notify_routines_t*             perf_trace_routines;                           //{ +0x0e18    +0x1218    +0x1258    +0x1218    } | .PerfTraceRoutines
        _m062 struct wmi::fltio_notify_routines_t              dummy_perf_trace_routines;                     //{ +0x0e20    +0x1220    +0x1260    +0x1220    } | .DummyPerfTraceRoutines
        _m063 int64_t                                          rename_counter;                                //{ +0x0e50    +0x1250    +0x1290    +0x1250    } | .RenameCounter
        _m064 int32_t                                          filter_supported_features_mode;                //{ +0x0e58    +0x1258    +0x1298    +0x1258    } | .FilterSupportedFeaturesMode
        _m065 uint64_t                                         initial_rundown_size;                          //{ +0x0e60    +0x1260    +0x12a0    +0x1260    } | .InitialRundownSize
                                                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                   
        //                                                                                                  
        _m066 struct nt::paged_lookaside_list_t                query_on_create_lookaside_list;                //{ +0x0c40    +0x0c80    +0x0c40    } | .QueryOnCreateLookasideList
        _m067 struct nt::paged_lookaside_list_t                name_buffer_lookaside_list;                    //{ +0x0cc0    +0x0d00    +0x0cc0    } | .NameBufferLookasideList
        _m068 sdk::array<struct nt::paged_lookaside_list_t, 7> name_cache_node_lookaside_lists;               //{ +0x0d40    +0x0d80    +0x0d40    } | .NameCacheNodeLookasideLists
                                                                                                            
        // Windows 10 v1607                                                                                 
        //                                                                                                  
        _m069 struct nt::kdpc_t                                manual_device_attach_timer_dpc;                //{ +0x02c0    } | .ManualDeviceAttachTimerDpc
                                                                                                            
        // Windows 11                                                                                       
        //                                                                                                  
        _m070 uint32_t                                         callback_stack_swap_threshold;                 //{ +0x02c0    } | .CallbackStackSwapThreshold
                                                                                                            
        SDK_MAGIC_PROPERTIES( "_GLOBALS.$", 0x1280, true, 0xd09224548dbe3381 );                                             
        SDK_DYNAMIC_SIZE( globals_t );                                                                      
    };                                                                                                      
};
#include "magic/globals_t.end.hpp"
SDK_VERIFY( struct fltmgr::globals_t::u0_fltp_parameter_offset_table_t, 0x8 );
