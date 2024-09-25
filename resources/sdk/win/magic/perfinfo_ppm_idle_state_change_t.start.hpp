#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_IDLE_STATE_CHANGE.NewState", new_state, 0x0, 0x20, true, 0x9eae7466f89435af)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_IDLE_STATE_CHANGE.OldState", old_state, 0x20, 0x20, true, 0x815ffeee1e23ee9f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PPM_IDLE_STATE_CHANGE.Processors", processors, 0x40, 0x40, true, 0x5f897e1fb8de782f)
#else
#define _m00
#define _m01
#define _m02
#endif