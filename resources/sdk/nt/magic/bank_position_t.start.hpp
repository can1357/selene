#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BANK_POSITION.ReadBankPosition", read_bank_position, 0x0, 0x20, true, 0xb70ddb98b813ce7a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BANK_POSITION.WriteBankPosition", write_bank_position, 0x20, 0x20, true, 0x2a2bd0e154562575)
#else
#define _m00
#define _m01
#endif