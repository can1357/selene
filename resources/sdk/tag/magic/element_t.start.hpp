#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::element_t*), "tagElement.pNext", p_next, 0x0, 0x40, true, 0xc53b8dfff9dda9ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagElement.iHashValue", i_hash_value, 0x40, 0x20, true, 0x915a4a79fb7db7ca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagElement.fValueFlags", f_value_flags, 0x60, 0x10, true, 0xbbd9ef0f5743ba73)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagElement.cbKey", cb_key, 0x70, 0x10, true, 0xb9016d4a2c97e9ae)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagElement.pUnknown", p_unknown, 0x80, 0x40, true, 0x4f4445a8aa477e02)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "tagElement.abKey", ab_key, 0xc0, 0x0, true, 0xbdec246655d729c2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif