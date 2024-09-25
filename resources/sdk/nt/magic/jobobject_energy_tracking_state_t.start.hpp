#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_ENERGY_TRACKING_STATE.Value", value, 0x0, 0x40, true, 0xa7dd122c899c87e6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_ENERGY_TRACKING_STATE.UpdateMask", update_mask, 0x0, 0x20, true, 0x48c4061b4af4fa2b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_ENERGY_TRACKING_STATE.DesiredState", desired_state, 0x20, 0x20, true, 0x7aa4adc93b15660a)
#else
#define _m00
#define _m01
#define _m02
#endif