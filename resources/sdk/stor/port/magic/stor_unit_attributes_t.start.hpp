#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_UNIT_ATTRIBUTES.DeviceAttentionSupported", device_attention_supported, 0x0, 0x1, true, 0x8fa516b73cad1ef3, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_UNIT_ATTRIBUTES.AsyncNotificationSupported", async_notification_supported, 0x1, 0x1, true, 0x3dcbdc05d7689a90, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_UNIT_ATTRIBUTES.D3ColdNotSupported", d3_cold_not_supported, 0x2, 0x1, true, 0x2322d0706a227812, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif