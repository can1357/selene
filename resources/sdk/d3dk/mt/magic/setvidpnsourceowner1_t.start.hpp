#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::setvidpnsourceowner_t), "_D3DKMT_SETVIDPNSOURCEOWNER1.Version0", version0, 0x0, 0x0, true, 0xcbc2338ba9690cae)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::vidpnsourceowner_flags_t), "_D3DKMT_SETVIDPNSOURCEOWNER1.Flags", flags, 0x100, 0x20, true, 0x5ba4d92b636554c5)
#else
#define _m00
#define _m01
#endif