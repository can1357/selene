#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_PERFSTATE_EVENT.State", state, 0x0, 0x20, true, 0x4ed645092830b670)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_PERFSTATE_EVENT.Status", status, 0x20, 0x20, true, 0xf5594f862503d5ef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_PERFSTATE_EVENT.Latency", latency, 0x40, 0x20, true, 0x8d81bd85ed732a81)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_PERFSTATE_EVENT.Speed", speed, 0x60, 0x20, true, 0x235693107527e925)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_PERFSTATE_EVENT.Processor", processor, 0x80, 0x20, true, 0x729db6a305daa46)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif