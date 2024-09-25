#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FUNCTIONAL_DEVICE_EXTENSION.Version", version, 0x0, 0x20, true, 0x51954574a0538a58)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_FUNCTIONAL_DEVICE_EXTENSION.DeviceObject", device_object, 0x40, 0x40, true, 0xcf905e7eadec4166)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::common_device_extension_t), "_FUNCTIONAL_DEVICE_EXTENSION.CommonExtension", common_extension, 0x0, 0x0, true, 0x1a0c2727dc227c4e)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_FUNCTIONAL_DEVICE_EXTENSION.LowerPdo", lower_pdo, 0x1000, 0x40, true, 0x6ffef32400288369)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::storage_device_descriptor_t*), "_FUNCTIONAL_DEVICE_EXTENSION.DeviceDescriptor", device_descriptor, 0x1040, 0x40, true, 0x9119d6d9cd77135e)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::storage_adapter_descriptor_t*), "_FUNCTIONAL_DEVICE_EXTENSION.AdapterDescriptor", adapter_descriptor, 0x1080, 0x40, true, 0xbdf4ddd7a1a29cf6)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_FUNCTIONAL_DEVICE_EXTENSION.DevicePowerState", device_power_state, 0x10c0, 0x20, true, 0xd72227b69daadac6)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FUNCTIONAL_DEVICE_EXTENSION.DMByteSkew", dm_byte_skew, 0x10e0, 0x20, true, 0x5e22329c0c17bfaf)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FUNCTIONAL_DEVICE_EXTENSION.DMSkew", dm_skew, 0x1100, 0x20, true, 0xf6dd4f6c45202e4c)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FUNCTIONAL_DEVICE_EXTENSION.DMActive", dm_active, 0x1120, 0x8, true, 0xe37e33812203966e)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FUNCTIONAL_DEVICE_EXTENSION.SenseDataLength", sense_data_length, 0x1128, 0x8, true, 0x3de12a0c24519139)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::disk_geometry_t), "_FUNCTIONAL_DEVICE_EXTENSION.DiskGeometry", disk_geometry, 0x1140, 0xc0, true, 0x609591a696bc656c)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::sense_data_t*), "_FUNCTIONAL_DEVICE_EXTENSION.SenseData", sense_data, 0x1200, 0x40, true, 0xf8f6ba8637d6b071)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FUNCTIONAL_DEVICE_EXTENSION.TimeOutValue", time_out_value, 0x1240, 0x20, true, 0x14a4a0ba5f2447e3)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FUNCTIONAL_DEVICE_EXTENSION.DeviceNumber", device_number, 0x1260, 0x20, true, 0x6c5f79ece4f7a2b2)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FUNCTIONAL_DEVICE_EXTENSION.SrbFlags", srb_flags, 0x1280, 0x20, true, 0xc74c1a08ce34f7da)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FUNCTIONAL_DEVICE_EXTENSION.ErrorCount", error_count, 0x12a0, 0x20, true, 0xaf3d272a1049bf80)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_FUNCTIONAL_DEVICE_EXTENSION.LockCount", lock_count, 0x12c0, 0x20, true, 0xffbe645c52dd0943)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_FUNCTIONAL_DEVICE_EXTENSION.ProtectedLockCount", protected_lock_count, 0x12e0, 0x20, true, 0xcb88d9906bb75fc4)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_FUNCTIONAL_DEVICE_EXTENSION.InternalLockCount", internal_lock_count, 0x1300, 0x20, true, 0x490804d06031bd3b)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_FUNCTIONAL_DEVICE_EXTENSION.EjectSynchronizationEvent", eject_synchronization_event, 0x1340, 0xc0, true, 0x53f8cac004b5b654)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FUNCTIONAL_DEVICE_EXTENSION.DeviceFlags", device_flags, 0x1400, 0x10, true, 0xd50b5bb4abffdd5c)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FUNCTIONAL_DEVICE_EXTENSION.SectorShift", sector_shift, 0x1410, 0x8, true, 0xcd8fe4ed9edd77ab)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FUNCTIONAL_DEVICE_EXTENSION.CdbForceUnitAccess", cdb_force_unit_access, 0x1418, 0x8, true, 0x8324fa24717ea98c)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::media_change_detection_info_t*), "_FUNCTIONAL_DEVICE_EXTENSION.MediaChangeDetectionInfo", media_change_detection_info, 0x1440, 0x40, true, 0xc6024bc9cf2df2f4)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_extension_t), "_FUNCTIONAL_DEVICE_EXTENSION.KernelModeMcnContext", kernel_mode_mcn_context, 0x1500, 0xc0, true, 0x16b5805b539c7b27)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FUNCTIONAL_DEVICE_EXTENSION.MediaChangeCount", media_change_count, 0x15c0, 0x20, true, 0x94e824fbb6611927)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FUNCTIONAL_DEVICE_EXTENSION.DeviceDirectory", device_directory, 0x1600, 0x40, true, 0xe7574a87e35b4e0c)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FUNCTIONAL_DEVICE_EXTENSION.ReleaseQueueSpinLock", release_queue_spin_lock, 0x1640, 0x40, true, 0x994c1f9186f737e1)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_FUNCTIONAL_DEVICE_EXTENSION.ReleaseQueueIrp", release_queue_irp, 0x1680, 0x40, true, 0x8bb3ec6561ff7f3a)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::scsi_request_block_t), "_FUNCTIONAL_DEVICE_EXTENSION.ReleaseQueueSrb", release_queue_srb, 0x16c0, 0xc0, true, 0x3d0ea8b580152f6)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FUNCTIONAL_DEVICE_EXTENSION.ReleaseQueueNeeded", release_queue_needed, 0x1980, 0x8, true, 0x56a39db02026a2e0)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FUNCTIONAL_DEVICE_EXTENSION.ReleaseQueueInProgress", release_queue_in_progress, 0x1988, 0x8, true, 0x126ad395fd639d40)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FUNCTIONAL_DEVICE_EXTENSION.ReleaseQueueIrpFromPool", release_queue_irp_from_pool, 0x1990, 0x8, true, 0x7aa04cd811df3bc3)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FUNCTIONAL_DEVICE_EXTENSION.FailurePredicted", failure_predicted, 0x1998, 0x8, true, 0x42ab05cb3a4dfab9)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FUNCTIONAL_DEVICE_EXTENSION.FailureReason", failure_reason, 0x19a0, 0x20, true, 0x5fe116fb5ba28acf)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::failure_prediction_info_t*), "_FUNCTIONAL_DEVICE_EXTENSION.FailurePredictionInfo", failure_prediction_info, 0x19c0, 0x40, true, 0xee5535cbe2dfc6b1)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FUNCTIONAL_DEVICE_EXTENSION.PowerDownInProgress", power_down_in_progress, 0x1a00, 0x8, true, 0xb50661cf76edd794)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FUNCTIONAL_DEVICE_EXTENSION.EnumerationInterlock", enumeration_interlock, 0x1a20, 0x20, true, 0xe8414a53c93ad671)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_FUNCTIONAL_DEVICE_EXTENSION.ChildLock", child_lock, 0x1a40, 0xc0, true, 0xf64e0c174aeae9a9)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_FUNCTIONAL_DEVICE_EXTENSION.ChildLockOwner", child_lock_owner, 0x1b00, 0x40, true, 0x59f9e30ccbb687e7)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FUNCTIONAL_DEVICE_EXTENSION.ChildLockAcquisitionCount", child_lock_acquisition_count, 0x1b40, 0x20, true, 0x35318739e71a155a)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FUNCTIONAL_DEVICE_EXTENSION.ScanForSpecialFlags", scan_for_special_flags, 0x1b60, 0x20, true, 0x658488639e56eb61)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_FUNCTIONAL_DEVICE_EXTENSION.PowerRetryDpc", power_retry_dpc, 0x1b80, 0x0, true, 0x77d50d192b3cd473)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_FUNCTIONAL_DEVICE_EXTENSION.PowerRetryTimer", power_retry_timer, 0x1d80, 0x0, true, 0x406df017f7ece3df)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_power_context_t), "_FUNCTIONAL_DEVICE_EXTENSION.PowerContext", power_context, 0x1f80, 0x40, true, 0x8b0039426867e577)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_private_fdo_data_t*), "_FUNCTIONAL_DEVICE_EXTENSION.PrivateFdoData", private_fdo_data, 0x23c0, 0x40, true, 0xd54f0c16672bcc75)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_function_support_info_t*), "_FUNCTIONAL_DEVICE_EXTENSION.FunctionSupportInfo", function_support_info, 0x2400, 0x40, true, 0x249bc7223e6b5851)
#define _m048 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::storage_miniport_descriptor_t*), "_FUNCTIONAL_DEVICE_EXTENSION.MiniportDescriptor", miniport_descriptor, 0x2440, 0x40, true, 0x777dd36bc8812bad)
#define _m049 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::additional_fdo_data_t*), "_FUNCTIONAL_DEVICE_EXTENSION.AdditionalFdoData", additional_fdo_data, 0x2480, 0x40, true, 0x66a067ebfa58f959)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#endif