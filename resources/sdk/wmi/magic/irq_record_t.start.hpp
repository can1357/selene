#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_IRQ_RECORD.IRQAffinity", irq_affinity, 0x0, 0x40, true, 0xc90c36f4cd4c3ab1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WMI_IRQ_RECORD.IRQGroup", irq_group, 0x40, 0x10, true, 0x9aed244f0d80e5ac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IRQ_RECORD.IRQNum", irq_num, 0x60, 0x20, true, 0xb9a485cdef6d43c5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IRQ_RECORD.DeviceDescriptionLen", device_description_len, 0x80, 0x20, true, 0x1052f9daf8d0c34d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_IRQ_RECORD.DeviceDescription", device_description, 0xa0, 0x10, true, 0xecd75a3ebb9991b3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif