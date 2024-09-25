#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::request_t*), "FxUsbPipeRepeatReader.Request", request, 0x0, 0x40, true, 0x6c5dd4bdc3bb46bc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "FxUsbPipeRepeatReader.RequestIrp", request_irp, 0x40, 0x40, true, 0xa6892c64ba87e89e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::usb_pipe_continuous_reader_t*), "FxUsbPipeRepeatReader.Parent", parent, 0x80, 0x40, true, 0x47b4694a062727d9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "FxUsbPipeRepeatReader.Dpc", dpc, 0xc0, 0x0, true, 0x24134825d0279acc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t), "FxUsbPipeRepeatReader.ReadCompletedEvent", read_completed_event, 0x2c0, 0x0, true, 0xa4a6ec76aa20d90c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif