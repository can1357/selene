#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DLL_UNLOADED_NOTIFICATION_DATA.Flags", flags, 0x0, 0x20, true, 0x7335d1ff85ddd1cc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const nt::unicode_view*), "_LDR_DLL_UNLOADED_NOTIFICATION_DATA.FullDllName", full_dll_name, 0x40, 0x40, true, 0xda085dad5be4ab50)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const nt::unicode_view*), "_LDR_DLL_UNLOADED_NOTIFICATION_DATA.BaseDllName", base_dll_name, 0x80, 0x40, true, 0x16ddef7fcd4b2e5f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_LDR_DLL_UNLOADED_NOTIFICATION_DATA.DllBase", dll_base, 0xc0, 0x40, true, 0xed19b1fadf92b457)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DLL_UNLOADED_NOTIFICATION_DATA.SizeOfImage", size_of_image, 0x100, 0x20, true, 0xfb4f76f7554da4dd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif