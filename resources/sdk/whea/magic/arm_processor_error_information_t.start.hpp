#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION.Version", version, 0x0, 0x8, true, 0x44ffc78dbbc6f3fc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION.Length", length, 0x8, 0x8, true, 0xaf3c7e9b4a0270e0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::arm_processor_error_information_valid_bits_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION.ValidationBit", validation_bit, 0x10, 0x10, true, 0xc23ca50e1dbbd16f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION.Type", type, 0x20, 0x8, true, 0xdb2f515a724da97b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION.MultipleError", multiple_error, 0x28, 0x10, true, 0x53468c083c6d423b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION.Flags", flags, 0x38, 0x8, true, 0x7f091977bd0fd857)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION.ErrorInformation", error_information, 0x40, 0x40, true, 0x48fb640d40dc9d7c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION.VirtualFaultAddress", virtual_fault_address, 0x80, 0x40, true, 0x1a7d8d1d81fda9c4)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION.PhysicalFaultAddress", physical_fault_address, 0xc0, 0x40, true, 0x9a73d2c1152d3b5)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION.PhysicalFaultAddresss", physical_fault_addresss, 0xc0, 0x40, true, 0x9af56489ad7ae171)
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