#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_INTERRUPT_STEERING_INFORMATION_INPUT.Gsiv", gsiv, 0x0, 0x20, true, 0xb4149500423f0361)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_INTERRUPT_STEERING_INFORMATION_INPUT.ControllerInterrupt", controller_interrupt, 0x20, 0x8, true, 0x167f8ee2a6d57c28)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_INTERRUPT_STEERING_INFORMATION_INPUT.EdgeInterrupt", edge_interrupt, 0x28, 0x8, true, 0xe856e1981153f199)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_INTERRUPT_STEERING_INFORMATION_INPUT.IsPrimaryInterrupt", is_primary_interrupt, 0x30, 0x8, true, 0x51547b8f704dde11)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_SYSTEM_INTERRUPT_STEERING_INFORMATION_INPUT.TargetAffinity", target_affinity, 0x40, 0x80, true, 0x4cbc50c6d104b7ff)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif