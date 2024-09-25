#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETPRESENTHISTORY.hAdapter", h_adapter, 0x0, 0x20, true, 0x6c049e5ef4c549f8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETPRESENTHISTORY.ProvidedSize", provided_size, 0x20, 0x20, true, 0x2abff446a4e593f9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETPRESENTHISTORY.WrittenSize", written_size, 0x40, 0x20, true, 0xf8fddc88969d383b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::presenthistorytoken_t*), "_D3DKMT_GETPRESENTHISTORY.pTokens", p_tokens, 0x80, 0x40, true, 0x59609bcdc7c4950b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETPRESENTHISTORY.NumTokens", num_tokens, 0xc0, 0x20, true, 0x86a0eb8bb399585b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif