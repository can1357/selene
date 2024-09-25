#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_FLT_PARAMETERS.Create.SecurityContext", security_context, 0x0, 0x40, true, 0x20eaff30230dcb6)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_create_t), "_FLT_PARAMETERS.Create", create, 0x0, 0x80, true, 0xd9a5bafcf9abe869)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.Create.Options", options, 0x40, 0x20, true, 0x6423ca392e7ad23f)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_create_pipe_t), "_FLT_PARAMETERS.CreatePipe", create_pipe, 0x0, 0x0, true, 0xc8537f0bd4258fc2)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_create_pipe_t), "_FLT_PARAMETERS.CreateMailslot", create_mailslot, 0x0, 0x0, true, 0x62c0a9488707f5cd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_PARAMETERS.Create.FileAttributes", file_attributes, 0x80, 0x10, true, 0xb8ae0126825da00a)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_read_t), "_FLT_PARAMETERS.Read", read, 0x0, 0x40, true, 0x5d9235b8f99d9a26)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_write_t), "_FLT_PARAMETERS.Write", write, 0x0, 0x40, true, 0x6020394a08264f1d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_PARAMETERS.Create.ShareAccess", share_access, 0x90, 0x10, true, 0xf4271ae12a4e40c3)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_query_file_information_t), "_FLT_PARAMETERS.QueryFileInformation", query_file_information, 0x0, 0xc0, true, 0xa82c1c5f6bf3f183)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.Create.EaLength", ea_length, 0xc0, 0x20, true, 0xe2652e32a39f56b3)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u20_set_file_information_t), "_FLT_PARAMETERS.SetFileInformation", set_file_information, 0x0, 0x40, true, 0xe7515eaea4566eb9)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u24_query_ea_t), "_FLT_PARAMETERS.QueryEa", query_ea, 0x0, 0x80, true, 0xdd50d83f7d7a686c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.Create.EaBuffer", ea_buffer, 0x100, 0x40, true, 0x2d541cba33fec74e)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u28_set_ea_t), "_FLT_PARAMETERS.SetEa", set_ea, 0x0, 0xc0, true, 0xe6b2e6fcb73ab227)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u32_query_volume_information_t), "_FLT_PARAMETERS.QueryVolumeInformation", query_volume_information, 0x0, 0xc0, true, 0x2e148999657c2bb4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FLT_PARAMETERS.Create.AllocationSize", allocation_size, 0x140, 0x40, true, 0x2863ca0202d7b962)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u32_query_volume_information_t), "_FLT_PARAMETERS.SetVolumeInformation", set_volume_information, 0x0, 0xc0, true, 0xe71673f4023a700d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_FLT_PARAMETERS.CreatePipe.SecurityContext", security_context, 0x0, 0x40, true, 0x64bbff76815e43fb)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u36_directory_control_t), "_FLT_PARAMETERS.DirectoryControl", directory_control, 0x0, 0x80, true, 0x4a9c0768cf7beaf4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.CreatePipe.Options", options, 0x40, 0x20, true, 0x590d53fe44e54fb)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_PARAMETERS.CreatePipe.ShareAccess", share_access, 0x90, 0x10, true, 0x2054aa11b0426493)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u51_file_system_control_t), "_FLT_PARAMETERS.FileSystemControl", file_system_control, 0x0, 0x80, true, 0x3c7401924af700a4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.CreatePipe.Parameters", parameters, 0xc0, 0x40, true, 0x61e51d881de43ce1)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_FLT_PARAMETERS.CreateMailslot.SecurityContext", security_context, 0x0, 0x40, true, 0xb6e8096faeac6a2d)
#define _m137 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u75_device_io_control_t), "_FLT_PARAMETERS.DeviceIoControl", device_io_control, 0x0, 0x80, true, 0x6868e0471d6d662)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.CreateMailslot.Options", options, 0x40, 0x20, true, 0x124216cb73aeb3ca)
#define _m144 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u99_lock_control_t), "_FLT_PARAMETERS.LockControl", lock_control, 0x0, 0x40, true, 0xa6ff8dc3c5f63626)
#define _m149 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u103_query_security_t), "_FLT_PARAMETERS.QuerySecurity", query_security, 0x0, 0x0, true, 0x9142c5a1f4badc61)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_PARAMETERS.CreateMailslot.ShareAccess", share_access, 0x90, 0x10, true, 0xb01e20e7ec24a324)
#define _m152 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u107_set_security_t), "_FLT_PARAMETERS.SetSecurity", set_security, 0x0, 0x80, true, 0xb8acd3596e0068a4)
#define _m157 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u111_wmi_t), "_FLT_PARAMETERS.WMI", wmi, 0x0, 0x0, true, 0xa09c9449b674646)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.CreateMailslot.Parameters", parameters, 0xc0, 0x40, true, 0x9b83e22dafcd9cd0)
#define _m164 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u115_query_quota_t), "_FLT_PARAMETERS.QueryQuota", query_quota, 0x0, 0x80, true, 0x68be4dbeb5354e9e)
#define _m168 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u119_set_quota_t), "_FLT_PARAMETERS.SetQuota", set_quota, 0x0, 0xc0, true, 0xd9d01f8cb568654d)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.Read.Length", length, 0x0, 0x20, true, 0x5a57409fb703e3b7)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.Read.Key", key, 0x40, 0x20, true, 0x83fc750dccf8f94b)
#define _m199 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u123_pnp_t), "_FLT_PARAMETERS.Pnp", pnp, 0x0, 0x0, true, 0xb1cabd1e27161612)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FLT_PARAMETERS.Read.ByteOffset", byte_offset, 0x80, 0x40, true, 0xc862de4c87cb198c)
#define _m205 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u167_acquire_for_section_synchronization_t), "_FLT_PARAMETERS.AcquireForSectionSynchronization", acquire_for_section_synchronization, 0x0, 0x80, true, 0xefbbe8a2b71f93fc)
#define _m208 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u171_acquire_for_modified_page_writer_t), "_FLT_PARAMETERS.AcquireForModifiedPageWriter", acquire_for_modified_page_writer, 0x0, 0x80, true, 0xed7408410114f0d1)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.Read.ReadBuffer", read_buffer, 0xc0, 0x40, true, 0x98626a0ebb911fb6)
#define _m210 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u175_release_for_modified_page_writer_t), "_FLT_PARAMETERS.ReleaseForModifiedPageWriter", release_for_modified_page_writer, 0x0, 0x40, true, 0x9a9038cb4e2fb021)
#define _m215 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u179_fast_io_check_if_possible_t), "_FLT_PARAMETERS.FastIoCheckIfPossible", fast_io_check_if_possible, 0x0, 0x0, true, 0x424f89b785a9d8b8)
#define _m218 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u183_network_query_open_t), "_FLT_PARAMETERS.NetworkQueryOpen", network_query_open, 0x0, 0x80, true, 0xaaecd150fd2ab925)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.Read.MdlAddress", mdl_address, 0x100, 0x40, true, 0x5468f26c146f733b)
#define _m223 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u187_mdl_read_t), "_FLT_PARAMETERS.MdlRead", mdl_read, 0x0, 0x0, true, 0x1ce22ce00e22ef70)
#define _m225 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u191_mdl_read_complete_t), "_FLT_PARAMETERS.MdlReadComplete", mdl_read_complete, 0x0, 0x40, true, 0x73286de300a06bbc)
#define _m230 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u187_mdl_read_t), "_FLT_PARAMETERS.PrepareMdlWrite", prepare_mdl_write, 0x0, 0x0, true, 0xc20b5226236874bb)
#define _m233 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u195_mdl_write_complete_t), "_FLT_PARAMETERS.MdlWriteComplete", mdl_write_complete, 0x0, 0x80, true, 0xa7b78de08f2c5dd8)
#define _m235 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u199_mount_volume_t), "_FLT_PARAMETERS.MountVolume", mount_volume, 0x0, 0x20, true, 0xf941fe978b617e12)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.Write.Length", length, 0x0, 0x20, true, 0x511f62f9c9aef450)
#define _m242 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u203_others_t), "_FLT_PARAMETERS.Others", others, 0x0, 0x80, true, 0xd5a396abbd60e898)
#define _m247 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u207_query_open_t), "_FLT_PARAMETERS.QueryOpen", query_open, 0x0, 0x0, true, 0x8a38f9619c68dcfc)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.Write.Key", key, 0x40, 0x20, true, 0xcb7083d5cd480ab5)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FLT_PARAMETERS.Write.ByteOffset", byte_offset, 0x80, 0x40, true, 0x59623a77badfec0c)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.Write.WriteBuffer", write_buffer, 0xc0, 0x40, true, 0x73a6f83bcf705a96)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.Write.MdlAddress", mdl_address, 0x100, 0x40, true, 0xd2d800a59dc877cb)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.QueryFileInformation.Length", length, 0x0, 0x20, true, 0xb865ea90df77d0a9)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::file_information_class_t), "_FLT_PARAMETERS.QueryFileInformation.FileInformationClass", file_information_class, 0x40, 0x20, true, 0x4e597cb3e4ee05fb)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.QueryFileInformation.InfoBuffer", info_buffer, 0x80, 0x40, true, 0x2fdeecc60c32c62e)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.SetFileInformation.Length", length, 0x0, 0x20, true, 0x4dffbc62d0e02c17)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::file_information_class_t), "_FLT_PARAMETERS.SetFileInformation.FileInformationClass", file_information_class, 0x40, 0x20, true, 0xe07ab1e063daaafe)
#define _m36 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_FLT_PARAMETERS.SetFileInformation.ParentOfTarget", parent_of_target, 0x80, 0x40, true, 0x88945be3658afd79)
#define _m37 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FLT_PARAMETERS.SetFileInformation.ReplaceIfExists", replace_if_exists, 0xc0, 0x8, true, 0x88c5fc771d0e1f47)
#define _m38 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FLT_PARAMETERS.SetFileInformation.AdvanceOnly", advance_only, 0xc8, 0x8, true, 0x9f14a7d85ddf3211)
#define _m39 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.SetFileInformation.ClusterCount", cluster_count, 0xc0, 0x20, true, 0x2205b472c7d72301)
#define _m40 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.SetFileInformation.DeleteHandle", delete_handle, 0xc0, 0x40, true, 0x437ac95076d1bf67)
#define _m41 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.SetFileInformation.InfoBuffer", info_buffer, 0x100, 0x40, true, 0x720a83ba45201403)
#define _m43 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.QueryEa.Length", length, 0x0, 0x20, true, 0x9d79adeac0491f95)
#define _m44 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.QueryEa.EaList", ea_list, 0x40, 0x40, true, 0xc73f47c80644c651)
#define _m45 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.QueryEa.EaListLength", ea_list_length, 0x80, 0x20, true, 0xbe46264b41096e6c)
#define _m46 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.QueryEa.EaIndex", ea_index, 0xc0, 0x20, true, 0x114bba47ce34d59b)
#define _m47 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.QueryEa.EaBuffer", ea_buffer, 0x100, 0x40, true, 0xe559b2a4d2d5d03c)
#define _m48 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.QueryEa.MdlAddress", mdl_address, 0x140, 0x40, true, 0xad3da569e810a5ff)
#define _m50 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.SetEa.Length", length, 0x0, 0x20, true, 0x7f4ec52467a6c815)
#define _m51 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.SetEa.EaBuffer", ea_buffer, 0x40, 0x40, true, 0xfcde5ff00b0328ea)
#define _m52 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.SetEa.MdlAddress", mdl_address, 0x80, 0x40, true, 0x26e041c641101031)
#define _m54 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.QueryVolumeInformation.Length", length, 0x0, 0x20, true, 0xfa7ec5170ac1fd73)
#define _m55 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::fsinfoclass_t), "_FLT_PARAMETERS.QueryVolumeInformation.FsInformationClass", fs_information_class, 0x40, 0x20, true, 0xf6573244aca2f431)
#define _m56 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.QueryVolumeInformation.VolumeBuffer", volume_buffer, 0x80, 0x40, true, 0xf2f2c4585a30d7d0)
#define _m58 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.SetVolumeInformation.Length", length, 0x0, 0x20, true, 0x8842e9f2874fbc67)
#define _m59 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::fsinfoclass_t), "_FLT_PARAMETERS.SetVolumeInformation.FsInformationClass", fs_information_class, 0x40, 0x20, true, 0x6fe8d3de45381f0d)
#define _m60 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.SetVolumeInformation.VolumeBuffer", volume_buffer, 0x80, 0x40, true, 0x5dbcef0b91e0f7c2)
#define _m62 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DirectoryControl.QueryDirectory.Length", length, 0x0, 0x20, true, 0xfcedfd460c744d70)
#define _m63 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_FLT_PARAMETERS.DirectoryControl.QueryDirectory.FileName", file_name, 0x40, 0x40, true, 0x952991b6804c4a65)
#define _m64 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::file_information_class_t), "_FLT_PARAMETERS.DirectoryControl.QueryDirectory.FileInformationClass", file_information_class, 0x80, 0x20, true, 0x8ce8a0037cf55f61)
#define _m65 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DirectoryControl.QueryDirectory.FileIndex", file_index, 0xc0, 0x20, true, 0x849aa1a7225e52d0)
#define _m66 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.DirectoryControl.QueryDirectory.DirectoryBuffer", directory_buffer, 0x100, 0x40, true, 0xcf27b6934d9c8228)
#define _m67 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.DirectoryControl.QueryDirectory.MdlAddress", mdl_address, 0x140, 0x40, true, 0x26b5a5dfe2ecf77a)
#define _m68 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u40_query_directory_t), "_FLT_PARAMETERS.DirectoryControl.QueryDirectory", query_directory, 0x0, 0x80, true, 0x5d2e6537be35e6d6)
#define _m69 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DirectoryControl.NotifyDirectory.Length", length, 0x0, 0x20, true, 0x1f56fe2b6acda7bf)
#define _m70 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DirectoryControl.NotifyDirectory.CompletionFilter", completion_filter, 0x40, 0x20, true, 0x8373e65d5be40422)
#define _m71 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.DirectoryControl.NotifyDirectory.DirectoryBuffer", directory_buffer, 0x100, 0x40, true, 0x5e5e4dcdaa942e01)
#define _m72 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.DirectoryControl.NotifyDirectory.MdlAddress", mdl_address, 0x140, 0x40, true, 0x6d0ff26c919852b1)
#define _m73 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u44_notify_directory_t), "_FLT_PARAMETERS.DirectoryControl.NotifyDirectory", notify_directory, 0x0, 0x80, true, 0x6e113a0652b94de7)
#define _m74 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DirectoryControl.NotifyDirectoryEx.Length", length, 0x0, 0x20, true, 0x2eab39db65035e47)
#define _m75 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DirectoryControl.NotifyDirectoryEx.CompletionFilter", completion_filter, 0x40, 0x20, true, 0x61f5e88349ee4b78)
#define _m76 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::directory_notify_information_class_t), "_FLT_PARAMETERS.DirectoryControl.NotifyDirectoryEx.DirectoryNotifyInformationClass", directory_notify_information_class, 0x80, 0x20, true, 0x3b4f1f56a2e69357)
#define _m77 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.DirectoryControl.NotifyDirectoryEx.DirectoryBuffer", directory_buffer, 0x100, 0x40, true, 0xa3dc6d4ce876272b)
#define _m78 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.DirectoryControl.NotifyDirectoryEx.MdlAddress", mdl_address, 0x140, 0x40, true, 0x73059a0be3f4da06)
#define _m79 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u48_notify_directory_ex_t), "_FLT_PARAMETERS.DirectoryControl.NotifyDirectoryEx", notify_directory_ex, 0x0, 0x80, true, 0xccc60542ab78f56f)
#define _m81 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::vpb_t*), "_FLT_PARAMETERS.FileSystemControl.VerifyVolume.Vpb", vpb, 0x0, 0x40, true, 0x1a0bfc2d0a51512)
#define _m82 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_FLT_PARAMETERS.FileSystemControl.VerifyVolume.DeviceObject", device_object, 0x40, 0x40, true, 0xd3107211f603a5a9)
#define _m83 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u55_verify_volume_t), "_FLT_PARAMETERS.FileSystemControl.VerifyVolume", verify_volume, 0x0, 0x80, true, 0xbd85ddfd0495e492)
#define _m84 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.FileSystemControl.Common.OutputBufferLength", output_buffer_length, 0x0, 0x20, true, 0x50d3d2cf94c20903)
#define _m85 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.FileSystemControl.Common.InputBufferLength", input_buffer_length, 0x40, 0x20, true, 0x2a19b30f321f619c)
#define _m86 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.FileSystemControl.Common.FsControlCode", fs_control_code, 0x80, 0x20, true, 0x2b0b2526c9cd2c74)
#define _m87 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u59_common_t), "_FLT_PARAMETERS.FileSystemControl.Common", common, 0x0, 0xc0, true, 0x36ab6114c7557857)
#define _m88 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.FileSystemControl.Neither.OutputBufferLength", output_buffer_length, 0x0, 0x20, true, 0x61ec7747b7cefc)
#define _m89 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.FileSystemControl.Neither.InputBufferLength", input_buffer_length, 0x40, 0x20, true, 0xda1eb7725fc9b6be)
#define _m90 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.FileSystemControl.Neither.FsControlCode", fs_control_code, 0x80, 0x20, true, 0xd35ed73ed758f0b4)
#define _m91 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.FileSystemControl.Neither.InputBuffer", input_buffer, 0xc0, 0x40, true, 0xdf6be3a71a74f27c)
#define _m92 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.FileSystemControl.Neither.OutputBuffer", output_buffer, 0x100, 0x40, true, 0x121bafc4cead7d8c)
#define _m93 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.FileSystemControl.Neither.OutputMdlAddress", output_mdl_address, 0x140, 0x40, true, 0xa7fe6853be4d128)
#define _m94 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u63_neither_t), "_FLT_PARAMETERS.FileSystemControl.Neither", neither, 0x0, 0x80, true, 0x930a771bc825a61f)
#define _m95 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.FileSystemControl.Buffered.OutputBufferLength", output_buffer_length, 0x0, 0x20, true, 0xc84689f4d26294d)
#define _m96 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.FileSystemControl.Buffered.InputBufferLength", input_buffer_length, 0x40, 0x20, true, 0x7df2e33471e29ce6)
#define _m97 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.FileSystemControl.Buffered.FsControlCode", fs_control_code, 0x80, 0x20, true, 0xa8c6dfa991af163f)
#define _m98 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.FileSystemControl.Buffered.SystemBuffer", system_buffer, 0xc0, 0x40, true, 0xd318a87f2f350d37)
#define _m99 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u67_buffered_t), "_FLT_PARAMETERS.FileSystemControl.Buffered", buffered, 0x0, 0x0, true, 0xb65ddfd249e6a3c1)
#define _n00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.FileSystemControl.Direct.OutputBufferLength", output_buffer_length, 0x0, 0x20, true, 0x61fc302f8259468a)
#define _n01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.FileSystemControl.Direct.InputBufferLength", input_buffer_length, 0x40, 0x20, true, 0xf138b335bc2e77d6)
#define _n02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.FileSystemControl.Direct.FsControlCode", fs_control_code, 0x80, 0x20, true, 0xb956c64585aae3c6)
#define _n03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.FileSystemControl.Direct.InputSystemBuffer", input_system_buffer, 0xc0, 0x40, true, 0x6e6e83adfa905677)
#define _n04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.FileSystemControl.Direct.OutputBuffer", output_buffer, 0x100, 0x40, true, 0xe342598d9ba1e2b4)
#define _n05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.FileSystemControl.Direct.OutputMdlAddress", output_mdl_address, 0x140, 0x40, true, 0x779bde32dc8805e0)
#define _n06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u71_direct_t), "_FLT_PARAMETERS.FileSystemControl.Direct", direct, 0x0, 0x80, true, 0x254d7b9cc9c393ee)
#define _n08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.Common.OutputBufferLength", output_buffer_length, 0x0, 0x20, true, 0xfbf459acbffb4adc)
#define _n09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.Common.InputBufferLength", input_buffer_length, 0x40, 0x20, true, 0x2cf834992b2878a8)
#define _n10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.Common.IoControlCode", io_control_code, 0x80, 0x20, true, 0x8be6b49279995b7c)
#define _n11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u79_common_t), "_FLT_PARAMETERS.DeviceIoControl.Common", common, 0x0, 0xc0, true, 0x3387ba3c1414cd8c)
#define _n12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.Neither.OutputBufferLength", output_buffer_length, 0x0, 0x20, true, 0x13d2dd011209b05)
#define _n13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.Neither.InputBufferLength", input_buffer_length, 0x40, 0x20, true, 0x61f9ff5cdab41fe3)
#define _n14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.Neither.IoControlCode", io_control_code, 0x80, 0x20, true, 0x5b449d4c6c16780)
#define _n15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.DeviceIoControl.Neither.InputBuffer", input_buffer, 0xc0, 0x40, true, 0x8cb174dda829c652)
#define _n16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.DeviceIoControl.Neither.OutputBuffer", output_buffer, 0x100, 0x40, true, 0x352883eebb843a87)
#define _n17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.DeviceIoControl.Neither.OutputMdlAddress", output_mdl_address, 0x140, 0x40, true, 0x6e19f16b5c970cd0)
#define _n18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u83_neither_t), "_FLT_PARAMETERS.DeviceIoControl.Neither", neither, 0x0, 0x80, true, 0x5f2c6bb12579c60d)
#define _n19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.Buffered.OutputBufferLength", output_buffer_length, 0x0, 0x20, true, 0xf54dcfbd6b51ea01)
#define _n20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.Buffered.InputBufferLength", input_buffer_length, 0x40, 0x20, true, 0xf579041546a690ed)
#define _n21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.Buffered.IoControlCode", io_control_code, 0x80, 0x20, true, 0x908011114d1168e0)
#define _n22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.DeviceIoControl.Buffered.SystemBuffer", system_buffer, 0xc0, 0x40, true, 0x2ceaefcfccd47f6a)
#define _n23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u87_buffered_t), "_FLT_PARAMETERS.DeviceIoControl.Buffered", buffered, 0x0, 0x0, true, 0x442554109c81e7a8)
#define _n24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.Direct.OutputBufferLength", output_buffer_length, 0x0, 0x20, true, 0x93fb5fc86d0f543c)
#define _n25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.Direct.InputBufferLength", input_buffer_length, 0x40, 0x20, true, 0xbb45fb27339ba2b8)
#define _n26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.Direct.IoControlCode", io_control_code, 0x80, 0x20, true, 0x4596b79462210dc5)
#define _n27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.DeviceIoControl.Direct.InputSystemBuffer", input_system_buffer, 0xc0, 0x40, true, 0x8567fdc3a00c7c56)
#define _n28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.DeviceIoControl.Direct.OutputBuffer", output_buffer, 0x100, 0x40, true, 0xb197e431be4b957d)
#define _n29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.DeviceIoControl.Direct.OutputMdlAddress", output_mdl_address, 0x140, 0x40, true, 0x51c8422ee6300f95)
#define _n30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u91_direct_t), "_FLT_PARAMETERS.DeviceIoControl.Direct", direct, 0x0, 0x80, true, 0x7ffe68de4568f63f)
#define _n31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.FastIo.OutputBufferLength", output_buffer_length, 0x0, 0x20, true, 0x640c277b2f1d239d)
#define _n32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.FastIo.InputBufferLength", input_buffer_length, 0x40, 0x20, true, 0x77e100b093728525)
#define _n33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.DeviceIoControl.FastIo.IoControlCode", io_control_code, 0x80, 0x20, true, 0xfb11bcf1e3e7fa5)
#define _n34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.DeviceIoControl.FastIo.InputBuffer", input_buffer, 0xc0, 0x40, true, 0x370a7cc2d7166a9d)
#define _n35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.DeviceIoControl.FastIo.OutputBuffer", output_buffer, 0x100, 0x40, true, 0xb8ee49f46da3a93a)
#define _n36 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u95_fast_io_t), "_FLT_PARAMETERS.DeviceIoControl.FastIo", fast_io, 0x0, 0x40, true, 0x179e7b9bc7125213)
#define _n38 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_FLT_PARAMETERS.LockControl.Length", length, 0x0, 0x40, true, 0xbe4ac5cb4a86e13c)
#define _n39 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.LockControl.Key", key, 0x40, 0x20, true, 0x70040c6448423b47)
#define _n40 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FLT_PARAMETERS.LockControl.ByteOffset", byte_offset, 0x80, 0x40, true, 0x3ea547a83ed934a5)
#define _n41 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kprocess_t*), "_FLT_PARAMETERS.LockControl.ProcessId", process_id, 0xc0, 0x40, true, 0x33c727d34d205d2c)
#define _n42 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FLT_PARAMETERS.LockControl.FailImmediately", fail_immediately, 0x100, 0x8, true, 0x325b1015993c4a5d)
#define _n43 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FLT_PARAMETERS.LockControl.ExclusiveLock", exclusive_lock, 0x108, 0x8, true, 0x5295f5334668e636)
#define _n45 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.QuerySecurity.SecurityInformation", security_information, 0x0, 0x20, true, 0xdc8ec5855d6c2e8a)
#define _n46 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.QuerySecurity.Length", length, 0x40, 0x20, true, 0x1f9dc0cfccc05e04)
#define _n47 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.QuerySecurity.SecurityBuffer", security_buffer, 0x80, 0x40, true, 0xbf98a0e610fe913)
#define _n48 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.QuerySecurity.MdlAddress", mdl_address, 0xc0, 0x40, true, 0xaa48d556ed279900)
#define _n50 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.SetSecurity.SecurityInformation", security_information, 0x0, 0x20, true, 0xb9a09129ef738b47)
#define _n51 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.SetSecurity.SecurityDescriptor", security_descriptor, 0x40, 0x40, true, 0x4b47e854a45c48)
#define _n53 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FLT_PARAMETERS.WMI.ProviderId", provider_id, 0x0, 0x40, true, 0x212094c51b35e469)
#define _n54 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.WMI.DataPath", data_path, 0x40, 0x40, true, 0xf4003078fc6b4702)
#define _n55 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.WMI.BufferSize", buffer_size, 0x80, 0x20, true, 0x6e72c7f9a7fd7a36)
#define _n56 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.WMI.Buffer", buffer, 0xc0, 0x40, true, 0x590b65c6a45d92aa)
#define _n58 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.QueryQuota.Length", length, 0x0, 0x20, true, 0x41611c447f170ffb)
#define _n59 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.QueryQuota.StartSid", start_sid, 0x40, 0x40, true, 0x7001881637bda72f)
#define _n60 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_get_quota_information_t*), "_FLT_PARAMETERS.QueryQuota.SidList", sid_list, 0x80, 0x40, true, 0x47903d6da2913cc8)
#define _n61 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.QueryQuota.SidListLength", sid_list_length, 0xc0, 0x20, true, 0xa5c3bd7f70939e40)
#define _n62 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.QueryQuota.QuotaBuffer", quota_buffer, 0x100, 0x40, true, 0xb97222bea64fc811)
#define _n63 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.QueryQuota.MdlAddress", mdl_address, 0x140, 0x40, true, 0xa518ad755191ab85)
#define _n65 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.SetQuota.Length", length, 0x0, 0x20, true, 0xf955c8d3374d7f6b)
#define _n66 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.SetQuota.QuotaBuffer", quota_buffer, 0x40, 0x40, true, 0xfd147ea5c9a56fb1)
#define _n67 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.SetQuota.MdlAddress", mdl_address, 0x80, 0x40, true, 0x697a4cf6d7a119d4)
#define _n69 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_FLT_PARAMETERS.Pnp.StartDevice.AllocatedResources", allocated_resources, 0x0, 0x40, true, 0xf3fac2de68fb4d22)
#define _n70 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_FLT_PARAMETERS.Pnp.StartDevice.AllocatedResourcesTranslated", allocated_resources_translated, 0x40, 0x40, true, 0xa58c4390cb2696f0)
#define _n71 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u127_start_device_t), "_FLT_PARAMETERS.Pnp.StartDevice", start_device, 0x0, 0x80, true, 0xd4afaafe8fbbab88)
#define _n72 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_relation_type_t), "_FLT_PARAMETERS.Pnp.QueryDeviceRelations.Type", type, 0x0, 0x20, true, 0xe79e3245b8896ee2)
#define _n73 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u131_query_device_relations_t), "_FLT_PARAMETERS.Pnp.QueryDeviceRelations", query_device_relations, 0x0, 0x20, true, 0xdfd1cb03d570636a)
#define _n74 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_FLT_PARAMETERS.Pnp.QueryInterface.InterfaceType", interface_type, 0x0, 0x40, true, 0x6d9e23627bbfae79)
#define _n75 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_PARAMETERS.Pnp.QueryInterface.Size", size, 0x40, 0x10, true, 0x2a97418e22932c9a)
#define _n76 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_PARAMETERS.Pnp.QueryInterface.Version", version, 0x50, 0x10, true, 0x47c3a4eea28150cc)
#define _n77 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interface_t*), "_FLT_PARAMETERS.Pnp.QueryInterface.Interface", interface, 0x80, 0x40, true, 0x5c04edbd6d9e5c1d)
#define _n78 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.Pnp.QueryInterface.InterfaceSpecificData", interface_specific_data, 0xc0, 0x40, true, 0xba01a6539b4949f2)
#define _n79 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u135_query_interface_t), "_FLT_PARAMETERS.Pnp.QueryInterface", query_interface, 0x0, 0x0, true, 0x399bdab0193cb0e7)
#define _n80 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_capabilities_t*), "_FLT_PARAMETERS.Pnp.DeviceCapabilities.Capabilities", capabilities, 0x0, 0x40, true, 0xdb56110a4dc952c1)
#define _n81 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u139_device_capabilities_t), "_FLT_PARAMETERS.Pnp.DeviceCapabilities", device_capabilities, 0x0, 0x40, true, 0xb90f3d3f9997abcf)
#define _n82 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_requirements_list_t*), "_FLT_PARAMETERS.Pnp.FilterResourceRequirements.IoResourceRequirementList", io_resource_requirement_list, 0x0, 0x40, true, 0x293a1d12baa5ad50)
#define _n83 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u143_filter_resource_requirements_t), "_FLT_PARAMETERS.Pnp.FilterResourceRequirements", filter_resource_requirements, 0x0, 0x40, true, 0xfbfb551c74410bb6)
#define _n84 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.Pnp.ReadWriteConfig.WhichSpace", which_space, 0x0, 0x20, true, 0xc0481542bbea849)
#define _n85 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.Pnp.ReadWriteConfig.Buffer", buffer, 0x40, 0x40, true, 0x1be37cdc0d6d9537)
#define _n86 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.Pnp.ReadWriteConfig.Offset", offset, 0x80, 0x20, true, 0xabad0de2e54caaac)
#define _n87 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.Pnp.ReadWriteConfig.Length", length, 0xc0, 0x20, true, 0x1bec3714dd1d8541)
#define _n88 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u147_read_write_config_t), "_FLT_PARAMETERS.Pnp.ReadWriteConfig", read_write_config, 0x0, 0x0, true, 0x1dd14e46ed624852)
#define _n89 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FLT_PARAMETERS.Pnp.SetLock.Lock", lock, 0x0, 0x8, true, 0x76ed30b5c01a7ea2)
#define _n90 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u151_set_lock_t), "_FLT_PARAMETERS.Pnp.SetLock", set_lock, 0x0, 0x8, true, 0x6581aa38e3c3a12f)
#define _n91 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::bus_query_id_type_t), "_FLT_PARAMETERS.Pnp.QueryId.IdType", id_type, 0x0, 0x20, true, 0x21e68da783d62bd4)
#define _n92 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u155_query_id_t), "_FLT_PARAMETERS.Pnp.QueryId", query_id, 0x0, 0x20, true, 0x36962422eb0a449c)
#define _n93 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_text_type_t), "_FLT_PARAMETERS.Pnp.QueryDeviceText.DeviceTextType", device_text_type, 0x0, 0x20, true, 0xfcb076dbf0a77c1a)
#define _n94 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.Pnp.QueryDeviceText.LocaleId", locale_id, 0x40, 0x20, true, 0x56688128c54d7fbc)
#define _n95 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u159_query_device_text_t), "_FLT_PARAMETERS.Pnp.QueryDeviceText", query_device_text, 0x0, 0x80, true, 0x7629de3a81ae0dcd)
#define _n96 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FLT_PARAMETERS.Pnp.UsageNotification.InPath", in_path, 0x0, 0x8, true, 0x7819eb5803458de6)
#define _n97 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_usage_notification_type_t), "_FLT_PARAMETERS.Pnp.UsageNotification.Type", type, 0x40, 0x20, true, 0xdcb220a87247d0ca)
#define _n98 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u163_usage_notification_t), "_FLT_PARAMETERS.Pnp.UsageNotification", usage_notification, 0x0, 0x80, true, 0x4f96b20291a66624)
#define _o00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fs::filter_section_sync_type_t), "_FLT_PARAMETERS.AcquireForSectionSynchronization.SyncType", sync_type, 0x0, 0x20, true, 0x60a020d8743ba581)
#define _o01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.AcquireForSectionSynchronization.PageProtection", page_protection, 0x20, 0x20, true, 0x67e635e7d97d302f)
#define _o02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fs::filter_section_sync_output_t*), "_FLT_PARAMETERS.AcquireForSectionSynchronization.OutputInformation", output_information, 0x40, 0x40, true, 0xcc238ba2b223de76)
#define _o03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.AcquireForSectionSynchronization.Flags", flags, 0x0, 0x0, false, 0xbe6984e9ccc69835)
#define _o04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.AcquireForSectionSynchronization.AllocationAttributes", allocation_attributes, 0x0, 0x0, false, 0x55b7f7a363c8932b)
#define _o06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_FLT_PARAMETERS.AcquireForModifiedPageWriter.EndingOffset", ending_offset, 0x0, 0x40, true, 0x301c09559fcb1e59)
#define _o07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t**), "_FLT_PARAMETERS.AcquireForModifiedPageWriter.ResourceToRelease", resource_to_release, 0x40, 0x40, true, 0xdd2e03e063557f1c)
#define _o09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t*), "_FLT_PARAMETERS.ReleaseForModifiedPageWriter.ResourceToRelease", resource_to_release, 0x0, 0x40, true, 0x96507e2570c0f56a)
#define _o11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FLT_PARAMETERS.FastIoCheckIfPossible.FileOffset", file_offset, 0x0, 0x40, true, 0xc3cbaaa58fd2707)
#define _o12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.FastIoCheckIfPossible.Length", length, 0x40, 0x20, true, 0xf92a88ef1fd8362a)
#define _o13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.FastIoCheckIfPossible.LockKey", lock_key, 0x80, 0x20, true, 0x85f8b3242eb5a77b)
#define _o14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FLT_PARAMETERS.FastIoCheckIfPossible.CheckForReadOperation", check_for_read_operation, 0xc0, 0x8, true, 0x510b03d72890463a)
#define _o16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_FLT_PARAMETERS.NetworkQueryOpen.Irp", irp, 0x0, 0x40, true, 0x96b9b383b303231b)
#define _o17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_network_open_information_t*), "_FLT_PARAMETERS.NetworkQueryOpen.NetworkInformation", network_information, 0x40, 0x40, true, 0xb1b2f19557374135)
#define _o19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FLT_PARAMETERS.MdlRead.FileOffset", file_offset, 0x0, 0x40, true, 0xc9f46e17a6894f5d)
#define _o20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.MdlRead.Length", length, 0x40, 0x20, true, 0xd3cf5c64ed3f73c2)
#define _o21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.MdlRead.Key", key, 0x80, 0x20, true, 0xdd8899a5b20f7558)
#define _o22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t**), "_FLT_PARAMETERS.MdlRead.MdlChain", mdl_chain, 0xc0, 0x40, true, 0xe28a1de232d50cd4)
#define _o24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.MdlReadComplete.MdlChain", mdl_chain, 0x0, 0x40, true, 0x35fe50ba64bd7d2f)
#define _o26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FLT_PARAMETERS.PrepareMdlWrite.FileOffset", file_offset, 0x0, 0x40, true, 0x95c6a56fa716d604)
#define _o27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.PrepareMdlWrite.Length", length, 0x40, 0x20, true, 0xb2d3fc8bc1256f82)
#define _o28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.PrepareMdlWrite.Key", key, 0x80, 0x20, true, 0xe6f8815a4a9da467)
#define _o29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t**), "_FLT_PARAMETERS.PrepareMdlWrite.MdlChain", mdl_chain, 0xc0, 0x40, true, 0x1addee4b229fe193)
#define _o31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FLT_PARAMETERS.MdlWriteComplete.FileOffset", file_offset, 0x0, 0x40, true, 0xb87f9f7fcb2ab24b)
#define _o32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FLT_PARAMETERS.MdlWriteComplete.MdlChain", mdl_chain, 0x40, 0x40, true, 0x84bc7dca16e9212b)
#define _o34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_PARAMETERS.MountVolume.DeviceType", device_type, 0x0, 0x20, true, 0x35b7e19fc053510f)
#define _o36 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.Others.Argument1", argument1, 0x0, 0x40, true, 0x3cad8a2cb80a9e11)
#define _o37 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.Others.Argument2", argument2, 0x40, 0x40, true, 0x474dcbb81c445432)
#define _o38 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.Others.Argument3", argument3, 0x80, 0x40, true, 0xc03309cb03924784)
#define _o39 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.Others.Argument4", argument4, 0xc0, 0x40, true, 0xee62f3b3a2478cbf)
#define _o40 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.Others.Argument5", argument5, 0x100, 0x40, true, 0x5deb1cf2207b8356)
#define _o41 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FLT_PARAMETERS.Others.Argument6", argument6, 0x140, 0x40, true, 0xd60fa178a9a869b6)
#define _o43 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_FLT_PARAMETERS.QueryOpen.Irp", irp, 0x0, 0x40, true, 0xb092647e96239bce)
#define _o44 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_PARAMETERS.QueryOpen.FileInformation", file_information, 0x40, 0x40, true, 0xedfd9308976e6afa)
#define _o45 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_FLT_PARAMETERS.QueryOpen.Length", length, 0x80, 0x40, true, 0x43587d463f92378f)
#define _o46 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::file_information_class_t), "_FLT_PARAMETERS.QueryOpen.FileInformationClass", file_information_class, 0xc0, 0x20, true, 0x67830fbb88b5e5d2)
#else
#define _m00
#define _m007
#define _m01
#define _m012
#define _m017
#define _m02
#define _m023
#define _m029
#define _m03
#define _m033
#define _m04
#define _m042
#define _m049
#define _m05
#define _m053
#define _m057
#define _m06
#define _m061
#define _m08
#define _m080
#define _m09
#define _m10
#define _m107
#define _m11
#define _m13
#define _m137
#define _m14
#define _m144
#define _m149
#define _m15
#define _m152
#define _m157
#define _m16
#define _m164
#define _m168
#define _m18
#define _m19
#define _m199
#define _m20
#define _m205
#define _m208
#define _m21
#define _m210
#define _m215
#define _m218
#define _m22
#define _m223
#define _m225
#define _m230
#define _m233
#define _m235
#define _m24
#define _m242
#define _m247
#define _m25
#define _m26
#define _m27
#define _m28
#define _m30
#define _m31
#define _m32
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#define _m43
#define _m44
#define _m45
#define _m46
#define _m47
#define _m48
#define _m50
#define _m51
#define _m52
#define _m54
#define _m55
#define _m56
#define _m58
#define _m59
#define _m60
#define _m62
#define _m63
#define _m64
#define _m65
#define _m66
#define _m67
#define _m68
#define _m69
#define _m70
#define _m71
#define _m72
#define _m73
#define _m74
#define _m75
#define _m76
#define _m77
#define _m78
#define _m79
#define _m81
#define _m82
#define _m83
#define _m84
#define _m85
#define _m86
#define _m87
#define _m88
#define _m89
#define _m90
#define _m91
#define _m92
#define _m93
#define _m94
#define _m95
#define _m96
#define _m97
#define _m98
#define _m99
#define _n00
#define _n01
#define _n02
#define _n03
#define _n04
#define _n05
#define _n06
#define _n08
#define _n09
#define _n10
#define _n11
#define _n12
#define _n13
#define _n14
#define _n15
#define _n16
#define _n17
#define _n18
#define _n19
#define _n20
#define _n21
#define _n22
#define _n23
#define _n24
#define _n25
#define _n26
#define _n27
#define _n28
#define _n29
#define _n30
#define _n31
#define _n32
#define _n33
#define _n34
#define _n35
#define _n36
#define _n38
#define _n39
#define _n40
#define _n41
#define _n42
#define _n43
#define _n45
#define _n46
#define _n47
#define _n48
#define _n50
#define _n51
#define _n53
#define _n54
#define _n55
#define _n56
#define _n58
#define _n59
#define _n60
#define _n61
#define _n62
#define _n63
#define _n65
#define _n66
#define _n67
#define _n69
#define _n70
#define _n71
#define _n72
#define _n73
#define _n74
#define _n75
#define _n76
#define _n77
#define _n78
#define _n79
#define _n80
#define _n81
#define _n82
#define _n83
#define _n84
#define _n85
#define _n86
#define _n87
#define _n88
#define _n89
#define _n90
#define _n91
#define _n92
#define _n93
#define _n94
#define _n95
#define _n96
#define _n97
#define _n98
#define _o00
#define _o01
#define _o02
#define _o03
#define _o04
#define _o06
#define _o07
#define _o09
#define _o11
#define _o12
#define _o13
#define _o14
#define _o16
#define _o17
#define _o19
#define _o20
#define _o21
#define _o22
#define _o24
#define _o26
#define _o27
#define _o28
#define _o29
#define _o31
#define _o32
#define _o34
#define _o36
#define _o37
#define _o38
#define _o39
#define _o40
#define _o41
#define _o43
#define _o44
#define _o45
#define _o46
#endif