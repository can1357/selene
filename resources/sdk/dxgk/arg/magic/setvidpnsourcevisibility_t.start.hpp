#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEVISIBILITY.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x18f9dfe1297a2723)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGKARG_SETVIDPNSOURCEVISIBILITY.Visible", visible, 0x20, 0x8, true, 0x4adb06b5fd5c8aae)
#else
#define _m00
#define _m01
#endif