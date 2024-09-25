#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_LDR_ENUM_RESOURCE_ENTRY.Path.NameOrId", name_or_id, 0x0, 0x40, true, 0x2169a01b20525769)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct image::resource_directory_string_t*), "_LDR_ENUM_RESOURCE_ENTRY.Path.Name", name, 0x0, 0x40, true, 0x6a735d2200d3ec0c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_LDR_ENUM_RESOURCE_ENTRY.Path.Id", id, 0x0, 0x10, true, 0xecf2e743739ecc72)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_LDR_ENUM_RESOURCE_ENTRY.Path.NameIsPresent", name_is_present, 0x10, 0x10, true, 0x61363db0a23eeeed)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<u0_path_t, 3>), "_LDR_ENUM_RESOURCE_ENTRY.Path", path, 0x0, 0xc0, true, 0xed7d760d0708fdc1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_LDR_ENUM_RESOURCE_ENTRY.Data", data, 0xc0, 0x40, true, 0xc4048560166d6c73)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_ENUM_RESOURCE_ENTRY.Size", size, 0x100, 0x20, true, 0xeb40fee96d9561f1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif