#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE.DeviceHandle", device_handle, 0x0, 0x40, true, 0xed45f45e8c3b3289)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE.CompletionFlags", completion_flags, 0x40, 0x20, true, 0x7de5ebc8f6d945a1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE.MethodStatus", method_status, 0x60, 0x20, true, 0xe2a7b457a7595048)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE.CompletionContext", completion_context, 0x80, 0x40, true, 0x5dea6e0cef40bfbf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE.OutputArgumentSize", output_argument_size, 0xc0, 0x40, true, 0xb9b2c3c2236db657)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(__unaligned struct acpi::method_argument_v1_t*), "_PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE.OutputArguments", output_arguments, 0x100, 0x40, true, 0x79a4d67f4d6b72f9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif