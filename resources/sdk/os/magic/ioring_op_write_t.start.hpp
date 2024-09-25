#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::ioring_op_flags_t), "_NT_IORING_OP_WRITE.CommonOpFlags", common_op_flags, 0x0, 0x0, false, 0x1fb63993c5774f35)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::write_flags_t), "_NT_IORING_OP_WRITE.Flags", flags, 0x0, 0x0, false, 0xabfdba5705b9689d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union os::ioring_handleref_t), "_NT_IORING_OP_WRITE.File", file, 0x0, 0x0, false, 0x459892ccdb836d41)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union os::ioring_bufferref_t), "_NT_IORING_OP_WRITE.Buffer", buffer, 0x0, 0x0, false, 0xc0c3a4dd60f8c622)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NT_IORING_OP_WRITE.Offset", offset, 0x0, 0x0, false, 0x768533322bb150b8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_OP_WRITE.Length", length, 0x0, 0x0, false, 0xb88ae3e8cbf3d41b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NT_IORING_OP_WRITE.Key", key, 0x0, 0x0, false, 0xdb1a46b7ecfc4b92)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif