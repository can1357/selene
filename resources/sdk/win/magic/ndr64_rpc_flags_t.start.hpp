#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_RPC_FLAGS.Idempotent", idempotent, 0x0, 0x1, true, 0x197de812b955c3d5, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_RPC_FLAGS.Broadcast", broadcast, 0x1, 0x1, true, 0xfb7a3239f4fd80cc, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_RPC_FLAGS.Maybe", maybe, 0x2, 0x1, true, 0x3054a6d435e8c2c5, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_RPC_FLAGS.HasGuarantee", has_guarantee, 0x4, 0x1, true, 0x6dd2f78c2b790507, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_RPC_FLAGS.Message", message, 0x8, 0x1, true, 0x3abdf45eb51572a0, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_RPC_FLAGS.InputSynchronous", input_synchronous, 0xd, 0x1, true, 0xa57e1daf49b11bff, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_RPC_FLAGS.Asynchronous", asynchronous, 0xe, 0x1, true, 0x79ed544a22e889fa, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_RPC_FLAGS.WinrtRemoteAsync", winrt_remote_async, 0xf, 0x1, true, 0xa47dcdcf625b46a4, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif