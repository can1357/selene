#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_MSI_MESSAGE_CONTROL.MSIEnable", msi_enable, 0x0, 0x1, true, 0x7d8190f1f0107830, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_MSI_MESSAGE_CONTROL.MultipleMessageCapable", multiple_message_capable, 0x1, 0x3, true, 0xe89714e17ba689de, 3, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_MSI_MESSAGE_CONTROL.MultipleMessageEnable", multiple_message_enable, 0x4, 0x3, true, 0xff2ca7c4d7bb7e88, 3, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_MSI_MESSAGE_CONTROL.CapableOf64Bits", capable_of64_bits, 0x7, 0x1, true, 0x7953e63375b76ceb, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_MSI_MESSAGE_CONTROL.PerVectorMaskCapable", per_vector_mask_capable, 0x8, 0x1, true, 0x12ae9f24f451dac, 1, uint16_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_MSI_MESSAGE_CONTROL.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x424b24dd65e582f3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif