#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_FP_IEEE_VALUE.Value.I16Value", i16_value, 0x0, 0x10, true, 0x53ba0fd7214f3bf4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FP_IEEE_VALUE.Value.U16Value", u16_value, 0x0, 0x10, true, 0xc62a2aea200233a5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FP_IEEE_VALUE.Value.I32Value", i32_value, 0x0, 0x20, true, 0xab7bcdc8d4c3c74e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FP_IEEE_VALUE.Value.U32Value", u32_value, 0x0, 0x20, true, 0x389da92bff302612)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FP_IEEE_VALUE.Value.StringValue", string_value, 0x0, 0x40, true, 0x6b3c83cc2823fd9a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FP_IEEE_VALUE.Value.CompareValue", compare_value, 0x0, 0x20, true, 0x2ad8cb33f40a998c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::fp_32_t), "_FP_IEEE_VALUE.Value.Fp32Value", fp32_value, 0x0, 0x20, true, 0x5d5ad81a8603aeb0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FP_IEEE_VALUE.Value.I64Value", i64_value, 0x0, 0x40, true, 0xf207f2cb73b1c686)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FP_IEEE_VALUE.Value.U64Value", u64_value, 0x0, 0x40, true, 0x8e98a5155e3ba6c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::fp_64_t), "_FP_IEEE_VALUE.Value.Fp64Value", fp64_value, 0x0, 0x40, true, 0x1edcd52e69c13a94)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::fp_80_t), "_FP_IEEE_VALUE.Value.Fp80Value", fp80_value, 0x0, 0x60, true, 0xfd3774c44adb9a29)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::fp_128_t), "_FP_IEEE_VALUE.Value.Fp128Value", fp128_value, 0x0, 0x80, true, 0xa7477f6af79b7b47)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_value_t), "_FP_IEEE_VALUE.Value", value, 0x0, 0x80, true, 0x8fb7b02517cf5bfa)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_FP_IEEE_VALUE.Control.RoundingMode", rounding_mode, 0x0, 0x2, true, 0x1d1bc803f5c2fe0c, 2, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FP_IEEE_VALUE.Control.Inexact", inexact, 0x2, 0x1, true, 0x6b7a3a8083543c20, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FP_IEEE_VALUE.Control.Underflow", underflow, 0x3, 0x1, true, 0x370213b93deda0cd, 1, uint32_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FP_IEEE_VALUE.Control.Overflow", overflow, 0x4, 0x1, true, 0xe32ce5c6fce37f1, 1, uint32_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FP_IEEE_VALUE.Control.ZeroDivide", zero_divide, 0x5, 0x1, true, 0x89e377474fe7fab0, 1, uint32_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FP_IEEE_VALUE.Control.InvalidOperation", invalid_operation, 0x6, 0x1, true, 0xe718334798c67dcd, 1, uint32_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FP_IEEE_VALUE.Control.OperandValid", operand_valid, 0x7, 0x1, true, 0x3bce807e3528fd82, 1, uint32_t)
#define _m20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_FP_IEEE_VALUE.Control.Format", format, 0x8, 0x4, true, 0x21cc431532ad8223, 4, uint32_t)
#define _m21 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_FP_IEEE_VALUE.Control.Precision", precision, 0xc, 0x4, true, 0x456a8bdaffaa076d, 4, uint32_t)
#define _m22 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_FP_IEEE_VALUE.Control.Operation", operation, 0x10, 0xc, true, 0xf1a60139b3b12c25, 12, uint32_t)
#define _m23 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FP_IEEE_VALUE.Control.HardwareException", hardware_exception, 0x1f, 0x1, true, 0xe543bede573009ee, 1, uint32_t)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_control_t), "_FP_IEEE_VALUE.Control", control, 0x80, 0x20, true, 0x563278f35dfd833a)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#endif