#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_WRITE_ATOMICITY_NORMAL.DN", dn, 0x0, 0x0, false, 0x4d7e3931052c5086, 1, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_WRITE_ATOMICITY_NORMAL.AsUlong", as_ulong, 0x0, 0x0, false, 0x992ad02c5778ea51)
#else
#define _m00
#define _m01
#endif