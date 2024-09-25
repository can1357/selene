#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "NDIS_KNOB_INFORMATION.CurrentValue", current_value, 0x0, 0x0, false, 0x2b4f32976d7ec943)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "NDIS_KNOB_INFORMATION.DefaultValue", default_value, 0x0, 0x0, false, 0xc87e1498615308b9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "NDIS_KNOB_INFORMATION.MinimumValue", minimum_value, 0x0, 0x0, false, 0x1074ed6b775af192)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "NDIS_KNOB_INFORMATION.MaximumValue", maximum_value, 0x0, 0x0, false, 0x4a8be4445649897)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::config_knob_flag_t), "NDIS_KNOB_INFORMATION.Flags", flags, 0x0, 0x0, false, 0xc74755e39d304c50)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::config_knob_source_t), "NDIS_KNOB_INFORMATION.Source", source, 0x0, 0x0, false, 0x668929458ee23fe)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDIS_KNOB_INFORMATION.LastUpdateStatus", last_update_status, 0x0, 0x0, false, 0xf1c5f475f889bc2a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif