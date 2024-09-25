#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_FX_TELEMETRY_CONTEXT.DriverSessionGUID", driver_session_guid, 0x0, 0x80, true, 0xdb0aad56b3190b0c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_FX_TELEMETRY_CONTEXT.DoOnceFlagsBitmap", do_once_flags_bitmap, 0x80, 0x20, true, 0x6458718bf9c7fb73)
#else
#define _m00
#define _m01
#endif