#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::ioring_op_flags_t), "_NT_IORING_OP_READ.CommonOpFlags", common_op_flags, 0x0, 0x0, false, 0x5f403ae8d017e08d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union os::ioring_handleref_t), "_NT_IORING_OP_READ.File", file, 0x0, 0x0, false, 0x5684859f719c70c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union os::ioring_bufferref_t), "_NT_IORING_OP_READ.Buffer", buffer, 0x0, 0x0, false, 0xda50bd2844f09058)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NT_IORING_OP_READ.Offset", offset, 0x0, 0x0, false, 0x3f866faf865a4122)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_OP_READ.Length", length, 0x0, 0x0, false, 0x6fbddc9b6f216dd2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_OP_READ.Key", key, 0x0, 0x0, false, 0x800aeffcd02918dd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif