#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS.ServerMustSize", server_must_size, 0x0, 0x1, true, 0xeb2e84aa26217d87, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS.ClientMustSize", client_must_size, 0x1, 0x1, true, 0x4921141e8f66e16, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS.HasReturn", has_return, 0x2, 0x1, true, 0xff22a0cd47c92b1f, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS.HasPipes", has_pipes, 0x3, 0x1, true, 0x6fab8545f634b750, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS.HasAsyncUuid", has_async_uuid, 0x5, 0x1, true, 0x48953409c3693c1d, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS.HasExtensions", has_extensions, 0x6, 0x1, true, 0xd0191740a210855f, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "INTERPRETER_OPT_FLAGS.HasAsyncHandle", has_async_handle, 0x7, 0x1, true, 0xd20a40f23af1e025, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif