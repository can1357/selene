#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_FLT_OPERATION.RoutineAddr", routine_addr, 0x0, 0x40, true, 0xa5315641f7c0f863)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_FLT_OPERATION.FileObject", file_object, 0x40, 0x40, true, 0x296bdef994eaea7b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_FLT_OPERATION.FsContext", fs_context, 0x80, 0x40, true, 0xccb5efc852d29c97)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_FLT_OPERATION.IrpPtr", irp_ptr, 0xc0, 0x40, true, 0xb4f82c7388af8f37)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_FLT_OPERATION.CbdPtr", cbd_ptr, 0x100, 0x40, true, 0x3fa0e1d2c365adfe)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_FLT_OPERATION.MajorFunction", major_function, 0x140, 0x20, true, 0xfc428f084548f97d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif