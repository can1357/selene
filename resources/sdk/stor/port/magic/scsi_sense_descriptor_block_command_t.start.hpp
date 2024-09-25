#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(scsi_sense_descriptor_header_t ), "_SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND.Header", header, 0x0, 0x10, true, 0xf67f8e4b1902071b)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND.IncorrectLength", incorrect_length, 0x1d, 0x1, true, 0xc5d8c0b3f3ded822, 1, uint8_t)
#else
#define _m00
#define _m01
#endif