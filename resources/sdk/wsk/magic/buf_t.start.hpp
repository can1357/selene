#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_WSK_BUF.Mdl", mdl, 0x0, 0x40, true, 0x667ebc845cc6b6bd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WSK_BUF.Offset", offset, 0x40, 0x20, true, 0x8ebac6a4cada7fa2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WSK_BUF.Length", length, 0x80, 0x40, true, 0x5e42b5e70e9bea3)
#else
#define _m00
#define _m01
#define _m02
#endif