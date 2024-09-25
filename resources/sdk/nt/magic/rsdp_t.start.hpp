#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RSDP.Signature", signature, 0x0, 0x40, true, 0x77dec638eed7f817)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RSDP.Checksum", checksum, 0x40, 0x8, true, 0xd9d645187ef4467f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_RSDP.OEMID", oemid, 0x48, 0x30, true, 0x4b55cfb40222210b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RSDP.Revision", revision, 0x78, 0x8, true, 0x870f1704668c9152)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RSDP.RsdtAddress", rsdt_address, 0x80, 0x20, true, 0xef3651ef970bd694)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RSDP.Length", length, 0xa0, 0x20, true, 0xcbef1dbde1aaacd7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RSDP.XsdtAddress", xsdt_address, 0xc0, 0x40, true, 0x8c90847609b37250)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RSDP.XChecksum", x_checksum, 0x100, 0x8, true, 0xe5ab1e1c3b0ffadb)
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