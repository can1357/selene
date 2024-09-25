#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_OPTICALIO_INIT.Irp", irp, 0x0, 0x40, true, 0x1436a6207509fbbf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_OPTICALIO_INIT.IssuingThreadId", issuing_thread_id, 0x40, 0x20, true, 0xf55bcdf30e12edd9)
#else
#define _m00
#define _m01
#endif