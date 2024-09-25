#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::present_model_t), "_D3DKMT_PRESENTHISTORYTOKEN.Model", model, 0x0, 0x20, true, 0xda4a1cf8be268121)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENTHISTORYTOKEN.TokenSize", token_size, 0x20, 0x20, true, 0xbdbb9294014c25f7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_PRESENTHISTORYTOKEN.CompositionBindingId", composition_binding_id, 0x40, 0x40, true, 0x400cc0dc9bbd0978)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::flipmodel_presenthistorytoken_t), "_D3DKMT_PRESENTHISTORYTOKEN.Token.Flip", flip, 0x0, 0x40, true, 0xf2806262a8d42a65)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::bltmodel_presenthistorytoken_t), "_D3DKMT_PRESENTHISTORYTOKEN.Token.Blt", blt, 0x0, 0x0, true, 0x1ef278f65a6377ae)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_PRESENTHISTORYTOKEN.Token.VistaBlt", vista_blt, 0x0, 0x40, true, 0x317f22b9a7f36dfb)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::gdimodel_presenthistorytoken_t), "_D3DKMT_PRESENTHISTORYTOKEN.Token.Gdi", gdi, 0x0, 0x80, true, 0xe6505600b934d5e2)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::fence_presenthistorytoken_t), "_D3DKMT_PRESENTHISTORYTOKEN.Token.Fence", fence, 0x0, 0x40, true, 0x8bc07dd47a06327e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::gdimodel_sysmem_presenthistorytoken_t), "_D3DKMT_PRESENTHISTORYTOKEN.Token.GdiSysMem", gdi_sys_mem, 0x0, 0xc0, true, 0x5fd80d6cbfc83105)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::composition_presenthistorytoken_t), "_D3DKMT_PRESENTHISTORYTOKEN.Token.Composition", composition, 0x0, 0x40, true, 0x6d8b982ea5b408c3)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::flipmanager_presenthistorytoken_t), "_D3DKMT_PRESENTHISTORYTOKEN.Token.FlipManager", flip_manager, 0x0, 0xc0, true, 0x2eeda4373c0b5281)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::surfacecomplete_presenthistorytoken_t), "_D3DKMT_PRESENTHISTORYTOKEN.Token.SurfaceComplete", surface_complete, 0x0, 0x40, true, 0x54a6061c3ebdce0d)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_token_t), "_D3DKMT_PRESENTHISTORYTOKEN.Token", token, 0x80, 0x40, true, 0x97c38c110ed09dd7)
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
#endif