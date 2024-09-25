#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::pcw_counter_information_t), "_PCW_CALLBACK_INFORMATION.AddCounter", add_counter, 0x0, 0x80, true, 0xdfbb2bc3d0f038d3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::pcw_counter_information_t), "_PCW_CALLBACK_INFORMATION.RemoveCounter", remove_counter, 0x0, 0x80, true, 0x4eb0ef3dafa29e0b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::pcw_mask_information_t), "_PCW_CALLBACK_INFORMATION.EnumerateInstances", enumerate_instances, 0x0, 0x40, true, 0xb2ab2baefd9e8287)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::pcw_mask_information_t), "_PCW_CALLBACK_INFORMATION.CollectData", collect_data, 0x0, 0x40, true, 0x6cce5ac418e6661a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif