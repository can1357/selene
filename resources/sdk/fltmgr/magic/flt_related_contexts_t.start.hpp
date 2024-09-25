#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_RELATED_CONTEXTS.VolumeContext", volume_context, 0x0, 0x40, true, 0x9fc6c7354554454)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_RELATED_CONTEXTS.InstanceContext", instance_context, 0x40, 0x40, true, 0xa77c162a4acb85a0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_RELATED_CONTEXTS.FileContext", file_context, 0x80, 0x40, true, 0xdd7d2e881b410c41)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_RELATED_CONTEXTS.StreamContext", stream_context, 0xc0, 0x40, true, 0x4fbe246ca21fbf6a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_RELATED_CONTEXTS.StreamHandleContext", stream_handle_context, 0x100, 0x40, true, 0x739b376b340250b4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_RELATED_CONTEXTS.TransactionContext", transaction_context, 0x140, 0x40, true, 0x3d016a8a85df42cd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif