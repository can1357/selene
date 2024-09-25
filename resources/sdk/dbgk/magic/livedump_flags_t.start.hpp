#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DBGK_LIVEDUMP_FLAGS.UserPages", user_pages, 0x0, 0x1, true, 0xfab0f0b25a4fa4a7, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DBGK_LIVEDUMP_FLAGS.RequestMinidump", request_minidump, 0x1, 0x1, true, 0xe6a4fab6cc94e324, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DBGK_LIVEDUMP_FLAGS.HypervisorPages", hypervisor_pages, 0x2, 0x1, true, 0x51c3a371ed017fd3, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DBGK_LIVEDUMP_FLAGS.AsUlong", as_ulong, 0x0, 0x20, true, 0x195e946f4fe9bfb)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DBGK_LIVEDUMP_FLAGS.NoDeferWrite", no_defer_write, 0x0, 0x0, false, 0x51fcfd83e0a9bb88, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif