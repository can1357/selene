#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS.MultipleError", multiple_error, 0x0, 0x1, true, 0xe65b3de4fa42e055, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS.Flags", flags, 0x1, 0x1, true, 0x95fc76b9f8bd9705, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS.ErrorInformation", error_information, 0x2, 0x1, true, 0xb4dc6c59ca6b210a, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS.VirtualFaultAddress", virtual_fault_address, 0x3, 0x1, true, 0x5a9574ab8d2e6fa7, 1, uint16_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x952febe1e5502d98)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS.PhysicalFaultAddress", physical_fault_address, 0x4, 0x1, true, 0xc0b9c009eee0721f, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS.PhysicalFaultAddresss", physical_fault_addresss, 0x4, 0x1, true, 0xabc77fd474fc1a2a, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif