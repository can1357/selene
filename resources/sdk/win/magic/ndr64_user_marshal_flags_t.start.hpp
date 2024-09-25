#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_USER_MARSHAL_FLAGS.IID", iid, 0x5, 0x1, true, 0x3bfb269b21c62865, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_USER_MARSHAL_FLAGS.RefPointer", ref_pointer, 0x6, 0x1, true, 0xd09b09148165378c, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_USER_MARSHAL_FLAGS.UniquePointer", unique_pointer, 0x7, 0x1, true, 0xcdc9d5b9435c6bce, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif