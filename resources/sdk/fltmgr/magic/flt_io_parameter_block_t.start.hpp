#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_IO_PARAMETER_BLOCK.IrpFlags", irp_flags, 0x0, 0x20, true, 0x141104a504bb2c49)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FLT_IO_PARAMETER_BLOCK.MajorFunction", major_function, 0x20, 0x8, true, 0x1c50a7e2843129c4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FLT_IO_PARAMETER_BLOCK.MinorFunction", minor_function, 0x28, 0x8, true, 0x718aeda47e14e2cd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FLT_IO_PARAMETER_BLOCK.OperationFlags", operation_flags, 0x30, 0x8, true, 0xb348725207598193)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_FLT_IO_PARAMETER_BLOCK.TargetFileObject", target_file_object, 0x40, 0x40, true, 0x535cd97345afdf8d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_instance_t*), "_FLT_IO_PARAMETER_BLOCK.TargetInstance", target_instance, 0x80, 0x40, true, 0xb45b51a85b0254d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fltmgr::flt_parameters_t), "_FLT_IO_PARAMETER_BLOCK.Parameters", parameters, 0xc0, 0x80, true, 0x8e0a4386bbb21f44)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif