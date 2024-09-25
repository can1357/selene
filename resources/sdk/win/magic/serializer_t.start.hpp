#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_stream_t*), "Serializer._pStream", p_stream, 0x0, 0x40, true, 0x35b97de3b553f2a4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_stream_t*), "Serializer._pOriginalStream", p_original_stream, 0x40, 0x40, true, 0xed262501709699e9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct win::i_buffer_t*, struct win::i_buffer_internal_t*>), "Serializer._pIBuff", p_i_buff, 0x80, 0x40, true, 0x10965e65d2fe6272)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "Serializer._buffer", buffer, 0xc0, 0x40, true, 0x6a788632866bc37b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "Serializer._nWritten", n_written, 0x100, 0x20, true, 0x35d0989d044df514)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "Serializer._bufSize", buf_size, 0x120, 0x20, true, 0x25f552fc2db322a3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "Serializer._operationSize", operation_size, 0x140, 0x20, true, 0xd47a94df58749ac4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "Serializer._handle", handle, 0x180, 0x40, true, 0xf103d100de3cbf6d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "Serializer._clRefs", cl_refs, 0x1c0, 0x20, true, 0x23db55666198ddc3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "Serializer._direction", direction, 0x1e0, 0x20, true, 0xf9a14c6b8220c0ee)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "Serializer._position", position, 0x200, 0x20, true, 0xa440cb4706ddab77)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "Serializer._start", start, 0x220, 0x20, true, 0x9cb4b2110905ecfe)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "Serializer._dwMaxDestCtx", dw_max_dest_ctx, 0x240, 0x20, true, 0xb2aed8afc0b2af01)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "Serializer._dwCurrentDestCtx", dw_current_dest_ctx, 0x260, 0x20, true, 0xf1069b9978dbb200)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "Serializer._dwMarshalFlags", dw_marshal_flags, 0x280, 0x20, true, 0x9046d7c4a0a2768d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif