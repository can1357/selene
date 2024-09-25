#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_FLT_OPERATION_STATUS.RoutineAddr", routine_addr, 0x0, 0x40, true, 0xe91e811550ec36c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_FLT_OPERATION_STATUS.FileObject", file_object, 0x40, 0x40, true, 0x327b7707e51fc198)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_FLT_OPERATION_STATUS.FsContext", fs_context, 0x80, 0x40, true, 0x7332a7480221bee4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_FLT_OPERATION_STATUS.IrpPtr", irp_ptr, 0xc0, 0x40, true, 0xcc5107c64cb1b322)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_FLT_OPERATION_STATUS.CbdPtr", cbd_ptr, 0x100, 0x40, true, 0x527221451bd9554a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_FLT_OPERATION_STATUS.MajorFunction", major_function, 0x140, 0x20, true, 0xff46fed41635852a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_FLT_OPERATION_STATUS.Status", status, 0x160, 0x20, true, 0x74d7c242d83cbd41)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif