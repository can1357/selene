#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_QUALITY_OF_SERVICE.Length", length, 0x0, 0x20, true, 0xe700422b32bd9ed9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum sec::impersonation_level_t), "_SECURITY_QUALITY_OF_SERVICE.ImpersonationLevel", impersonation_level, 0x20, 0x20, true, 0xaceba55eb5f1da92)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_QUALITY_OF_SERVICE.ContextTrackingMode", context_tracking_mode, 0x40, 0x8, true, 0x3f3f3336b7e966be)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_QUALITY_OF_SERVICE.EffectiveOnly", effective_only, 0x48, 0x8, true, 0x668fa96f152ca1c7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif