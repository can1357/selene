#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VGPU_CAPABILITY.MinValue", min_value, 0x0, 0x40, true, 0x27535f080fef5523)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VGPU_CAPABILITY.MaxValue", max_value, 0x40, 0x40, true, 0x456d90ae2843506c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VGPU_CAPABILITY.CurrentValue", current_value, 0x80, 0x40, true, 0xcacabf06b01d1478)
#else
#define _m00
#define _m01
#define _m02
#endif