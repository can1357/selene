#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::context_chunk_t), "_CONTEXT_EX.All", all, 0x0, 0x40, true, 0xcd3d9540f7ab5645)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::context_chunk_t), "_CONTEXT_EX.Legacy", legacy, 0x40, 0x40, true, 0xdeab21dee706eaa6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::context_chunk_t), "_CONTEXT_EX.XState", x_state, 0x80, 0x40, true, 0x5305b25b90351003)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::context_chunk_t), "_CONTEXT_EX.KernelCet", kernel_cet, 0xc0, 0x40, true, 0xca47b47eb3916f56)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif