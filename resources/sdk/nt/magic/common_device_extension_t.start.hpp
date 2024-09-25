#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMON_DEVICE_EXTENSION.Version", version, 0x0, 0x20, true, 0x2f0cded077a9dbd8)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_COMMON_DEVICE_EXTENSION.DeviceObject", device_object, 0x40, 0x40, true, 0x3e84104d936354c4)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_COMMON_DEVICE_EXTENSION.LowerDeviceObject", lower_device_object, 0x80, 0x40, true, 0x387bdbc7aece6bf8)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::functional_device_extension_t*), "_COMMON_DEVICE_EXTENSION.PartitionZeroExtension", partition_zero_extension, 0xc0, 0x40, true, 0xc03dfe5ff53ab9cf)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_driver_extension_t*), "_COMMON_DEVICE_EXTENSION.DriverExtension", driver_extension, 0x100, 0x40, true, 0xb2b73faaddba89c1)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_COMMON_DEVICE_EXTENSION.RemoveLock", remove_lock, 0x140, 0x20, true, 0xbbd9889e33510671)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_COMMON_DEVICE_EXTENSION.RemoveEvent", remove_event, 0x180, 0xc0, true, 0xd79ca80b7fe70953)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_COMMON_DEVICE_EXTENSION.RemoveTrackingSpinlock", remove_tracking_spinlock, 0x240, 0x40, true, 0x68d2e4bed1864e29)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_COMMON_DEVICE_EXTENSION.RemoveTrackingList", remove_tracking_list, 0x280, 0x40, true, 0xeeae243c6a47a7ec)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_COMMON_DEVICE_EXTENSION.RemoveTrackingUntrackedCount", remove_tracking_untracked_count, 0x2c0, 0x20, true, 0xcb219cd1b93e3088)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_COMMON_DEVICE_EXTENSION.DriverData", driver_data, 0x300, 0x40, true, 0xdd538450d909e627)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_COMMON_DEVICE_EXTENSION.IsFdo", is_fdo, 0x340, 0x1, true, 0x8e8557b4389c5b28, 1, uint8_t)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_COMMON_DEVICE_EXTENSION.IsInitialized", is_initialized, 0x341, 0x1, true, 0x447f829305b913e5, 1, uint8_t)
#define _m013 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_COMMON_DEVICE_EXTENSION.IsSrbLookasideListInitialized", is_srb_lookaside_list_initialized, 0x342, 0x1, true, 0x571c024781228fc6, 1, uint8_t)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_COMMON_DEVICE_EXTENSION.PreviousState", previous_state, 0x348, 0x8, true, 0x20de2115d48e142a)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_COMMON_DEVICE_EXTENSION.CurrentState", current_state, 0x350, 0x8, true, 0x2e7e4e44147623)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMON_DEVICE_EXTENSION.IsRemoved", is_removed, 0x360, 0x20, true, 0xbb1eaeae97b7b75)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_COMMON_DEVICE_EXTENSION.DeviceName", device_name, 0x380, 0x80, true, 0xff156d5c06e526b4)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::physical_device_extension_t*), "_COMMON_DEVICE_EXTENSION.ChildList", child_list, 0x400, 0x40, true, 0x5884782518d8a247)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMON_DEVICE_EXTENSION.PartitionNumber", partition_number, 0x440, 0x20, true, 0x84d6b37d7b6e5af9)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_COMMON_DEVICE_EXTENSION.PartitionLength", partition_length, 0x480, 0x40, true, 0x119b24fe7add1f1d)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_COMMON_DEVICE_EXTENSION.StartingOffset", starting_offset, 0x4c0, 0x40, true, 0xd915da437109387f)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_dev_info_t*), "_COMMON_DEVICE_EXTENSION.DevInfo", dev_info, 0x500, 0x40, true, 0xdb1ce6d7794c0fb4)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMON_DEVICE_EXTENSION.PagingPathCount", paging_path_count, 0x540, 0x20, true, 0x6292f9e137ec3d57)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMON_DEVICE_EXTENSION.DumpPathCount", dump_path_count, 0x560, 0x20, true, 0x75cbb274116a4039)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMON_DEVICE_EXTENSION.HibernationPathCount", hibernation_path_count, 0x580, 0x20, true, 0xb92cabd8e54235f)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_COMMON_DEVICE_EXTENSION.PathCountEvent", path_count_event, 0x5c0, 0xc0, true, 0xf32f7827c1dfe9bf)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_COMMON_DEVICE_EXTENSION.SrbLookasideList", srb_lookaside_list, 0x800, 0x0, true, 0x125753c844dd888d)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_COMMON_DEVICE_EXTENSION.MountedDeviceInterfaceName", mounted_device_interface_name, 0xc00, 0x80, true, 0x8abb5b5ca2eefecc)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMON_DEVICE_EXTENSION.GuidCount", guid_count, 0xc80, 0x20, true, 0x26ddccf71da39d6b)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guidreginfo_t*), "_COMMON_DEVICE_EXTENSION.GuidRegInfo", guid_reg_info, 0xcc0, 0x40, true, 0x4a55427a9f78bd09)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dictionary_t), "_COMMON_DEVICE_EXTENSION.FileObjectDictionary", file_object_dictionary, 0xd00, 0xc0, true, 0x87053ebc608c27ee)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_private_common_data_t*), "_COMMON_DEVICE_EXTENSION.PrivateCommonData", private_common_data, 0xdc0, 0x40, true, 0x7ec834ac765c5b54)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>**), "_COMMON_DEVICE_EXTENSION.DispatchTable", dispatch_table, 0xe00, 0x40, true, 0x78c860d505d5b852)
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
#endif