#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPRIORITY.PriorityClass", priority_class, 0x0, 0x0, false, 0x73bb4960da8ee068)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSPRIORITY.PrioritySubClass", priority_sub_class, 0x0, 0x0, false, 0xd5e539730d4f5d8a)
#else
#define _m00
#define _m01
#endif