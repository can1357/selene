#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_CONNECT_INTERRUPT_PARAMETERS.Version", version, 0x0, 0x20, true, 0x6c0114db61414a48)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(io_connect_interrupt_fully_specified_parameters_t ), "_IO_CONNECT_INTERRUPT_PARAMETERS.FullySpecified", fully_specified, 0x40, 0x40, true, 0x97e8d4f739e3784d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(io_connect_interrupt_line_based_parameters_t ), "_IO_CONNECT_INTERRUPT_PARAMETERS.LineBased", line_based, 0x40, 0x80, true, 0x137b85541ccf01e4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::connect_interrupt_message_based_parameters_t), "_IO_CONNECT_INTERRUPT_PARAMETERS.MessageBased", message_based, 0x40, 0xc0, true, 0x38e0a2ec4e887954)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif