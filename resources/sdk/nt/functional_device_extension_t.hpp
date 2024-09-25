#pragma once
#include <sdkgen/support_library.hpp>
#include "kdpc_t.hpp"
#include "kevent_t.hpp"
#include "ktimer_t.hpp"
#include "disk_geometry_t.hpp"
#include "device_power_state_t.hpp"
#include "scsi_request_block_t.hpp"
#include "class_power_context_t.hpp"
#include "file_object_extension_t.hpp"
#include "common_device_extension_t.hpp"

namespace stor::port { struct sense_data_t; }

#include "magic/functional_device_extension_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct kthread_t;
    struct device_object_t;
    struct additional_fdo_data_t;
    struct class_private_fdo_data_t;
    struct failure_prediction_info_t;
    struct storage_device_descriptor_t;
    struct storage_adapter_descriptor_t;
    struct class_function_support_info_t;
    struct media_change_detection_info_t;
    struct storage_miniport_descriptor_t;

    // [struct _FUNCTIONAL_DEVICE_EXTENSION]
    // => WDK 10 (NV)
    //
    struct functional_device_extension_t                                             
    {                                                                                
        // WDK 10                                                                    
        //                                                                           
        _m000 uint32_t                                  version;                       //{ +0x0000    } | .Version
        _m001 struct nt::device_object_t*               device_object;                 //{ +0x0008    } | .DeviceObject
        _m002 struct nt::common_device_extension_t      common_extension;              //{ +0x0000    } | .CommonExtension
        _m003 struct nt::device_object_t*               lower_pdo;                     //{ +0x0200    } | .LowerPdo
        _m004 struct nt::storage_device_descriptor_t*   device_descriptor;             //{ +0x0208    } | .DeviceDescriptor
        _m005 struct nt::storage_adapter_descriptor_t*  adapter_descriptor;            //{ +0x0210    } | .AdapterDescriptor
        _m006 enum nt::device_power_state_t             device_power_state;            //{ +0x0218    } | .DevicePowerState
        _m007 uint32_t                                  dm_byte_skew;                  //{ +0x021c    } | .DMByteSkew
        _m008 uint32_t                                  dm_skew;                       //{ +0x0220    } | .DMSkew
        _m009 uint8_t                                   dm_active;                     //{ +0x0224    } | .DMActive
        _m010 uint8_t                                   sense_data_length;             //{ +0x0225    } | .SenseDataLength
        _m011 struct nt::disk_geometry_t                disk_geometry;                 //{ +0x0228    } | .DiskGeometry
        _m012 struct stor::port::sense_data_t*          sense_data;                    //{ +0x0240    } | .SenseData
        _m013 uint32_t                                  time_out_value;                //{ +0x0248    } | .TimeOutValue
        _m014 uint32_t                                  device_number;                 //{ +0x024c    } | .DeviceNumber
        _m015 uint32_t                                  srb_flags;                     //{ +0x0250    } | .SrbFlags
        _m016 uint32_t                                  error_count;                   //{ +0x0254    } | .ErrorCount
        _m017 int32_t                                   lock_count;                    //{ +0x0258    } | .LockCount
        _m018 int32_t                                   protected_lock_count;          //{ +0x025c    } | .ProtectedLockCount
        _m019 int32_t                                   internal_lock_count;           //{ +0x0260    } | .InternalLockCount
        _m020 struct nt::kevent_t                       eject_synchronization_event;   //{ +0x0268    } | .EjectSynchronizationEvent
        _m021 uint16_t                                  device_flags;                  //{ +0x0280    } | .DeviceFlags
        _m022 uint8_t                                   sector_shift;                  //{ +0x0282    } | .SectorShift
        _m023 uint8_t                                   cdb_force_unit_access;         //{ +0x0283    } | .CdbForceUnitAccess
        _m024 struct nt::media_change_detection_info_t* media_change_detection_info;   //{ +0x0288    } | .MediaChangeDetectionInfo
        _m025 struct nt::file_object_extension_t        kernel_mode_mcn_context;       //{ +0x02a0    } | .KernelModeMcnContext
        _m026 uint32_t                                  media_change_count;            //{ +0x02b8    } | .MediaChangeCount
        _m027 void*                                     device_directory;              //{ +0x02c0    } | .DeviceDirectory
        _m028 uint64_t                                  release_queue_spin_lock;       //{ +0x02c8    } | .ReleaseQueueSpinLock
        _m029 struct nt::irp_t*                         release_queue_irp;             //{ +0x02d0    } | .ReleaseQueueIrp
        _m030 struct nt::scsi_request_block_t           release_queue_srb;             //{ +0x02d8    } | .ReleaseQueueSrb
        _m031 uint8_t                                   release_queue_needed;          //{ +0x0330    } | .ReleaseQueueNeeded
        _m032 uint8_t                                   release_queue_in_progress;     //{ +0x0331    } | .ReleaseQueueInProgress
        _m033 uint8_t                                   release_queue_irp_from_pool;   //{ +0x0332    } | .ReleaseQueueIrpFromPool
        _m034 uint8_t                                   failure_predicted;             //{ +0x0333    } | .FailurePredicted
        _m035 uint32_t                                  failure_reason;                //{ +0x0334    } | .FailureReason
        _m036 struct nt::failure_prediction_info_t*     failure_prediction_info;       //{ +0x0338    } | .FailurePredictionInfo
        _m037 uint8_t                                   power_down_in_progress;        //{ +0x0340    } | .PowerDownInProgress
        _m038 uint32_t                                  enumeration_interlock;         //{ +0x0344    } | .EnumerationInterlock
        _m039 struct nt::kevent_t                       child_lock;                    //{ +0x0348    } | .ChildLock
        _m040 struct nt::kthread_t*                     child_lock_owner;              //{ +0x0360    } | .ChildLockOwner
        _m041 uint32_t                                  child_lock_acquisition_count;  //{ +0x0368    } | .ChildLockAcquisitionCount
        _m042 uint32_t                                  scan_for_special_flags;        //{ +0x036c    } | .ScanForSpecialFlags
        _m043 struct nt::kdpc_t                         power_retry_dpc;               //{ +0x0370    } | .PowerRetryDpc
        _m044 struct nt::ktimer_t                       power_retry_timer;             //{ +0x03b0    } | .PowerRetryTimer
        _m045 struct nt::class_power_context_t          power_context;                 //{ +0x03f0    } | .PowerContext
        _m046 struct nt::class_private_fdo_data_t*      private_fdo_data;              //{ +0x0478    } | .PrivateFdoData
        _m047 struct nt::class_function_support_info_t* function_support_info;         //{ +0x0480    } | .FunctionSupportInfo
        _m048 struct nt::storage_miniport_descriptor_t* miniport_descriptor;           //{ +0x0488    } | .MiniportDescriptor
        _m049 struct nt::additional_fdo_data_t*         additional_fdo_data;           //{ +0x0490    } | .AdditionalFdoData
                                                                                     
        SDK_NONVOL_PROPERTIES( "_FUNCTIONAL_DEVICE_EXTENSION.$", 0x0, false, 0x6121542f0e2e16b0 );                             
        SDK_FIXED_SIZE( functional_device_extension_t, 0x4c0 );                             
    };                                                                               
};
#include "magic/functional_device_extension_t.end.hpp"
SDK_VERIFY( struct nt::functional_device_extension_t, 0x4c0 );
