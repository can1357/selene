#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PLUGPLAY_CONTROL_STATUS_DATA.DeviceInstance", device_instance, 0x0, 0x80, true, 0x99e141f98c663c4c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_STATUS_DATA.Operation", operation, 0x80, 0x20, true, 0x53f725365778d055)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_STATUS_DATA.DeviceStatus", device_status, 0xa0, 0x20, true, 0x3f1251e84986cae7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_STATUS_DATA.DeviceProblem", device_problem, 0xc0, 0x20, true, 0x53003726ca07bd39)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_STATUS_DATA.Flags", flags, 0xe0, 0x20, true, 0x280dafbda65c9dde)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PLUGPLAY_CONTROL_STATUS_DATA.ProblemStatus", problem_status, 0x100, 0x20, true, 0xd1b2b88c57364fe8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif