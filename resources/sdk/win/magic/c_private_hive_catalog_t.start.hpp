#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(add_c_t, _SDK_ESCAPE(const uint32_t), "CPrivateHiveCatalog.m_regView", m_reg_view, 0x80, 0x20, true, 0x57e52df8e409dd46, 32, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hkey_t*), "CPrivateHiveCatalog.m_hkeyClassesRoot", m_hkey_classes_root, 0xc0, 0x40, true, 0x1a85174f2baca82f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum win::registration_source_t), "CPrivateHiveCatalog.m_source", m_source, 0x100, 0x20, true, 0xf83c8c147f89d724)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CPrivateHiveCatalog.m_cRef", m_c_ref, 0x120, 0x20, true, 0x2ffb313d64300ee3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "CPrivateHiveCatalog.m_regWowArchitecture", m_reg_wow_architecture, 0xa0, 0x10, true, 0x99c272fc963a8ecd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif