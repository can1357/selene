#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_REGNOTIF_REGISTER.Notification", notification, 0x0, 0x40, true, 0x19b56dac4b60bf39)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_REGNOTIF_REGISTER.Kcb", kcb, 0x40, 0x40, true, 0x139c0ff933e46172)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_REGNOTIF_REGISTER.Type", type, 0x80, 0x8, true, 0x84f773f46a7c0e5c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_REGNOTIF_REGISTER.WatchTree", watch_tree, 0x88, 0x8, true, 0x263584d880a90285)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_REGNOTIF_REGISTER.Primary", primary, 0x90, 0x8, true, 0x853b4df39e5acb3e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif