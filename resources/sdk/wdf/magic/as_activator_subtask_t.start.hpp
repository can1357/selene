#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AsActivatorSubtask.ClientId", client_id, 0x0, 0x0, false, 0xd2addafcc7398fbe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AsActivatorSubtask.TaskId", task_id, 0x0, 0x0, false, 0x1c4f43ea1847965b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AsActivatorSubtask.SubtaskId", subtask_id, 0x0, 0x0, false, 0xd0c90e8b9a1d45f6)
#else
#define _m00
#define _m01
#define _m02
#endif