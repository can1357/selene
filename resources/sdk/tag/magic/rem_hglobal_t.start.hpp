#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRemHGLOBAL.fNullHGlobal", f_null_h_global, 0x0, 0x20, true, 0xbfedda15c922f901)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemHGLOBAL.cbData", cb_data, 0x20, 0x20, true, 0x40f918fb21e96227)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagRemHGLOBAL.data", data, 0x40, 0x8, true, 0x88301e9752748ce1)
#else
#define _m00
#define _m01
#define _m02
#endif