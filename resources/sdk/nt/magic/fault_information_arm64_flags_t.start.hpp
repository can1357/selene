#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FAULT_INFORMATION_ARM64_FLAGS.WriteNotRead", write_not_read, 0x0, 0x1, true, 0xf03b9f9daf87065f, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FAULT_INFORMATION_ARM64_FLAGS.InstructionNotData", instruction_not_data, 0x1, 0x1, true, 0xaa63906cb128c8cf, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FAULT_INFORMATION_ARM64_FLAGS.Privileged", privileged, 0x2, 0x1, true, 0xb54d50c879d68a19, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FAULT_INFORMATION_ARM64_FLAGS.FaultAddressValid", fault_address_valid, 0x3, 0x1, true, 0xdfe32d78c980cee2, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif