#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AsActivatorTask.ClientId", client_id, 0x0, 0x0, false, 0x13b5b6aba24f7afb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AsActivatorTask.TaskId", task_id, 0x0, 0x0, false, 0x9f5df9f0b1d0b8fe)
#else
#define _m00
#define _m01
#endif