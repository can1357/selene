#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_DPC_ERROR_SOURCE_ID.Function", function, 0x0, 0x0, false, 0xef1461a4147b09ae, 3, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_DPC_ERROR_SOURCE_ID.Device", device, 0x0, 0x0, false, 0xbca445ebbfd492db, 5, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_DPC_ERROR_SOURCE_ID.Bus", bus, 0x0, 0x0, false, 0xc2cbc313e5b61d43, 8, uint16_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_DPC_ERROR_SOURCE_ID.AsUSHORT", as_ushort, 0x0, 0x0, false, 0xc2c816fbbb27b036)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif