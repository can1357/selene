#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCAUI.cElems", c_elems, 0x0, 0x20, true, 0x9dc8f36e14b84989)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "tagCAUI.pElems", p_elems, 0x40, 0x40, true, 0x5907fa4dca4efa02)
#else
#define _m00
#define _m01
#endif