#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKCB_NOTIFY_INTERRUPT_DATA_FLAGS.ValidPhysicalAdapterMask", valid_physical_adapter_mask, 0x0, 0x1, true, 0x7fc31a53c62338a9, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKCB_NOTIFY_INTERRUPT_DATA_FLAGS.HsyncFlipCompletion", hsync_flip_completion, 0x1, 0x1, true, 0x8350a9313cf00a91, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKCB_NOTIFY_INTERRUPT_DATA_FLAGS.Value", value, 0x0, 0x20, true, 0x270091152bd33afe)
#else
#define _m00
#define _m01
#define _m02
#endif