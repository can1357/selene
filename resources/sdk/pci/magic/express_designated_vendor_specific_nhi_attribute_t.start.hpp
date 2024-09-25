#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_NHI_ATTRIBUTE.NhiInstance", nhi_instance, 0x0, 0x0, false, 0xda7d314c297f9528, 3, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint29_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_NHI_ATTRIBUTE.Resevered", resevered, 0x0, 0x0, false, 0x6c491009f53789ba, 29, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_NHI_ATTRIBUTE.AsULONG", as_ulong, 0x0, 0x0, false, 0xd001a8b65c4aa629)
#else
#define _m00
#define _m01
#define _m02
#endif