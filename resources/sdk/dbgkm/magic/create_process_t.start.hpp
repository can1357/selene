#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKM_CREATE_PROCESS.SubSystemKey", sub_system_key, 0x0, 0x20, true, 0xb8358124a142e65d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DBGKM_CREATE_PROCESS.FileHandle", file_handle, 0x40, 0x40, true, 0xca557a5bb7be0ddc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DBGKM_CREATE_PROCESS.BaseOfImage", base_of_image, 0x80, 0x40, true, 0x4f10b6e34703a000)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKM_CREATE_PROCESS.DebugInfoFileOffset", debug_info_file_offset, 0xc0, 0x20, true, 0xf6ca2631a0a65016)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKM_CREATE_PROCESS.DebugInfoSize", debug_info_size, 0xe0, 0x20, true, 0x78e07f58839d91ab)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dbgkm::create_thread_t), "_DBGKM_CREATE_PROCESS.InitialThread", initial_thread, 0x100, 0x80, true, 0xc47a858404e89a41)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif