#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY.EntryLength", entry_length, 0x0, 0x20, true, 0xff8f54cc5d85abca)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY.DependencyTypeFlags", dependency_type_flags, 0x20, 0x20, true, 0xce903a0c5b38d656)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY.ProviderSpecificFlags", provider_specific_flags, 0x40, 0x20, true, 0x7c316a45e3b24b47)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::virtual_storage_type_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY.VirtualStorageType", virtual_storage_type, 0x60, 0xa0, true, 0xdc717ef3579dfc6c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif