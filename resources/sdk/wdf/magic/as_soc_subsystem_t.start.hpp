#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AsSocSubsystem.SubsystemSignature", subsystem_signature, 0x0, 0x0, false, 0x5c0ed685eb1054f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AsSocSubsystem.PlatformIdleState", platform_idle_state, 0x0, 0x0, false, 0xbb8daf9da1b4debd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AsSocSubsystem.SubsystemIndex", subsystem_index, 0x0, 0x0, false, 0x42cfb52178ce9bf)
#else
#define _m00
#define _m01
#define _m02
#endif