#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "MachineWideRegCatalog.m_regView", m_reg_view, 0x80, 0x20, true, 0x488a524b2c58f665)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "MachineWideRegCatalog.m_regWowArchitecture", m_reg_wow_architecture, 0xa0, 0x10, true, 0x2bc9845a5b153980)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hkey_t const*), "MachineWideRegCatalog.m_hkeyClassesRoot", m_hkey_classes_root, 0xc0, 0x40, true, 0x3ad59752fe94eaa3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum win::registration_source_t), "MachineWideRegCatalog.m_source", m_source, 0x100, 0x20, true, 0xbbbdf4f5531dec7b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "MachineWideRegCatalog.m_cRef", m_c_ref, 0x120, 0x20, true, 0xb27dc9b12870ffb3)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "MachineWideRegCatalog.m_regArchitecture", m_reg_architecture, 0x140, 0x20, true, 0x3192ec6d75f547b, 0, uint32_t,uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif