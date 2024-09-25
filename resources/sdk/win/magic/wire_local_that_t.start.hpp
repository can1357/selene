#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_local_that_part1_t), "WireLocalThat.part1", part1, 0x0, 0xc0, true, 0xf6eb0027fdde8da2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_winrt_async_call_response_block_part1_t), "WireLocalThat.asyncResponseBlock", async_response_block, 0xc0, 0x40, true, 0xd0cc9812c85fcb3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_local_that_part1_t), "WireLocalThat.c", c, 0x0, 0x0, false, 0x9e2aea76d76ff576)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_local_that_part2_t), "WireLocalThat.d", d, 0x0, 0x0, false, 0x76667e70618a20f2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif