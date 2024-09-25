#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::pcixbus_error_section_validbits_t), "_WHEA_PCIXBUS_ERROR_SECTION.ValidBits", valid_bits, 0x0, 0x40, true, 0xbb19cd97ca9695e6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::error_status_t), "_WHEA_PCIXBUS_ERROR_SECTION.ErrorStatus", error_status, 0x40, 0x40, true, 0xf5152e7e2f5278f8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PCIXBUS_ERROR_SECTION.ErrorType", error_type, 0x80, 0x10, true, 0x30e9498a75bc790f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::pcixbus_id_t), "_WHEA_PCIXBUS_ERROR_SECTION.BusId", bus_id, 0x90, 0x10, true, 0x6d5b847d4f322b46)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PCIXBUS_ERROR_SECTION.BusAddress", bus_address, 0xc0, 0x40, true, 0xe8f517240452ff01)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PCIXBUS_ERROR_SECTION.BusData", bus_data, 0x100, 0x40, true, 0xea0eb21284c92f18)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::pcixbus_command_t), "_WHEA_PCIXBUS_ERROR_SECTION.BusCommand", bus_command, 0x140, 0x40, true, 0x970296baa0d4b6e3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PCIXBUS_ERROR_SECTION.RequesterId", requester_id, 0x180, 0x40, true, 0xf6b15fece8286192)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PCIXBUS_ERROR_SECTION.CompleterId", completer_id, 0x1c0, 0x40, true, 0x4926ce1ae4aa7d2e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PCIXBUS_ERROR_SECTION.TargetId", target_id, 0x200, 0x40, true, 0xfa32a956ade84e77)
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