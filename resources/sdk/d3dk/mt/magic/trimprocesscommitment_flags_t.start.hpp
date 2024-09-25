#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS.Lazy", lazy, 0x0, 0x1, true, 0x3327e8124e5699d0, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS.OnlyRepurposed", only_repurposed, 0x1, 0x1, true, 0x7b338508106b37ab, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS.Value", value, 0x0, 0x20, true, 0x847342810d8e469a)
#else
#define _m00
#define _m01
#define _m02
#endif