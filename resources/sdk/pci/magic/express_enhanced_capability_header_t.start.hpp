#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER.CapabilityID", capability_id, 0x0, 0x10, true, 0xfb42b4d2c91b3351)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER.Version", version, 0x10, 0x4, true, 0x4bf8be84fb6fa621, 4, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER.Next", next, 0x14, 0xc, true, 0x80485720b4b7b73f, 12, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#endif