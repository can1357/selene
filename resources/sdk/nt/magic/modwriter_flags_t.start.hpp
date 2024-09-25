#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODWRITER_FLAGS.KeepForever", keep_forever, 0x0, 0x1, true, 0x71c1975a272f8808, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODWRITER_FLAGS.Networked", networked, 0x1, 0x1, true, 0xc1353f3e37d4dc59, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MODWRITER_FLAGS.IoPriority", io_priority, 0x2, 0x3, true, 0x3c7a31f0bbd7a3d6, 3, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODWRITER_FLAGS.ModifiedStoreWrite", modified_store_write, 0x5, 0x1, true, 0xca865bf42e1de6c0, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif