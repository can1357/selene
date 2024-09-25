#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "AutoBlob.cbSize", cb_size, 0x0, 0x20, true, 0xe7f522d8c9300630)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "AutoBlob.pBlobData", p_blob_data, 0x40, 0x40, true, 0xff260373dc4ac4ab)
#else
#define _m00
#define _m01
#endif