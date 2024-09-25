#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::error_packet_v2_t), "_EXPRESS_ERROR_PACKET.Header", header, 0x0, 0x80, true, 0x6661532caa4c6cc4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::pciexpress_error_section_t), "_EXPRESS_ERROR_PACKET.PciExpressError", pci_express_error, 0x280, 0x80, true, 0x9662a55a5ce84031)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_dpc_capability_t), "_EXPRESS_ERROR_PACKET.ExpressPcCapability", express_pc_capability, 0x900, 0x20, true, 0xbbaf5195bb6ba045)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_ERROR_PACKET.ExpressPcInfoValid", express_pc_info_valid, 0xb20, 0x8, true, 0x7e7fb4f2a6b5834b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif