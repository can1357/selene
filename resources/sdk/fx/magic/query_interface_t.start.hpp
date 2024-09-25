#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "FxQueryInterface.m_InterfaceType", m_interface_type, 0x0, 0x80, true, 0xcac45dc33801fbb1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interface_t*), "FxQueryInterface.m_Interface", m_interface, 0x80, 0x40, true, 0xf9fd084dc2272b97)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxQueryInterface.m_Device", m_device, 0xc0, 0x40, true, 0x3acc2ad06adaacf4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_process_query_interface_request_t), "FxQueryInterface.m_ProcessRequest", m_process_request, 0x100, 0x40, true, 0x1a95135c99a067f8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxQueryInterface.m_Entry", m_entry, 0x140, 0x40, true, 0xc6ecaad86c18973)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxQueryInterface.m_ImportInterface", m_import_interface, 0x180, 0x8, true, 0x811cc95bfcb20435)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxQueryInterface.m_SendQueryToParentStack", m_send_query_to_parent_stack, 0x188, 0x8, true, 0xf9b8c0da3065b161)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxQueryInterface.m_EmbeddedInterface", m_embedded_interface, 0x190, 0x8, true, 0x998ea4faf6473b91)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif