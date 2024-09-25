#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RESOURCEMANAGER_BASIC_INFORMATION.ResourceManagerId", resource_manager_id, 0x0, 0x80, true, 0x7ce2cfc436e9c647)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RESOURCEMANAGER_BASIC_INFORMATION.DescriptionLength", description_length, 0x80, 0x20, true, 0x8e41c2afe96902bd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_RESOURCEMANAGER_BASIC_INFORMATION.Description", description, 0xa0, 0x10, true, 0xbcfd55719c93abd9)
#else
#define _m00
#define _m01
#define _m02
#endif