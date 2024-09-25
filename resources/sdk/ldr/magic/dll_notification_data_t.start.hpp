#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ldr::dll_loaded_notification_data_t), "_LDR_DLL_NOTIFICATION_DATA.Loaded", loaded, 0x0, 0x40, true, 0x6640da2081f3b8b5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ldr::dll_unloaded_notification_data_t), "_LDR_DLL_NOTIFICATION_DATA.Unloaded", unloaded, 0x0, 0x40, true, 0x5c0708eb472598dd)
#else
#define _m00
#define _m01
#endif