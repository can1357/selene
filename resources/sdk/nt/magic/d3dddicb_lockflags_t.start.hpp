#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_LOCKFLAGS.ReadOnly", read_only, 0x0, 0x1, true, 0xa8cc5473dac9d42a, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_LOCKFLAGS.WriteOnly", write_only, 0x1, 0x1, true, 0x8744bcafa7f044f2, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_LOCKFLAGS.DonotWait", donot_wait, 0x2, 0x1, true, 0xef46dfa2d403919b, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_LOCKFLAGS.IgnoreSync", ignore_sync, 0x3, 0x1, true, 0x53bd111bbbfc876d, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_LOCKFLAGS.LockEntire", lock_entire, 0x4, 0x1, true, 0x21918ef1e4c6295e, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_LOCKFLAGS.DonotEvict", donot_evict, 0x5, 0x1, true, 0x4129e71a701032b2, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_LOCKFLAGS.AcquireAperture", acquire_aperture, 0x6, 0x1, true, 0x9f5cc2e18d1a5fb3, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_LOCKFLAGS.Discard", discard, 0x7, 0x1, true, 0xfdcef818c1da59fa, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_LOCKFLAGS.NoExistingReference", no_existing_reference, 0x8, 0x1, true, 0x3d372d59d39a2eb1, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_LOCKFLAGS.UseAlternateVA", use_alternate_va, 0x9, 0x1, true, 0xe223fdc38efd6df9, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_LOCKFLAGS.IgnoreReadSync", ignore_read_sync, 0xa, 0x1, true, 0xce2bae3be6fb132d, 1, uint32_t)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDICB_LOCKFLAGS.Value", value, 0x0, 0x20, true, 0x91e1f78912676eae)
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
#endif