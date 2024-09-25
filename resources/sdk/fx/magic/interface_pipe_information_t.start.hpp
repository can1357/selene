#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::usb_pipe_t**), "FxInterfacePipeInformation.Pipes", pipes, 0x0, 0x40, true, 0x548c13e188f5344e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxInterfacePipeInformation.NumPipes", num_pipes, 0x40, 0x20, true, 0xa07b6f9c135a4d44)
#else
#define _m00
#define _m01
#endif