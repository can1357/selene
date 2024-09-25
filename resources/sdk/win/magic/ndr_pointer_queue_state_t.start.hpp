#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_t*), "NDR_POINTER_QUEUE_STATE.pActiveQueue", p_active_queue, 0x40, 0x40, true, 0x779308fdc1d8aa8a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::array_info_t), "NDR_POINTER_QUEUE_STATE.ArrayInfo", array_info, 0x80, 0x80, true, 0xeb594898b79a7f75)
#else
#define _m00
#define _m01
#endif