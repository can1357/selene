#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACTCTXA.cbSize", cb_size, 0x0, 0x20, true, 0x273aedf8eef63472)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACTCTXA.dwFlags", dw_flags, 0x20, 0x20, true, 0x8c8020b789e117c7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagACTCTXA.lpSource", lp_source, 0x40, 0x40, true, 0x177fbbcd8dd577f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagACTCTXA.wProcessorArchitecture", w_processor_architecture, 0x80, 0x10, true, 0xdd22a9cb5fd5d736)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagACTCTXA.wLangId", w_lang_id, 0x90, 0x10, true, 0x4161753bdbd6e5fc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagACTCTXA.lpAssemblyDirectory", lp_assembly_directory, 0xc0, 0x40, true, 0x86254f4cdd449a02)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagACTCTXA.lpResourceName", lp_resource_name, 0x100, 0x40, true, 0x5d54587c00637e32)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagACTCTXA.lpApplicationName", lp_application_name, 0x140, 0x40, true, 0xa157cf04995ca801)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hinstance_t*), "tagACTCTXA.hModule", h_module, 0x180, 0x40, true, 0x3d83e8dbe0198c42)
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
#endif