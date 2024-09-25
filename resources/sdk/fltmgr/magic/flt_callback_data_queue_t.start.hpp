#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::csq_t), "_FLT_CALLBACK_DATA_QUEUE.Csq", csq, 0x0, 0x0, true, 0x91ae85a010d9aee3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fltmgr::flt_callback_data_queue_flags_t), "_FLT_CALLBACK_DATA_QUEUE.Flags", flags, 0x200, 0x8, true, 0x575f1b0bdcccb6bf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_instance_t*), "_FLT_CALLBACK_DATA_QUEUE.Instance", instance, 0x240, 0x40, true, 0xf699e95bf26e4d32)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct fltmgr::flt_callback_data_queue_t*, struct fltmgr::flt_callback_data_t*, void*)>*), "_FLT_CALLBACK_DATA_QUEUE.InsertIo", insert_io, 0x280, 0x40, true, 0xbc5050d9c4e671a3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct fltmgr::flt_callback_data_queue_t*, struct fltmgr::flt_callback_data_t*)>*), "_FLT_CALLBACK_DATA_QUEUE.RemoveIo", remove_io, 0x2c0, 0x40, true, 0x6db431d23ee4039)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct fltmgr::flt_callback_data_t*(struct fltmgr::flt_callback_data_queue_t*, struct fltmgr::flt_callback_data_t*, void*)>*), "_FLT_CALLBACK_DATA_QUEUE.PeekNextIo", peek_next_io, 0x300, 0x40, true, 0xe04898b87c1607c4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct fltmgr::flt_callback_data_queue_t*, uint8_t*)>*), "_FLT_CALLBACK_DATA_QUEUE.Acquire", acquire, 0x340, 0x40, true, 0xaf57100eb4a12129)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct fltmgr::flt_callback_data_queue_t*, uint8_t)>*), "_FLT_CALLBACK_DATA_QUEUE.Release", release, 0x380, 0x40, true, 0xcdd72df63feec01e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct fltmgr::flt_callback_data_queue_t*, struct fltmgr::flt_callback_data_t*)>*), "_FLT_CALLBACK_DATA_QUEUE.CompleteCanceledIo", complete_canceled_io, 0x3c0, 0x40, true, 0xbda83f5e76b7020c)
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
#endif