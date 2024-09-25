#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FSRTL_AUXILIARY_BUFFER.Buffer", buffer, 0x0, 0x40, true, 0xf8e4fd8af28daccb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSRTL_AUXILIARY_BUFFER.Length", length, 0x40, 0x20, true, 0xef2581b10a1d729b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSRTL_AUXILIARY_BUFFER.Flags", flags, 0x60, 0x20, true, 0xca2163a1fdd1e872)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_FSRTL_AUXILIARY_BUFFER.Mdl", mdl, 0x80, 0x40, true, 0xac04fd62ca57e074)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif