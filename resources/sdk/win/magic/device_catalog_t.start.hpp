#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "DeviceCatalog.m_regView", m_reg_view, 0x80, 0x20, true, 0x6bd0a13c2e6dd4f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "DeviceCatalog.m_regWowArchitecture", m_reg_wow_architecture, 0xa0, 0x10, true, 0x46aec502bc3b65a5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hkey_t const*), "DeviceCatalog.m_hkeyClassesRoot", m_hkey_classes_root, 0xc0, 0x40, true, 0x31140b8b294c3568)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum win::registration_source_t), "DeviceCatalog.m_source", m_source, 0x100, 0x20, true, 0xb266e5762c8b3696)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "DeviceCatalog.m_cRef", m_c_ref, 0x120, 0x20, true, 0x24a30b5ccf164f02)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "DeviceCatalog.m_regArchitecture", m_reg_architecture, 0x140, 0x20, true, 0xb986439ffa971217, 0, uint32_t,uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif