#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.CreateResource", create_resource, 0x0, 0x1, true, 0x70c1454f8b0e8475, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.CreateShared", create_shared, 0x1, 0x1, true, 0x7d323665cd5b304e, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.NonSecure", non_secure, 0x2, 0x1, true, 0xbd5188d4293345a1, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.CreateProtected", create_protected, 0x3, 0x1, true, 0xc0a32acb26b7a765, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.RestrictSharedAccess", restrict_shared_access, 0x4, 0x1, true, 0x90576ee74347300f, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.ExistingSysMem", existing_sys_mem, 0x5, 0x1, true, 0x632b602c02494cff, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.NtSecuritySharing", nt_security_sharing, 0x6, 0x1, true, 0xf420d9474f9c4ad0, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.ReadOnly", read_only, 0x7, 0x1, true, 0xb6598821a4b61199, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.CreateWriteCombined", create_write_combined, 0x8, 0x1, true, 0xc9ced0e05d97cf6b, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.CreateCached", create_cached, 0x9, 0x1, true, 0xf2d0dda3fd2a1b2d, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.SwapChainBackBuffer", swap_chain_back_buffer, 0xa, 0x1, true, 0x8e8630902e5d136c, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.CrossAdapter", cross_adapter, 0xb, 0x1, true, 0x995098600c86cae9, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.OpenCrossAdapter", open_cross_adapter, 0xc, 0x1, true, 0xfd85e4f0cc9d62ee, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.PartialSharedCreation", partial_shared_creation, 0xd, 0x1, true, 0xc4789dac99f7b8b, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.Zeroed", zeroed, 0xe, 0x1, true, 0x6ab75bd7a6b3610b, 1, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.WriteWatch", write_watch, 0xf, 0x1, true, 0xa9c5b097667922a3, 1, uint32_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.StandardAllocation", standard_allocation, 0x10, 0x1, true, 0x4866d911c44eeb38, 1, uint32_t)
#define _m17 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.ExistingSection", existing_section, 0x11, 0x1, true, 0xf39dd9077a360b6a, 1, uint32_t)
#define _m18 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEALLOCATIONFLAGS.AllowNotZeroed", allow_not_zeroed, 0x12, 0x1, true, 0x448cda57eb1832e8, 1, uint32_t)
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
#endif