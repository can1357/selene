#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_LOAD_DLL_DEBUG_INFO.hFile", h_file, 0x0, 0x40, true, 0x87e76e0787d99baf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_LOAD_DLL_DEBUG_INFO.lpBaseOfDll", lp_base_of_dll, 0x40, 0x40, true, 0x38bc6e58fe3d57f1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOAD_DLL_DEBUG_INFO.dwDebugInfoFileOffset", dw_debug_info_file_offset, 0x80, 0x20, true, 0xc944fb096493d980)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOAD_DLL_DEBUG_INFO.nDebugInfoSize", n_debug_info_size, 0xa0, 0x20, true, 0x5d2ca1bde2ca8baf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_LOAD_DLL_DEBUG_INFO.lpImageName", lp_image_name, 0xc0, 0x40, true, 0x893e8e2c95a127cf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_LOAD_DLL_DEBUG_INFO.fUnicode", f_unicode, 0x100, 0x10, true, 0x2dbcf8976155fd45)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif