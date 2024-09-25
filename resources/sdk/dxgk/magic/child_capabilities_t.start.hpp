#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::video_output_capabilities_t), "_DXGK_CHILD_CAPABILITIES.Type.VideoOutput", video_output, 0x0, 0x60, true, 0x6881e754cd980bdb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CHILD_CAPABILITIES.Type.Other.MustBeZero", must_be_zero, 0x0, 0x20, true, 0x5a3b2083a4b0e76b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_other_t), "_DXGK_CHILD_CAPABILITIES.Type.Other", other, 0x0, 0x20, true, 0xe14fbee8aa6d7c4b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::integrated_display_child_t), "_DXGK_CHILD_CAPABILITIES.Type.IntegratedDisplayChild", integrated_display_child, 0x0, 0x40, true, 0x65b43d71887d899e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_type_t), "_DXGK_CHILD_CAPABILITIES.Type", type, 0x0, 0x60, true, 0xc44239800620fe4a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::child_device_hpd_awareness_t), "_DXGK_CHILD_CAPABILITIES.HpdAwareness", hpd_awareness, 0x60, 0x20, true, 0x6d8d38bd9774fe8e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif