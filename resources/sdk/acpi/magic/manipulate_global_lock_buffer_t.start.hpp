#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_MANIPULATE_GLOBAL_LOCK_BUFFER.Signature", signature, 0x0, 0x20, true, 0x44c5329895dadd42)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_ACPI_MANIPULATE_GLOBAL_LOCK_BUFFER.LockObject", lock_object, 0x40, 0x40, true, 0xb40c651f5fdc8fee)
#else
#define _m00
#define _m01
#endif