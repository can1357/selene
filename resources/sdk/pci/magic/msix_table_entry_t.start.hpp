#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "PCI_MSIX_TABLE_ENTRY.MessageAddress", message_address, 0x0, 0x40, true, 0xa5e27624759e5b48)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PCI_MSIX_TABLE_ENTRY.MessageData", message_data, 0x40, 0x20, true, 0x87c12a68c27f720a)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PCI_MSIX_TABLE_ENTRY.VectorControl.Mask", mask, 0x0, 0x1, true, 0xe607252c0b9888ea, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "PCI_MSIX_TABLE_ENTRY.VectorControl.StLower", st_lower, 0x10, 0x8, true, 0xd55d7bc58ac39dc6, 8, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "PCI_MSIX_TABLE_ENTRY.VectorControl.StUpper", st_upper, 0x18, 0x8, true, 0x14b98465d5b98c6e, 8, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_vector_control_t), "PCI_MSIX_TABLE_ENTRY.VectorControl", vector_control, 0x60, 0x20, true, 0xe0c3903b4d29348d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif