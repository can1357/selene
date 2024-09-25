#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CREATE_PROCESS_DEBUG_INFO.hFile", h_file, 0x0, 0x40, true, 0x55a4b536d90b7edb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CREATE_PROCESS_DEBUG_INFO.hProcess", h_process, 0x40, 0x40, true, 0x45909ba397590b17)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CREATE_PROCESS_DEBUG_INFO.hThread", h_thread, 0x80, 0x40, true, 0xe2c5c1a9a4faacec)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CREATE_PROCESS_DEBUG_INFO.lpBaseOfImage", lp_base_of_image, 0xc0, 0x40, true, 0x8cd8bc67ce03ba60)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CREATE_PROCESS_DEBUG_INFO.dwDebugInfoFileOffset", dw_debug_info_file_offset, 0x100, 0x20, true, 0xe675719bb4d2131a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CREATE_PROCESS_DEBUG_INFO.nDebugInfoSize", n_debug_info_size, 0x120, 0x20, true, 0x74b6fea756ac5b7f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CREATE_PROCESS_DEBUG_INFO.lpThreadLocalBase", lp_thread_local_base, 0x140, 0x40, true, 0x5b29d42c63078dac)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*)>*), "_CREATE_PROCESS_DEBUG_INFO.lpStartAddress", lp_start_address, 0x180, 0x40, true, 0xe2b36c87e79474f0)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CREATE_PROCESS_DEBUG_INFO.lpImageName", lp_image_name, 0x1c0, 0x40, true, 0xffd7b1e1fec5c86d)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CREATE_PROCESS_DEBUG_INFO.fUnicode", f_unicode, 0x200, 0x10, true, 0x389f7f4fc64286e4)
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
#endif