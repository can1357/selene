#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(add_c_t, _SDK_ESCAPE(const uint32_t), "CComRegCatalog.m_regView", m_reg_view, 0x80, 0x20, true, 0xe2aaf26205c86408, 32, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hkey_t*), "CComRegCatalog.m_hkeyClassesRoot", m_hkey_classes_root, 0xc0, 0x40, true, 0x4b151dfc8b86b249)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum win::registration_source_t), "CComRegCatalog.m_source", m_source, 0x100, 0x20, true, 0xb0fb27224de34600)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComRegCatalog.m_cRef", m_c_ref, 0x120, 0x20, true, 0xa4c5d34421eced7f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "CComRegCatalog.m_regWowArchitecture", m_reg_wow_architecture, 0xa0, 0x10, true, 0xb14272df9150fd95)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif