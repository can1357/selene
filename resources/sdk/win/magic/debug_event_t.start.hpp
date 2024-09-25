#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEBUG_EVENT.dwDebugEventCode", dw_debug_event_code, 0x0, 0x20, true, 0x3aeb568b4609a433)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEBUG_EVENT.dwProcessId", dw_process_id, 0x20, 0x20, true, 0xcce4607b058895e0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEBUG_EVENT.dwThreadId", dw_thread_id, 0x40, 0x20, true, 0xbb14f17ed753c685)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::exception_debug_info_t), "_DEBUG_EVENT.Exception", exception, 0x80, 0x0, true, 0x95b7d0c4d2667bd4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::create_thread_debug_info_t), "_DEBUG_EVENT.CreateThread", create_thread, 0x80, 0xc0, true, 0xac37f4e62e091faf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::create_process_debug_info_t), "_DEBUG_EVENT.CreateProcessInfo", create_process_info, 0x80, 0x40, true, 0x74b3320de5807fc7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::exit_thread_debug_info_t), "_DEBUG_EVENT.ExitThread", exit_thread, 0x80, 0x20, true, 0x9a259768cfd240b3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::exit_process_debug_info_t), "_DEBUG_EVENT.ExitProcess", exit_process, 0x80, 0x20, true, 0x2d8f3fcd19c2a5fa)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::load_dll_debug_info_t), "_DEBUG_EVENT.LoadDll", load_dll, 0x80, 0x40, true, 0x2135f8d10730ce24)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::unload_dll_debug_info_t), "_DEBUG_EVENT.UnloadDll", unload_dll, 0x80, 0x40, true, 0xa039584bf1ee4b37)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::output_debug_string_info_t), "_DEBUG_EVENT.DebugString", debug_string, 0x80, 0x80, true, 0x121af1592235d981)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rip_info_t), "_DEBUG_EVENT.RipInfo", rip_info, 0x80, 0x40, true, 0xa49395822b9376b0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif