#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DLL_LOADED_NOTIFICATION_DATA.Flags", flags, 0x0, 0x20, true, 0xa97a2e85794aa97e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<nt::unicode_view*, const nt::unicode_view*>), "_LDR_DLL_LOADED_NOTIFICATION_DATA.FullDllName", full_dll_name, 0x40, 0x40, true, 0x2a4858d213f7f93d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<nt::unicode_view*, const nt::unicode_view*>), "_LDR_DLL_LOADED_NOTIFICATION_DATA.BaseDllName", base_dll_name, 0x80, 0x40, true, 0x7136ae87c932deda)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_LDR_DLL_LOADED_NOTIFICATION_DATA.DllBase", dll_base, 0xc0, 0x40, true, 0x7a380c8816268aef)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_DLL_LOADED_NOTIFICATION_DATA.SizeOfImage", size_of_image, 0x100, 0x20, true, 0x9a7f7898722da211)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif