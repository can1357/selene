#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY.EntryLength", entry_length, 0x0, 0x20, true, 0xcb3eecdbc319365a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY.DependencyTypeFlags", dependency_type_flags, 0x20, 0x20, true, 0x45f7c316d0b912ed)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY.ProviderSpecificFlags", provider_specific_flags, 0x40, 0x20, true, 0x57f77f71f00d09ac)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::virtual_storage_type_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY.VirtualStorageType", virtual_storage_type, 0x60, 0xa0, true, 0xce5d4450513d7dd5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY.AncestorLevel", ancestor_level, 0x100, 0x20, true, 0xd9e96aa0bc9451c1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY.HostVolumeNameOffset", host_volume_name_offset, 0x120, 0x20, true, 0x8698742fac0e1970)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY.HostVolumeNameSize", host_volume_name_size, 0x140, 0x20, true, 0x143b454f5e5b33e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY.DependentVolumeNameOffset", dependent_volume_name_offset, 0x160, 0x20, true, 0x9411c8bccd25ae6b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY.DependentVolumeNameSize", dependent_volume_name_size, 0x180, 0x20, true, 0x3a0f8a4ec1c42005)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY.RelativePathOffset", relative_path_offset, 0x1a0, 0x20, true, 0x1f3bac3cad9eeda7)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY.RelativePathSize", relative_path_size, 0x1c0, 0x20, true, 0xa0ed738e4b0b4201)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY.DependentDeviceNameOffset", dependent_device_name_offset, 0x1e0, 0x20, true, 0xbf1fa545f7e03ced)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY.DependentDeviceNameSize", dependent_device_name_size, 0x200, 0x20, true, 0xcb12e2410a808401)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif