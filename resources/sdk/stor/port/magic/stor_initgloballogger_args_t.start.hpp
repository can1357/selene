#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_STOR_INITGLOBALLOGGER_ARGS.ControlGuid", control_guid, 0x0, 0x40, true, 0x303f1421f9dd6aa3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_INITGLOBALLOGGER_ARGS.Logger", logger, 0x40, 0x40, true, 0x30d351e9ac39ae43)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_INITGLOBALLOGGER_ARGS.Flags", flags, 0x80, 0x40, true, 0xf72637bb9fb9d91)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_INITGLOBALLOGGER_ARGS.Level", level, 0xc0, 0x40, true, 0xf08db9c4c49672a6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif