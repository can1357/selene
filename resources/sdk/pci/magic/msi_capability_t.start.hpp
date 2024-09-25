#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::capabilities_header_t), "PCI_MSI_CAPABILITY.Header", header, 0x0, 0x10, true, 0x576d26ad3b2a6036)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "PCI_MSI_CAPABILITY.MessageAddressLower.Register.Address", address, 0x2, 0x1e, true, 0x58e0ac4e773135e2, 30, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4__register_t), "PCI_MSI_CAPABILITY.MessageAddressLower.Register", _register, 0x0, 0x20, true, 0x4d65daa64c0836eb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PCI_MSI_CAPABILITY.MessageAddressLower.Raw", raw, 0x0, 0x20, true, 0x959cc83d9fbecf7a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_message_address_lower_t), "PCI_MSI_CAPABILITY.MessageAddressLower", message_address_lower, 0x20, 0x20, true, 0xf3bcfb2e0c428a4d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "PCI_MSI_CAPABILITY.Option32Bit.MessageData", message_data, 0x0, 0x10, true, 0x826ad7963adc0be0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PCI_MSI_CAPABILITY.Option32Bit.MaskBits", mask_bits, 0x20, 0x20, true, 0x6305b08e3ff2dde)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PCI_MSI_CAPABILITY.Option32Bit.PendingBits", pending_bits, 0x40, 0x20, true, 0x66f340eea8cf2845)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_option32_bit_t), "PCI_MSI_CAPABILITY.Option32Bit", option32_bit, 0x40, 0x60, true, 0x56c4cccdf3630b2d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PCI_MSI_CAPABILITY.Option64Bit.MessageAddressUpper", message_address_upper, 0x0, 0x20, true, 0x1eb88b78b0dc8d32)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "PCI_MSI_CAPABILITY.Option64Bit.MessageData", message_data, 0x20, 0x10, true, 0xb70ba2361d3f728d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PCI_MSI_CAPABILITY.Option64Bit.MaskBits", mask_bits, 0x40, 0x20, true, 0xc3e17d4d4fa7bfc8)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PCI_MSI_CAPABILITY.Option64Bit.PendingBits", pending_bits, 0x60, 0x20, true, 0x9c43bdae659f87b9)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_option64_bit_t), "PCI_MSI_CAPABILITY.Option64Bit", option64_bit, 0x40, 0x80, true, 0x27c14726b51b1a2d)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::msi_message_control_t), "PCI_MSI_CAPABILITY.MessageControl", message_control, 0x10, 0x10, true, 0x7e562cf5a7483f2d)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif