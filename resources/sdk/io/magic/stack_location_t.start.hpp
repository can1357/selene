#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_STACK_LOCATION.MajorFunction", major_function, 0x0, 0x8, true, 0x952dcdc19c48a602)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_create_t), "_IO_STACK_LOCATION.Parameters.Create", create, 0x0, 0x0, true, 0xff946befa88f8a91)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_STACK_LOCATION.MinorFunction", minor_function, 0x8, 0x8, true, 0x781bbe3fe3ac3784)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_create_pipe_t), "_IO_STACK_LOCATION.Parameters.CreatePipe", create_pipe, 0x0, 0x0, true, 0x921b0a2a8ad3a293)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u15_create_mailslot_t), "_IO_STACK_LOCATION.Parameters.CreateMailslot", create_mailslot, 0x0, 0x0, true, 0x8a0a784632d2b739)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_STACK_LOCATION.Flags", flags, 0x10, 0x8, true, 0x571ea016bf8c1cd2)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u20_read_t), "_IO_STACK_LOCATION.Parameters.Read", read, 0x0, 0xc0, true, 0x2fb5af52587827a0)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u25_write_t), "_IO_STACK_LOCATION.Parameters.Write", write, 0x0, 0xc0, true, 0xc4374236d990c051)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_STACK_LOCATION.Control", control, 0x18, 0x8, true, 0x9846e67825d8bbda)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u26_query_directory_t), "_IO_STACK_LOCATION.Parameters.QueryDirectory", query_directory, 0x0, 0x0, true, 0x3fa62fdcce80ff1d)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u31_notify_directory_t), "_IO_STACK_LOCATION.Parameters.NotifyDirectory", notify_directory, 0x0, 0x80, true, 0x99a0b83a2f2871e7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_IO_STACK_LOCATION.Parameters.Create.SecurityContext", security_context, 0x0, 0x40, true, 0x11f5010d6416f1d0)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u36_query_file_t), "_IO_STACK_LOCATION.Parameters.QueryFile", query_file, 0x0, 0x80, true, 0xdf003fd3330eb44b)
#define _m048 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u41_set_file_t), "_IO_STACK_LOCATION.Parameters.SetFile", set_file, 0x0, 0x0, true, 0xd648006b57bac3f5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.Create.Options", options, 0x40, 0x20, true, 0x310cdf56e69510c0)
#define _m053 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u46_query_ea_t), "_IO_STACK_LOCATION.Parameters.QueryEa", query_ea, 0x0, 0x0, true, 0x6fba077b15f4487e)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u51_set_ea_t), "_IO_STACK_LOCATION.Parameters.SetEa", set_ea, 0x0, 0x20, true, 0x28399e88292fdc2a)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u56_query_volume_t), "_IO_STACK_LOCATION.Parameters.QueryVolume", query_volume, 0x0, 0x80, true, 0xd04ef5d4334efa56)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_STACK_LOCATION.Parameters.Create.FileAttributes", file_attributes, 0x80, 0x10, true, 0xf311ac8c6d172f03)
#define _m061 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u61_set_volume_t), "_IO_STACK_LOCATION.Parameters.SetVolume", set_volume, 0x0, 0x80, true, 0x6ad4f1920972486e)
#define _m066 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u62_file_system_control_t), "_IO_STACK_LOCATION.Parameters.FileSystemControl", file_system_control, 0x0, 0x0, true, 0x208603e8c1cb5341)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_STACK_LOCATION.Parameters.Create.ShareAccess", share_access, 0x90, 0x10, true, 0x285c4d58260fca76)
#define _m070 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u67_lock_control_t), "_IO_STACK_LOCATION.Parameters.LockControl", lock_control, 0x0, 0xc0, true, 0xa440a189803c911d)
#define _m075 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u72_device_io_control_t), "_IO_STACK_LOCATION.Parameters.DeviceIoControl", device_io_control, 0x0, 0x0, true, 0xb1b761b334158b85)
#define _m078 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u77_query_security_t), "_IO_STACK_LOCATION.Parameters.QuerySecurity", query_security, 0x0, 0x80, true, 0x36c16029f2dfdb3)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.Create.EaLength", ea_length, 0xc0, 0x20, true, 0x1c146c81b50b4137)
#define _m081 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u82_set_security_t), "_IO_STACK_LOCATION.Parameters.SetSecurity", set_security, 0x0, 0x80, true, 0x79be42091ef4550f)
#define _m084 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u87_mount_volume_t), "_IO_STACK_LOCATION.Parameters.MountVolume", mount_volume, 0x0, 0x80, true, 0x38f17868e3752aab)
#define _m087 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u92_verify_volume_t), "_IO_STACK_LOCATION.Parameters.VerifyVolume", verify_volume, 0x0, 0x80, true, 0x714012a971b88106)
#define _m089 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u93_scsi_t), "_IO_STACK_LOCATION.Parameters.Scsi", scsi, 0x0, 0x40, true, 0x52bf1f7cdb62b06e)
#define _m094 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u98_query_quota_t), "_IO_STACK_LOCATION.Parameters.QueryQuota", query_quota, 0x0, 0x0, true, 0xbeb3ef54f543c037)
#define _m096 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u103_set_quota_t), "_IO_STACK_LOCATION.Parameters.SetQuota", set_quota, 0x0, 0x20, true, 0xd8a463046f2c3d54)
#define _m098 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u104_query_device_relations_t), "_IO_STACK_LOCATION.Parameters.QueryDeviceRelations", query_device_relations, 0x0, 0x20, true, 0x7f18ed3029c76d59)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_IO_STACK_LOCATION.Parameters.CreatePipe.SecurityContext", security_context, 0x0, 0x40, true, 0xa182eff16c4707eb)
#define _m104 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u109_query_interface_t), "_IO_STACK_LOCATION.Parameters.QueryInterface", query_interface, 0x0, 0x0, true, 0xa3cfd20552bea082)
#define _m106 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u114_device_capabilities_t), "_IO_STACK_LOCATION.Parameters.DeviceCapabilities", device_capabilities, 0x0, 0x40, true, 0x6b8cd32b81c5c6f7)
#define _m108 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u119_filter_resource_requirements_t), "_IO_STACK_LOCATION.Parameters.FilterResourceRequirements", filter_resource_requirements, 0x0, 0x40, true, 0xedfe5e186816b06d)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.CreatePipe.Options", options, 0x40, 0x20, true, 0x2808f5feb38aac48)
#define _m113 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u124_read_write_config_t), "_IO_STACK_LOCATION.Parameters.ReadWriteConfig", read_write_config, 0x0, 0x0, true, 0xd82640816c1c4b7b)
#define _m115 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u129_set_lock_t), "_IO_STACK_LOCATION.Parameters.SetLock", set_lock, 0x0, 0x8, true, 0xc4a515295950d566)
#define _m117 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u134_query_id_t), "_IO_STACK_LOCATION.Parameters.QueryId", query_id, 0x0, 0x20, true, 0xe2a6f8242c25f186)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_STACK_LOCATION.Parameters.CreatePipe.ShareAccess", share_access, 0x90, 0x10, true, 0x3458169bfcc0c40a)
#define _m120 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u139_query_device_text_t), "_IO_STACK_LOCATION.Parameters.QueryDeviceText", query_device_text, 0x0, 0x80, true, 0xd3a8debcf3f1e4e0)
#define _m123 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u144_usage_notification_t), "_IO_STACK_LOCATION.Parameters.UsageNotification", usage_notification, 0x0, 0x80, true, 0xa9660ec63d76c44f)
#define _m125 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u149_wait_wake_t), "_IO_STACK_LOCATION.Parameters.WaitWake", wait_wake, 0x0, 0x20, true, 0xef31ed27d825aee9)
#define _m127 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u154_power_sequence_t), "_IO_STACK_LOCATION.Parameters.PowerSequence", power_sequence, 0x0, 0x40, true, 0xbf6a3511cee7cb9d)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::named_pipe_create_parameters_t*), "_IO_STACK_LOCATION.Parameters.CreatePipe.Parameters", parameters, 0xc0, 0x40, true, 0xe5af2bf4f90ddabb)
#define _m133 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u159_power_t), "_IO_STACK_LOCATION.Parameters.Power", power, 0x0, 0x0, true, 0x2f26edc64b984226)
#define _m136 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u164_start_device_t), "_IO_STACK_LOCATION.Parameters.StartDevice", start_device, 0x0, 0x80, true, 0x9e5c7b1dc04b8cb7)
#define _m141 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u169_wmi_t), "_IO_STACK_LOCATION.Parameters.WMI", wmi, 0x0, 0x0, true, 0x509d9867c6f07acd)
#define _m146 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u174_others_t), "_IO_STACK_LOCATION.Parameters.Others", others, 0x0, 0x0, true, 0x41de97bd05ee1588)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_IO_STACK_LOCATION.Parameters.CreateMailslot.SecurityContext", security_context, 0x0, 0x40, true, 0x8e2e58f15c012aaf)
#define _m150 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u179_notify_directory_ex_t), "_IO_STACK_LOCATION.Parameters.NotifyDirectoryEx", notify_directory_ex, 0x0, 0xc0, true, 0x214424973e253b34)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.CreateMailslot.Options", options, 0x40, 0x20, true, 0xab0d2920d08c3fcd)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_STACK_LOCATION.Parameters.CreateMailslot.ShareAccess", share_access, 0x90, 0x10, true, 0xda3be3c89ce97d29)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mailslot_create_parameters_t*), "_IO_STACK_LOCATION.Parameters.CreateMailslot.Parameters", parameters, 0xc0, 0x40, true, 0xc88030de67fbb4ff)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.Read.Length", length, 0x0, 0x20, true, 0x9c114eaa6070140a)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.Read.Key", key, 0x40, 0x20, true, 0x4a3e72bbc4f52a6a)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_STACK_LOCATION.Parameters.Read.ByteOffset", byte_offset, 0x80, 0x40, true, 0xcde8385ff70cac4b)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.Read.Flags", flags, 0x60, 0x20, true, 0x8b84e7afe7620896)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.Write.Length", length, 0x0, 0x20, true, 0xbfad22fac3cdd6f)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.Write.Key", key, 0x40, 0x20, true, 0x5d7210730805ed4d)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_STACK_LOCATION.Parameters.Write.ByteOffset", byte_offset, 0x80, 0x40, true, 0x744d4f3c3110af42)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.Write.Flags", flags, 0x60, 0x20, true, 0x5071324c17921493)
#define _m30 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.QueryDirectory.Length", length, 0x0, 0x20, true, 0xa0908e5dc8b2ed61)
#define _m31 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_IO_STACK_LOCATION.Parameters.QueryDirectory.FileName", file_name, 0x40, 0x40, true, 0x3c5c58c47ebdf622)
#define _m32 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::file_information_class_t), "_IO_STACK_LOCATION.Parameters.QueryDirectory.FileInformationClass", file_information_class, 0x80, 0x20, true, 0x2f12439415cc6b21)
#define _m33 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.QueryDirectory.FileIndex", file_index, 0xc0, 0x20, true, 0xae93837fea6524eb)
#define _m35 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.NotifyDirectory.Length", length, 0x0, 0x20, true, 0xe78657cc0ff5d1ac)
#define _m36 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.NotifyDirectory.CompletionFilter", completion_filter, 0x40, 0x20, true, 0x2a40aa162426d4ae)
#define _m38 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.QueryFile.Length", length, 0x0, 0x20, true, 0x51035082d129c9dc)
#define _m39 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::file_information_class_t), "_IO_STACK_LOCATION.Parameters.QueryFile.FileInformationClass", file_information_class, 0x40, 0x20, true, 0x372961eaefb800df)
#define _m41 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.SetFile.Length", length, 0x0, 0x20, true, 0xa8711bf9df3e0fb2)
#define _m42 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::file_information_class_t), "_IO_STACK_LOCATION.Parameters.SetFile.FileInformationClass", file_information_class, 0x40, 0x20, true, 0x452a65d7ae877e02)
#define _m43 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_IO_STACK_LOCATION.Parameters.SetFile.FileObject", file_object, 0x80, 0x40, true, 0x4e63721ad5a813f0)
#define _m44 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_STACK_LOCATION.Parameters.SetFile.ReplaceIfExists", replace_if_exists, 0xc0, 0x8, true, 0xa6c1999e83b2142d)
#define _m45 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_STACK_LOCATION.Parameters.SetFile.AdvanceOnly", advance_only, 0xc8, 0x8, true, 0xaa24609b98bd8041)
#define _m46 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.SetFile.ClusterCount", cluster_count, 0xc0, 0x20, true, 0xb16381ac01d3ad2f)
#define _m47 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Parameters.SetFile.DeleteHandle", delete_handle, 0xc0, 0x40, true, 0xb5347c002c47bb84)
#define _m49 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.QueryEa.Length", length, 0x0, 0x20, true, 0x53b3111a82926761)
#define _m50 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Parameters.QueryEa.EaList", ea_list, 0x40, 0x40, true, 0x1af71f3395ea01a0)
#define _m51 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.QueryEa.EaListLength", ea_list_length, 0x80, 0x20, true, 0x805c25397bddd720)
#define _m52 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.QueryEa.EaIndex", ea_index, 0xc0, 0x20, true, 0xd7c189945478c02e)
#define _m54 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.SetEa.Length", length, 0x0, 0x20, true, 0x3e20d0cbec83a1ea)
#define _m56 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.QueryVolume.Length", length, 0x0, 0x20, true, 0xca3e5b91b41ba6ae)
#define _m57 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::fsinfoclass_t), "_IO_STACK_LOCATION.Parameters.QueryVolume.FsInformationClass", fs_information_class, 0x40, 0x20, true, 0xc69f12c98f07193d)
#define _m59 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.SetVolume.Length", length, 0x0, 0x20, true, 0x5707710d3add89a9)
#define _m60 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::fsinfoclass_t), "_IO_STACK_LOCATION.Parameters.SetVolume.FsInformationClass", fs_information_class, 0x40, 0x20, true, 0x488ad173a7b3d561)
#define _m62 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.FileSystemControl.OutputBufferLength", output_buffer_length, 0x0, 0x20, true, 0xf088b8f9d9013dd3)
#define _m63 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.FileSystemControl.InputBufferLength", input_buffer_length, 0x40, 0x20, true, 0xc763b6ec027b7a2)
#define _m64 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.FileSystemControl.FsControlCode", fs_control_code, 0x80, 0x20, true, 0xa5ff8589206035af)
#define _m65 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Parameters.FileSystemControl.Type3InputBuffer", type3_input_buffer, 0xc0, 0x40, true, 0x23b4df4dd57567bc)
#define _m67 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t*), "_IO_STACK_LOCATION.Parameters.LockControl.Length", length, 0x0, 0x40, true, 0x771294443ea7e1fe)
#define _m68 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.LockControl.Key", key, 0x40, 0x20, true, 0xdf65ab354920ea9c)
#define _m69 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_STACK_LOCATION.Parameters.LockControl.ByteOffset", byte_offset, 0x80, 0x40, true, 0xea603697d1ec1245)
#define _m71 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.DeviceIoControl.OutputBufferLength", output_buffer_length, 0x0, 0x20, true, 0x568e4ffb63b3ed90)
#define _m72 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.DeviceIoControl.InputBufferLength", input_buffer_length, 0x40, 0x20, true, 0x18fdf9898f981d9c)
#define _m73 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.DeviceIoControl.IoControlCode", io_control_code, 0x80, 0x20, true, 0xa7dc97bf90e12939)
#define _m74 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Parameters.DeviceIoControl.Type3InputBuffer", type3_input_buffer, 0xc0, 0x40, true, 0xf7d0c78ffc26b0bd)
#define _m76 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.QuerySecurity.SecurityInformation", security_information, 0x0, 0x20, true, 0x5fafac56314a0e41)
#define _m77 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.QuerySecurity.Length", length, 0x40, 0x20, true, 0x16c324d686c66807)
#define _m79 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.SetSecurity.SecurityInformation", security_information, 0x0, 0x20, true, 0x9f9dd71261d11fd6)
#define _m80 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Parameters.SetSecurity.SecurityDescriptor", security_descriptor, 0x40, 0x40, true, 0x13f3fe064055fbf9)
#define _m82 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::vpb_t*), "_IO_STACK_LOCATION.Parameters.MountVolume.Vpb", vpb, 0x0, 0x40, true, 0x7e611dfc109e56e6)
#define _m83 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_IO_STACK_LOCATION.Parameters.MountVolume.DeviceObject", device_object, 0x40, 0x40, true, 0x92ec01af9521c38b)
#define _m85 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::vpb_t*), "_IO_STACK_LOCATION.Parameters.VerifyVolume.Vpb", vpb, 0x0, 0x40, true, 0x7cca40a9f34e95e9)
#define _m86 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_IO_STACK_LOCATION.Parameters.VerifyVolume.DeviceObject", device_object, 0x40, 0x40, true, 0x259efa71cb845c44)
#define _m88 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::scsi_request_block_t*), "_IO_STACK_LOCATION.Parameters.Scsi.Srb", srb, 0x0, 0x40, true, 0x1decd2d6173d01a7)
#define _m90 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.QueryQuota.Length", length, 0x0, 0x20, true, 0x33e94e477db49bdb)
#define _m91 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Parameters.QueryQuota.StartSid", start_sid, 0x40, 0x40, true, 0xffbcb8dd0422f16a)
#define _m92 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_get_quota_information_t*), "_IO_STACK_LOCATION.Parameters.QueryQuota.SidList", sid_list, 0x80, 0x40, true, 0x6b17e7fa193c5566)
#define _m93 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.QueryQuota.SidListLength", sid_list_length, 0xc0, 0x20, true, 0x8b225117bec36756)
#define _m95 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.SetQuota.Length", length, 0x0, 0x20, true, 0xfbcadc9473396d08)
#define _m97 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::device_relation_type_t), "_IO_STACK_LOCATION.Parameters.QueryDeviceRelations.Type", type, 0x0, 0x20, true, 0x9af467a57d889fac)
#define _m99 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_IO_STACK_LOCATION.Parameters.QueryInterface.InterfaceType", interface_type, 0x0, 0x40, true, 0x1d8f6fbe5e27cf80)
#define _n00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_STACK_LOCATION.Parameters.QueryInterface.Size", size, 0x40, 0x10, true, 0x5afd313e494cda46)
#define _n01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_STACK_LOCATION.Parameters.QueryInterface.Version", version, 0x50, 0x10, true, 0xe077eec38e7847cf)
#define _n02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::interface_t*), "_IO_STACK_LOCATION.Parameters.QueryInterface.Interface", interface, 0x80, 0x40, true, 0x11e8bd6632a7dc9d)
#define _n03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Parameters.QueryInterface.InterfaceSpecificData", interface_specific_data, 0xc0, 0x40, true, 0x3325bc5cf0daa7e)
#define _n05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_capabilities_t*), "_IO_STACK_LOCATION.Parameters.DeviceCapabilities.Capabilities", capabilities, 0x0, 0x40, true, 0xbe50c14f09993eef)
#define _n07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::resource_requirements_list_t*), "_IO_STACK_LOCATION.Parameters.FilterResourceRequirements.IoResourceRequirementList", io_resource_requirement_list, 0x0, 0x40, true, 0x1c61699cf74279a3)
#define _n09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.ReadWriteConfig.WhichSpace", which_space, 0x0, 0x20, true, 0xb849200548c67d5f)
#define _n10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Parameters.ReadWriteConfig.Buffer", buffer, 0x40, 0x40, true, 0xa87bfcfd211e10ca)
#define _n11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.ReadWriteConfig.Offset", offset, 0x80, 0x20, true, 0x4d6a76ffe23e0281)
#define _n12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.ReadWriteConfig.Length", length, 0xc0, 0x20, true, 0x93064f81ab10055f)
#define _n14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_STACK_LOCATION.Parameters.SetLock.Lock", lock, 0x0, 0x8, true, 0xb55a0e7ec5fb8cfe)
#define _n16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::bus_query_id_type_t), "_IO_STACK_LOCATION.Parameters.QueryId.IdType", id_type, 0x0, 0x20, true, 0xcd291dbdc20f2cec)
#define _n18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::device_text_type_t), "_IO_STACK_LOCATION.Parameters.QueryDeviceText.DeviceTextType", device_text_type, 0x0, 0x20, true, 0xc875f0c3e58b0d8a)
#define _n19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.QueryDeviceText.LocaleId", locale_id, 0x40, 0x20, true, 0xa2886d5a7b917964)
#define _n21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_STACK_LOCATION.Parameters.UsageNotification.InPath", in_path, 0x0, 0x8, true, 0x3c37e4386c645921)
#define _n22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::device_usage_notification_type_t), "_IO_STACK_LOCATION.Parameters.UsageNotification.Type", type, 0x40, 0x20, true, 0xb94378f3304be2e0)
#define _n24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_IO_STACK_LOCATION.Parameters.WaitWake.PowerState", power_state, 0x0, 0x20, true, 0x18a133dbbe1b47ec)
#define _n26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct power::sequence_t*), "_IO_STACK_LOCATION.Parameters.PowerSequence.PowerSequence", power_sequence, 0x0, 0x40, true, 0x7aec4bcffbdd197d)
#define _n28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.Power.SystemContext", system_context, 0x0, 0x20, true, 0x26f73d2802b7bb93)
#define _n29 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::system_power_state_context_t), "_IO_STACK_LOCATION.Parameters.Power.SystemPowerStateContext", system_power_state_context, 0x0, 0x20, true, 0x7bb40a86ea49273d)
#define _n30 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum power::state_type_t), "_IO_STACK_LOCATION.Parameters.Power.Type", type, 0x40, 0x20, true, 0x2bb95578dabf5779)
#define _n31 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union power::state_t), "_IO_STACK_LOCATION.Parameters.Power.State", state, 0x80, 0x20, true, 0x6695be8bcbf4cef2)
#define _n32 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum power::action_t), "_IO_STACK_LOCATION.Parameters.Power.ShutdownType", shutdown_type, 0xc0, 0x20, true, 0x35fd177ed447d988)
#define _n34 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_IO_STACK_LOCATION.Parameters.StartDevice.AllocatedResources", allocated_resources, 0x0, 0x40, true, 0xb784aa06a9bb786e)
#define _n35 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_IO_STACK_LOCATION.Parameters.StartDevice.AllocatedResourcesTranslated", allocated_resources_translated, 0x40, 0x40, true, 0xf7c05494023a9bde)
#define _n37 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_STACK_LOCATION.Parameters.WMI.ProviderId", provider_id, 0x0, 0x40, true, 0x29adca9ae97631a2)
#define _n38 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Parameters.WMI.DataPath", data_path, 0x40, 0x40, true, 0x15c0b597028b1259)
#define _n39 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.WMI.BufferSize", buffer_size, 0x80, 0x20, true, 0xacc4011657053b10)
#define _n40 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Parameters.WMI.Buffer", buffer, 0xc0, 0x40, true, 0x790ec3ebafb04737)
#define _n42 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Parameters.Others.Argument1", argument1, 0x0, 0x40, true, 0xc517811cb71e3d66)
#define _n43 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Parameters.Others.Argument2", argument2, 0x40, 0x40, true, 0x71e8fa1b9fa4e71c)
#define _n44 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Parameters.Others.Argument3", argument3, 0x80, 0x40, true, 0x692f95732c0fe884)
#define _n45 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Parameters.Others.Argument4", argument4, 0xc0, 0x40, true, 0x2ea025d7e3d8644a)
#define _n47 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.NotifyDirectoryEx.Length", length, 0x0, 0x20, true, 0x493de0eef10b4011)
#define _n48 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STACK_LOCATION.Parameters.NotifyDirectoryEx.CompletionFilter", completion_filter, 0x40, 0x20, true, 0x1928432d639576d6)
#define _n49 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::directory_notify_information_class_t), "_IO_STACK_LOCATION.Parameters.NotifyDirectoryEx.DirectoryNotifyInformationClass", directory_notify_information_class, 0x80, 0x20, true, 0x40b1ed2c4816b45f)
#define _n51 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_IO_STACK_LOCATION.Parameters", parameters, 0x40, 0x0, true, 0x4bb1c80eaa81def0)
#define _n52 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_IO_STACK_LOCATION.DeviceObject", device_object, 0x140, 0x40, true, 0x8b7031c5d1155c3a)
#define _n53 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_IO_STACK_LOCATION.FileObject", file_object, 0x180, 0x40, true, 0xb9a9650e6bcc828c)
#define _n54 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pio_completion_routine_t ), "_IO_STACK_LOCATION.CompletionRoutine", completion_routine, 0x1c0, 0x40, true, 0x5acd43c3b6b14c60)
#define _n55 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_STACK_LOCATION.Context", context, 0x200, 0x40, true, 0x3fae0c34227ff45d)
#else
#define _m00
#define _m009
#define _m01
#define _m014
#define _m019
#define _m02
#define _m024
#define _m029
#define _m03
#define _m034
#define _m037
#define _m04
#define _m040
#define _m048
#define _m05
#define _m053
#define _m055
#define _m058
#define _m06
#define _m061
#define _m066
#define _m07
#define _m070
#define _m075
#define _m078
#define _m08
#define _m081
#define _m084
#define _m087
#define _m089
#define _m094
#define _m096
#define _m098
#define _m10
#define _m104
#define _m106
#define _m108
#define _m11
#define _m113
#define _m115
#define _m117
#define _m12
#define _m120
#define _m123
#define _m125
#define _m127
#define _m13
#define _m133
#define _m136
#define _m141
#define _m146
#define _m15
#define _m150
#define _m16
#define _m17
#define _m18
#define _m20
#define _m21
#define _m22
#define _m23
#define _m25
#define _m26
#define _m27
#define _m28
#define _m30
#define _m31
#define _m32
#define _m33
#define _m35
#define _m36
#define _m38
#define _m39
#define _m41
#define _m42
#define _m43
#define _m44
#define _m45
#define _m46
#define _m47
#define _m49
#define _m50
#define _m51
#define _m52
#define _m54
#define _m56
#define _m57
#define _m59
#define _m60
#define _m62
#define _m63
#define _m64
#define _m65
#define _m67
#define _m68
#define _m69
#define _m71
#define _m72
#define _m73
#define _m74
#define _m76
#define _m77
#define _m79
#define _m80
#define _m82
#define _m83
#define _m85
#define _m86
#define _m88
#define _m90
#define _m91
#define _m92
#define _m93
#define _m95
#define _m97
#define _m99
#define _n00
#define _n01
#define _n02
#define _n03
#define _n05
#define _n07
#define _n09
#define _n10
#define _n11
#define _n12
#define _n14
#define _n16
#define _n18
#define _n19
#define _n21
#define _n22
#define _n24
#define _n26
#define _n28
#define _n29
#define _n30
#define _n31
#define _n32
#define _n34
#define _n35
#define _n37
#define _n38
#define _n39
#define _n40
#define _n42
#define _n43
#define _n44
#define _n45
#define _n47
#define _n48
#define _n49
#define _n51
#define _n52
#define _n53
#define _n54
#define _n55
#endif