#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSDBG_LIVEDUMP_CONTROL_FLAGS.UseDumpStorageStack", use_dump_storage_stack, 0x0, 0x1, true, 0x5dcad4f5df82d2cc, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSDBG_LIVEDUMP_CONTROL_FLAGS.CompressMemoryPagesData", compress_memory_pages_data, 0x1, 0x1, true, 0x708da3a0b8bff74e, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSDBG_LIVEDUMP_CONTROL_FLAGS.IncludeUserSpaceMemoryPages", include_user_space_memory_pages, 0x2, 0x1, true, 0x508acb1efdc7182b, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSDBG_LIVEDUMP_CONTROL_FLAGS.AbortIfMemoryPressure", abort_if_memory_pressure, 0x3, 0x1, true, 0x91db6c5ff1743151, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_LIVEDUMP_CONTROL_FLAGS.AsUlong", as_ulong, 0x0, 0x20, true, 0xf5e807e64bbee7ca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif