#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_WIM_PROVIDER_UPDATE_OVERLAY_INPUT.DataSourceId", data_source_id, 0x0, 0x40, true, 0x42ad488fb96df418)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIM_PROVIDER_UPDATE_OVERLAY_INPUT.WimFileNameOffset", wim_file_name_offset, 0x40, 0x20, true, 0x632a5215440625ff)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIM_PROVIDER_UPDATE_OVERLAY_INPUT.WimFileNameLength", wim_file_name_length, 0x60, 0x20, true, 0x2bfa0b3c2c53822e)
#else
#define _m00
#define _m01
#define _m02
#endif