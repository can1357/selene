#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT.VidPnTargetId", vid_pn_target_id, 0x0, 0x20, true, 0x7b4d874c17c2c853)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT.PhysicalAdapterMask", physical_adapter_mask, 0x20, 0x20, true, 0x1de891f6633434f5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT.LayerIndex", layer_index, 0x40, 0x20, true, 0xbab9b754498cacae)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT.PresentID", present_id, 0x80, 0x40, true, 0x3120bed57d303b65)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif