#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_PIPE_STATE.CurrentState", current_state, 0x0, 0x20, true, 0x8519feba73dd97a4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_PIPE_STATE.TotalElemsCount", total_elems_count, 0x20, 0x20, true, 0xbc4d4620d577954a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_PIPE_STATE.OrigElemsInChunk", orig_elems_in_chunk, 0x40, 0x20, true, 0xa8fd5969f84d3a0b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_PIPE_STATE.ElemsInChunk", elems_in_chunk, 0x60, 0x20, true, 0x7ed74b16f092721f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_PIPE_STATE.ElemAlign", elem_align, 0x80, 0x20, true, 0x767fd3376ff2ca35)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_PIPE_STATE.ElemWireSize", elem_wire_size, 0xa0, 0x20, true, 0x9030ca16f73b43e9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_PIPE_STATE.ElemMemSize", elem_mem_size, 0xc0, 0x20, true, 0x532ecd66d5bbd900)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_PIPE_STATE.PartialBufferSize", partial_buffer_size, 0xe0, 0x20, true, 0x5d1c86259830df8a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "NDR_PIPE_STATE.PartialElem", partial_elem, 0x100, 0x40, true, 0x6d006340b78754ad)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_PIPE_STATE.PartialElemSize", partial_elem_size, 0x140, 0x20, true, 0xab79787d5b15d322)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_PIPE_STATE.PartialOffset", partial_offset, 0x160, 0x20, true, 0x47e9bcf5863fdf0e)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "NDR_PIPE_STATE.EndOfPipe", end_of_pipe, 0x180, 0x1, true, 0x4d933e75a20c690c, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "NDR_PIPE_STATE.EndOfPipePending", end_of_pipe_pending, 0x181, 0x1, true, 0x21b8acbda63e3661, 1, uint32_t)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_PIPE_STATE.LowChunkLimit", low_chunk_limit, 0x1a0, 0x20, true, 0x6f7974b6979bff29)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_PIPE_STATE.HighChunkLimit", high_chunk_limit, 0x1c0, 0x20, true, 0xace0481deb65389b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_PIPE_STATE.fBlockCopy", f_block_copy, 0x1e0, 0x20, true, 0xfd7cd1b8793274f1)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "NDR_PIPE_STATE.ElemPad", elem_pad, 0x200, 0x20, true, 0x75a903f4ec6472db)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "NDR_PIPE_STATE.TypeFormat", type_format, 0x240, 0x40, true, 0x8293b2b8cb5d2837)
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
#define _m15
#define _m16
#define _m17
#endif