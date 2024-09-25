#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "FxDeviceInterface.m_InterfaceClassGUID", m_interface_class_guid, 0x0, 0x80, true, 0xb41c10d0441fc464)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "FxDeviceInterface.m_ReferenceString", m_reference_string, 0x80, 0x80, true, 0x70ae73a749b20173)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "FxDeviceInterface.m_SymbolicLinkName", m_symbolic_link_name, 0x100, 0x80, true, 0x9609031aff967bbe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxDeviceInterface.m_Entry", m_entry, 0x180, 0x40, true, 0x227188fbc71d1007)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDeviceInterface.m_State", m_state, 0x1c0, 0x8, true, 0xa101378ded44ce8e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDeviceInterface.m_AutoEnableOnFirstStart", m_auto_enable_on_first_start, 0x1c8, 0x8, true, 0x6be07ba1f5f9a074)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif