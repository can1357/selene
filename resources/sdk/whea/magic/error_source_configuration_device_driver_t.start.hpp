#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER.Version", version, 0x0, 0x20, true, 0x8b8b34ece81b1a04)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER.SourceGuid", source_guid, 0x20, 0x80, true, 0x30d53cb94856326a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER.LogTag", log_tag, 0xa0, 0x10, true, 0xd13723856f7a814f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER.Initialize", initialize, 0xe0, 0x40, true, 0xc610c400e6e57f92)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER.Uninitialize", uninitialize, 0x120, 0x40, true, 0x765ea08cb359996c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER.MaxSectionDataLength", max_section_data_length, 0x160, 0x20, true, 0x735e7d86426cd69c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER.MaxSectionsPerReport", max_sections_per_report, 0x180, 0x20, true, 0x160b9d9b02ccc8f8)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER.CreatorId", creator_id, 0x1a0, 0x80, true, 0xd528fa2e8e806164)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER.PartitionId", partition_id, 0x220, 0x80, true, 0x6605193ff08d532)
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
#endif