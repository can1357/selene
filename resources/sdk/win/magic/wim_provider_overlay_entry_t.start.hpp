#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIM_PROVIDER_OVERLAY_ENTRY.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x46e9244b7e4b8f69)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_WIM_PROVIDER_OVERLAY_ENTRY.DataSourceId", data_source_id, 0x40, 0x40, true, 0x5188f790129f4a0e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WIM_PROVIDER_OVERLAY_ENTRY.WimGuid", wim_guid, 0x80, 0x80, true, 0x3570e7367a99ff00)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIM_PROVIDER_OVERLAY_ENTRY.WimFileNameOffset", wim_file_name_offset, 0x100, 0x20, true, 0x2c7a005d3dc5ae3e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIM_PROVIDER_OVERLAY_ENTRY.WimType", wim_type, 0x120, 0x20, true, 0xd29e073ab2c43e87)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIM_PROVIDER_OVERLAY_ENTRY.WimIndex", wim_index, 0x140, 0x20, true, 0xa1d58955548216b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIM_PROVIDER_OVERLAY_ENTRY.Flags", flags, 0x160, 0x20, true, 0xf68ff7ea20d4aeea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif