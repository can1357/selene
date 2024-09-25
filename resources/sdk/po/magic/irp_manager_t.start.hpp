#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::irp_queue_t), "_PO_IRP_MANAGER.DeviceIrpQueue", device_irp_queue, 0x0, 0x80, true, 0x5c2e09d730b06d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::irp_queue_t), "_PO_IRP_MANAGER.SystemIrpQueue", system_irp_queue, 0x80, 0x80, true, 0x2d1418257f27ffb6)
#else
#define _m00
#define _m01
#endif