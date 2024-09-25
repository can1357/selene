#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TASK_OFFLOAD.Version", version, 0x0, 0x20, true, 0x81f21e93424f3ad7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TASK_OFFLOAD.Size", size, 0x20, 0x20, true, 0xf16132319aa60db2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::task_t), "_NDIS_TASK_OFFLOAD.Task", task, 0x40, 0x20, true, 0xad0980f30de4373)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TASK_OFFLOAD.OffsetNextTask", offset_next_task, 0x60, 0x20, true, 0x130f81712fef413a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TASK_OFFLOAD.TaskBufferLength", task_buffer_length, 0x80, 0x20, true, 0x7b8d3d6a1da4ab94)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_NDIS_TASK_OFFLOAD.TaskBuffer", task_buffer, 0xa0, 0x8, true, 0x1cf9a938d8e4d16c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif