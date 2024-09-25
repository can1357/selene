#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_TRIMPROCESSCOMMITMENT.cbSize", cb_size, 0x0, 0x20, true, 0x73075f630cb773b5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_TRIMPROCESSCOMMITMENT.hProcess", h_process, 0x40, 0x40, true, 0x2cd75b12e66e2dee)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mt::trimprocesscommitment_flags_t), "_D3DKMT_TRIMPROCESSCOMMITMENT.Flags", flags, 0x80, 0x20, true, 0x1fc32fe96e078eb1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_TRIMPROCESSCOMMITMENT.DecommitRequested", decommit_requested, 0xc0, 0x40, true, 0xddd6d857e376493e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_TRIMPROCESSCOMMITMENT.NumBytesDecommitted", num_bytes_decommitted, 0x100, 0x40, true, 0xecd970968b631890)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif