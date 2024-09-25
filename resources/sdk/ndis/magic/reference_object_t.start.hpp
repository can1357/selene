#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_REFERENCE_OBJECT.Deleting", deleting, 0x0, 0x1, true, 0xb536146d72bb4fcc, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_REFERENCE_OBJECT.ReferenceCount", reference_count, 0x1, 0x1e, true, 0x92af1075cfac80a9, 30, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_REFERENCE_OBJECT.Overflow", overflow, 0x1f, 0x1, true, 0x16b4ac9198dc4a0e, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_REFERENCE_OBJECT.Value", value, 0x0, 0x20, true, 0x14d9aac3c22a89f5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif