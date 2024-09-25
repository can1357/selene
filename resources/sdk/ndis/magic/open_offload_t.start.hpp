#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_encapsulation_t), "_NDIS_OPEN_OFFLOAD.SetEncapsulation", set_encapsulation, 0x0, 0xe0, true, 0x7902e7b7931b0012)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_OPEN_OFFLOAD.AlreadySetEncapsulation", already_set_encapsulation, 0xe0, 0x8, true, 0x5ee680a48d7745a0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_encapsulation_t), "_NDIS_OPEN_OFFLOAD.XlateEncap", xlate_encap, 0x100, 0xe0, true, 0xffaddba710f1952a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_OFFLOAD.Encapsulation.Oid", oid, 0x0, 0x20, true, 0x10f54c8a3c89e1c2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OPEN_OFFLOAD.Encapsulation.Buffer", buffer, 0x40, 0x40, true, 0x453d3143fb0e02a9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_OFFLOAD.Encapsulation.BufferLength", buffer_length, 0x80, 0x20, true, 0xb4ab9e9e230e99aa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_encapsulation_t), "_NDIS_OPEN_OFFLOAD.Encapsulation", encapsulation, 0x200, 0xc0, true, 0x57b633e6001ad1c0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_OFFLOAD.Task.Oid", oid, 0x0, 0x20, true, 0xc72443cb97ea0db6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OPEN_OFFLOAD.Task.Buffer", buffer, 0x40, 0x40, true, 0x451ea339adfb1b69)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_OFFLOAD.Task.BufferLength", buffer_length, 0x80, 0x20, true, 0x209d0507fb1f2592)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_task_t), "_NDIS_OPEN_OFFLOAD.Task", task, 0x2c0, 0xc0, true, 0x933b1b5978112a1e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif