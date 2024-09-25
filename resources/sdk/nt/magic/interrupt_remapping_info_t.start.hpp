#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_INTERRUPT_REMAPPING_INFO.IrtIndex", irt_index, 0x0, 0x1e, true, 0xc2721e808f064663, 30, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INTERRUPT_REMAPPING_INFO.FlagHalInternal", flag_hal_internal, 0x1e, 0x1, true, 0xf504aa5f21ed5527, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INTERRUPT_REMAPPING_INFO.FlagTranslated", flag_translated, 0x1f, 0x1, true, 0x6ef38252338de866, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_REMAPPING_INFO.Msi.MessageAddressLow", message_address_low, 0x20, 0x20, true, 0xa7db5e72ae0c0bd2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_INTERRUPT_REMAPPING_INFO.Msi.MessageData", message_data, 0x40, 0x10, true, 0x8181a2921b821f1e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_REMAPPING_INFO.Msi.MessageAddressHigh", message_address_high, 0x0, 0x20, true, 0xe94299ced2b7708b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_msi_t), "_INTERRUPT_REMAPPING_INFO.Msi", msi, 0x20, 0x60, true, 0x2fc9c0f1bcbbfa44)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_INTERRUPT_REMAPPING_INFO.RemappedFormat", remapped_format, 0x0, 0x0, false, 0x13f514d0fc3efd38)
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