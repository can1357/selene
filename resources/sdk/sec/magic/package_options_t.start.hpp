#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_PACKAGE_OPTIONS.Size", size, 0x0, 0x20, true, 0x796ae82377c5e889)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_PACKAGE_OPTIONS.Type", type, 0x20, 0x20, true, 0x822976101f5842f9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_PACKAGE_OPTIONS.Flags", flags, 0x40, 0x20, true, 0x14ccd7c95c6e73dd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_PACKAGE_OPTIONS.SignatureSize", signature_size, 0x60, 0x20, true, 0x4ffcc8553a33c993)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SECURITY_PACKAGE_OPTIONS.Signature", signature, 0x80, 0x40, true, 0x79dcc6ed970d6570)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif