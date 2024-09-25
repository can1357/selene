#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO.Size", size, 0x0, 0x20, true, 0x6ed927934f820324)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_INTERRUPT_INFO.TargetProcessorSet", target_processor_set, 0x80, 0x40, true, 0x7850a65b9ff139bc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO.MessageNumber", message_number, 0xe0, 0x20, true, 0xe7dfeade2be16778)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_INFO.Vector", vector, 0x100, 0x20, true, 0xe80cd19e3967a85)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO.Irql", irql, 0x120, 0x8, true, 0x3021d25e703d85cd)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_WDF_INTERRUPT_INFO.Mode", mode, 0x140, 0x20, true, 0xeb2447bdc6a3ae01)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_polarity_t), "_WDF_INTERRUPT_INFO.Polarity", polarity, 0x160, 0x20, true, 0xba2f1c38a147879b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO.MessageSignaled", message_signaled, 0x180, 0x8, true, 0xb0f72755fac347b3)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_INFO.ShareDisposition", share_disposition, 0x188, 0x8, true, 0xda477d70c002dfc3)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_INTERRUPT_INFO.Group", group, 0x1c0, 0x10, true, 0xe008bb8528b103a4)
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
#endif