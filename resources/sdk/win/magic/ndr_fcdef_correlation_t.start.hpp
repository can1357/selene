#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDR_FCDEF_CORRELATION.Type", type, 0x0, 0x4, true, 0xab04e2e3f17acab5, 4, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDR_FCDEF_CORRELATION.Kind", kind, 0x4, 0x4, true, 0x51c33492bdd49162, 4, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_NDR_FCDEF_CORRELATION.Operation", operation, 0x8, 0x8, true, 0xcde70d736c8d9ab5, 8, uint16_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_NDR_FCDEF_CORRELATION.Offset", offset, 0x10, 0x10, true, 0x1b82ba1c84112968)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_correlation_flags_t), "_NDR_FCDEF_CORRELATION.CorrFlags", corr_flags, 0x20, 0x8, true, 0xe78f1ab7891bca5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif