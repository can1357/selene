#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROPERTY_BLOB_CONTEXT.BlobType", blob_type, 0x0, 0x0, false, 0x20e4c568eda2298d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROPERTY_BLOB_CONTEXT.BufferLength", buffer_length, 0x0, 0x0, false, 0xf20a41628c9eaa3f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CLOUD_PROPERTY_BLOB_CONTEXT.Buffer", buffer, 0x0, 0x0, false, 0x3cda926f12017089)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLOUD_PROPERTY_BLOB_CONTEXT.Alignment", alignment, 0x0, 0x0, false, 0x6f9add0d80d8d024)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_PROPERTY_BLOB_CONTEXT.BlobLength", blob_length, 0x0, 0x0, false, 0x5f72b413ca0f5e57)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CLOUD_PROPERTY_BLOB_CONTEXT.Status", status, 0x0, 0x0, false, 0x572e132e699d0134)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif