#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_pipe_message_t*), "_NDR_PIPE_DESC.pPipeMsg", p_pipe_msg, 0x0, 0x40, true, 0x9b4b3eefa2097a73)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_NDR_PIPE_DESC.CurrentPipe", current_pipe, 0x40, 0x10, true, 0x2e9a212d6d766456)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_NDR_PIPE_DESC.PrevPipe", prev_pipe, 0x50, 0x10, true, 0xde639b7a8c4f198)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_NDR_PIPE_DESC.InPipes", in_pipes, 0x60, 0x10, true, 0x35c6c837145a7555)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_NDR_PIPE_DESC.OutPipes", out_pipes, 0x70, 0x10, true, 0x23759450039ec37a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_NDR_PIPE_DESC.TotalPipes", total_pipes, 0x80, 0x10, true, 0xb436140a98008de)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_NDR_PIPE_DESC.PipeVersion", pipe_version, 0x90, 0x10, true, 0x5f2c3c9e005855a1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::pipedesc_flags_t), "_NDR_PIPE_DESC.Flags", flags, 0xa0, 0x10, true, 0x1246998fcc9a8a18)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_PIPE_DESC.PipeException", pipe_exception, 0xc0, 0x20, true, 0x9c3bcba3a44837c1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDR_PIPE_DESC.DispatchBuffer", dispatch_buffer, 0x100, 0x40, true, 0x222c738491dec86b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_PIPE_DESC.DispatchBufferLength", dispatch_buffer_length, 0x140, 0x20, true, 0x99b3afc2012b5e43)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_PIPE_DESC.LastPartialSize", last_partial_size, 0x160, 0x20, true, 0x1f26514039362bdf)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDR_PIPE_DESC.Leftover", leftover, 0x180, 0x40, true, 0x3ba2fcb58dc2a144)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_PIPE_DESC.LeftoverSize", leftover_size, 0x1c0, 0x20, true, 0x4732950fe74086db)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDR_PIPE_DESC.BufferSave", buffer_save, 0x200, 0x40, true, 0x443b38020d10e05b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_PIPE_DESC.LengthSave", length_save, 0x240, 0x20, true, 0xb9c885e598f23e25)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_pipe_state_t), "_NDR_PIPE_DESC.RuntimeState", runtime_state, 0x280, 0x80, true, 0x6cb28df42f5e7c4d)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDR_PIPE_DESC.ChainingBuffer", chaining_buffer, 0x500, 0x40, true, 0xfde020c62cde1553)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_PIPE_DESC.ChainingBufferSize", chaining_buffer_size, 0x540, 0x20, true, 0xde6e345230dffd90)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pipe_helper_t*), "_NDR_PIPE_DESC.pPipeHelper", p_pipe_helper, 0x580, 0x40, true, 0x522b3c1e63120145)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_alloca_context_t*), "_NDR_PIPE_DESC.pAllocContext", p_alloc_context, 0x5c0, 0x40, true, 0x39d97a3805b399b9)
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
#define _m18
#define _m19
#define _m20
#endif