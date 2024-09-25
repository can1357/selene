#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_REGISTRY.InitialTime", initial_time, 0x0, 0x40, true, 0x4e310921d7173a1b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_REGISTRY.Status", status, 0x40, 0x20, true, 0xcbda46f11fa742ce)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_REGISTRY.Index", index, 0x60, 0x20, true, 0xcf632a4cd3e9ff93)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_REGISTRY.InfoClass", info_class, 0x60, 0x20, true, 0xe3ab3f6446c9856f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_REGISTRY.Kcb", kcb, 0x80, 0x40, true, 0x31ba5cecdb44097e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_REGISTRY.Name", name, 0xc0, 0x10, true, 0x2647ff70b55214ef)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif