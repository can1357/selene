#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBLOB.cbSize", cb_size, 0x0, 0x20, true, 0x53f102691b01b530)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagBLOB.pBlobData", p_blob_data, 0x40, 0x40, true, 0x3ed1ae06b62ffeda)
#else
#define _m00
#define _m01
#endif