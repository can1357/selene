#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES.Header", header, 0x0, 0x20, true, 0xa016e6df8ac6f2e9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES.DeviceType", device_type, 0x20, 0x20, true, 0x7ed2e81c0bcf64ea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES.CurrentSpeedAndMode", current_speed_and_mode, 0x40, 0x20, true, 0xa4b612503bcd3e77)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES.CurrentPayloadSize", current_payload_size, 0x60, 0x20, true, 0xa8f677f57d4c46f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES.MaxPayloadSize", max_payload_size, 0x80, 0x20, true, 0x2345ba2b79b80b15)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES.MaxReadRequestSize", max_read_request_size, 0xa0, 0x20, true, 0x77ed7bd80b7c76e6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES.CurrentLinkSpeed", current_link_speed, 0xc0, 0x20, true, 0xea90d3de5b031dda)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES.CurrentLinkWidth", current_link_width, 0xe0, 0x20, true, 0xa42827e36413a484)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES.MaxLinkSpeed", max_link_speed, 0x100, 0x20, true, 0xd267c00e4f074cd6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES.MaxLinkWidth", max_link_width, 0x120, 0x20, true, 0xaddb3987b9b36eac)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES.PciExpressVersion", pci_express_version, 0x140, 0x20, true, 0xa4b654d1739c8551)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES.InterruptType", interrupt_type, 0x160, 0x20, true, 0x54976dc2ad63430b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES.MaxInterruptMessages", max_interrupt_messages, 0x180, 0x20, true, 0xe256f8e23f14098f)
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
#endif