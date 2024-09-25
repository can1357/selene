#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_IFR_RECORD.Signature", signature, 0x0, 0x10, true, 0x15dfe92cce9d246a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_IFR_RECORD.Length", length, 0x10, 0x10, true, 0xabaae7731362f3ad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_IFR_RECORD.Sequence", sequence, 0x20, 0x20, true, 0x4aa0d65dc5b1e7ac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_IFR_RECORD.PrevOffset", prev_offset, 0x40, 0x10, true, 0x66c9e8408359cea5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_IFR_RECORD.MessageNumber", message_number, 0x50, 0x10, true, 0xe638ea63c68f98e9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WDF_IFR_RECORD.MessageGuid", message_guid, 0x60, 0x80, true, 0x9f156b5fbf01662d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif