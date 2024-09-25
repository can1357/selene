#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_DUPLICATE_HANDLE_EVENT.Object", object, 0x0, 0x40, true, 0x10648a02a863b421)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DUPLICATE_HANDLE_EVENT.SourceHandle", source_handle, 0x40, 0x20, true, 0x376e3e4422b62805)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DUPLICATE_HANDLE_EVENT.TargetHandle", target_handle, 0x60, 0x20, true, 0x2cdd9a0929b6a407)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DUPLICATE_HANDLE_EVENT.TargetProcessId", target_process_id, 0x80, 0x20, true, 0xc0f27315c09a60ff)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_DUPLICATE_HANDLE_EVENT.ObjectType", object_type, 0xa0, 0x10, true, 0xeb8b1b2c3a29d8fb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DUPLICATE_HANDLE_EVENT.SourceProcessId", source_process_id, 0xb0, 0x20, true, 0xc5dc573e5f2d43fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif