#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIM_PROVIDER_EXTERNAL_INFO.Version", version, 0x0, 0x20, true, 0xf9c10d26f1b9f72c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIM_PROVIDER_EXTERNAL_INFO.Flags", flags, 0x20, 0x20, true, 0xb0067125cd5e1c3b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_WIM_PROVIDER_EXTERNAL_INFO.DataSourceId", data_source_id, 0x40, 0x40, true, 0x7cea0f01cfcf8c2a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_WIM_PROVIDER_EXTERNAL_INFO.ResourceHash", resource_hash, 0x80, 0xa0, true, 0xb53713f5eff5b87e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif