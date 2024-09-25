#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(add_c_t, _SDK_ESCAPE(const uint32_t), "CSystemRegistryCatalog.m_regView", m_reg_view, 0x80, 0x20, true, 0x57e56a1d71b0320b, 32, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hkey_t*), "CSystemRegistryCatalog.m_hkeyClassesRoot", m_hkey_classes_root, 0xc0, 0x40, true, 0x40e7330573a43e62)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum win::registration_source_t), "CSystemRegistryCatalog.m_source", m_source, 0x100, 0x20, true, 0x76a886ee448f9c65)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CSystemRegistryCatalog.m_cRef", m_c_ref, 0x120, 0x20, true, 0x807ae6c272a1cd92)
#define _m04 _SDK_MAGIC_BITFIELD(add_c_t, _SDK_ESCAPE(const uint32_t), "CSystemRegistryCatalog.m_regViewOther", m_reg_view_other, 0x140, 0x20, true, 0xf0b8a5789ce0da5b, 32, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "CSystemRegistryCatalog.m_regWowArchitecture", m_reg_wow_architecture, 0xa0, 0x10, true, 0x28d02817b032192a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif