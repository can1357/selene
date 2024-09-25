#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_COLLECTDBGINFO.Reason", reason, 0x0, 0x20, true, 0x42af747dd213a768)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_COLLECTDBGINFO.pBuffer", p_buffer, 0x40, 0x40, true, 0x8934f3098717944d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_COLLECTDBGINFO.BufferSize", buffer_size, 0x80, 0x40, true, 0x848f2bc006d6295d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::arg::collectdbginfo_ext_t*), "_DXGKARG_COLLECTDBGINFO.pExtension", p_extension, 0xc0, 0x40, true, 0xc5a634bfb607661b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif