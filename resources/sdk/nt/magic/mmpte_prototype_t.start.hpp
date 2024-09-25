#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_PROTOTYPE.Valid", valid, 0x0, 0x1, true, 0xc8ea4d7729b01e28, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_PROTOTYPE.DemandFillProto", demand_fill_proto, 0x1, 0x1, true, 0x64d0efbc19f2f64c, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_PROTOTYPE.HiberVerifyConverted", hiber_verify_converted, 0x2, 0x1, true, 0xa8b012b1f1e8a754, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_PROTOTYPE.ReadOnly", read_only, 0x3, 0x1, true, 0x18ea3ec2e705fb94, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MMPTE_PROTOTYPE.Protection", protection, 0x5, 0x5, true, 0xb8ca8a42e8bb7283, 5, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_PROTOTYPE.Prototype", prototype, 0xa, 0x1, true, 0x971d9b8250b9f0ab, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_PROTOTYPE.Combined", combined, 0xb, 0x1, true, 0x9fbeca32bd71a8c1, 1, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int48_t), "_MMPTE_PROTOTYPE.ProtoAddress", proto_address, 0x10, 0x30, true, 0x6ed3778813bfda96, 48, uint64_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_PROTOTYPE.SwizzleBit", swizzle_bit, 0x4, 0x1, true, 0xffe89a96447939b5, 1, uint64_t)
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
#endif