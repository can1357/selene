#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCLIPDATA.cbSize", cb_size, 0x0, 0x20, true, 0x56ea872a90ff4d9d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCLIPDATA.ulClipFmt", ul_clip_fmt, 0x20, 0x20, true, 0x7f61a82a01b5081e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagCLIPDATA.pClipData", p_clip_data, 0x40, 0x40, true, 0x79d69abbd4ef5c0f)
#else
#define _m00
#define _m01
#define _m02
#endif