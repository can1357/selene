#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCAUB.cElems", c_elems, 0x0, 0x20, true, 0x8d0ae4b95bb50e16)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagCAUB.pElems", p_elems, 0x40, 0x40, true, 0x9e2a4861b3fe75de)
#else
#define _m00
#define _m01
#endif