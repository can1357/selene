#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACTCTXW.cbSize", cb_size, 0x0, 0x20, true, 0x8d431202b35e7e86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACTCTXW.dwFlags", dw_flags, 0x20, 0x20, true, 0x28ff55dc0a63c0b1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagACTCTXW.lpSource", lp_source, 0x40, 0x40, true, 0xbcebd85890ca35f3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagACTCTXW.wProcessorArchitecture", w_processor_architecture, 0x80, 0x10, true, 0x28edc71810e2dc4f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagACTCTXW.wLangId", w_lang_id, 0x90, 0x10, true, 0x6d31c721b8650cfa)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagACTCTXW.lpAssemblyDirectory", lp_assembly_directory, 0xc0, 0x40, true, 0x623af51d21144eeb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagACTCTXW.lpResourceName", lp_resource_name, 0x100, 0x40, true, 0x7c3e96bcd1a4f8f3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagACTCTXW.lpApplicationName", lp_application_name, 0x140, 0x40, true, 0x580015a85bb05510)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hinstance_t*), "tagACTCTXW.hModule", h_module, 0x180, 0x40, true, 0x4f1f8aca9915cc27)
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