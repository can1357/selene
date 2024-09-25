#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_EXTENDED_MESSAGE.InitialMessageCode", initial_message_code, 0x0, 0x8, true, 0x7e0078ac68c48c87)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_EXTENDED_MESSAGE.MessageLength", message_length, 0x8, 0x8, true, 0x1d7852b8fbb36238)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_EXTENDED_MESSAGE.MessageType", message_type, 0x10, 0x8, true, 0x98534d7e18cd219c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::extended_arguments_t), "_SCSI_EXTENDED_MESSAGE.ExtendedArguments", extended_arguments, 0x18, 0x20, true, 0x497c8ce4d4bca22e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif