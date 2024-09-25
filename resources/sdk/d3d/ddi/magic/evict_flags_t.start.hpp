#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "D3DDDI_EVICT_FLAGS.EvictOnlyIfNecessary", evict_only_if_necessary, 0x0, 0x1, true, 0xf1ef88deb6016f80, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "D3DDDI_EVICT_FLAGS.NotWrittenTo", not_written_to, 0x1, 0x1, true, 0xafb902becf4b9630, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_EVICT_FLAGS.Value", value, 0x0, 0x20, true, 0x96418db377dea020)
#else
#define _m00
#define _m01
#define _m02
#endif