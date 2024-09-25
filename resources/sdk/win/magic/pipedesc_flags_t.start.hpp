#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PIPEDESC_FLAGS.AuxOutBufferAllocated", aux_out_buffer_allocated, 0x0, 0x1, true, 0x30bce320211035cc, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PIPEDESC_FLAGS.NoBufferCallPending", no_buffer_call_pending, 0x1, 0x1, true, 0xcaabb7f54d499629, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PIPEDESC_FLAGS.NoMoreBuffersToRead", no_more_buffers_to_read, 0x3, 0x1, true, 0x7f5c9737fcf07e71, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PIPEDESC_FLAGS.LastPipeSend", last_pipe_send, 0x4, 0x1, true, 0xce2fa7260e403fe4, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PIPEDESC_FLAGS.InPipePush", in_pipe_push, 0x5, 0x1, true, 0x4b30a9562a786f03, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif