#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "_CLOUD_DATA_TRANSFER.TargetFileId", target_file_id, 0x0, 0x0, false, 0x54509211541b95bc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_DATA_TRANSFER.RequiredOffset", required_offset, 0x0, 0x0, false, 0x95ddc52c58811b85)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_DATA_TRANSFER.ByteOffset", byte_offset, 0x0, 0x0, false, 0x2188020d7ba8fa8a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_DATA_TRANSFER.RequiredLength", required_length, 0x0, 0x0, false, 0xa09ed8a01d401907)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_DATA_TRANSFER.Length", length, 0x0, 0x0, false, 0x4237754fd81a7f6b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_DATA_TRANSFER.Flags", flags, 0x0, 0x0, false, 0x11faf7a926918029)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CLOUD_DATA_TRANSFER.ServiceStatus", service_status, 0x0, 0x0, false, 0xefa9c107560bdfb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif