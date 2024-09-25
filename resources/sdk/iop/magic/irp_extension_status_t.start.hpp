#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOP_IRP_EXTENSION_STATUS.Flags", flags, 0x0, 0x20, true, 0xda19bd8a3c9144df)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOP_IRP_EXTENSION_STATUS.ActivityId", activity_id, 0x20, 0x20, true, 0xae5ef6dcd9d821b9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOP_IRP_EXTENSION_STATUS.IoTracking", io_tracking, 0x40, 0x20, true, 0xc036174226a4a16f)
#else
#define _m00
#define _m01
#define _m02
#endif