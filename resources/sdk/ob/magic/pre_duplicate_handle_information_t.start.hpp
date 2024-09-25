#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OB_PRE_DUPLICATE_HANDLE_INFORMATION.DesiredAccess", desired_access, 0x0, 0x20, true, 0x9ca332de3f37987b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OB_PRE_DUPLICATE_HANDLE_INFORMATION.OriginalDesiredAccess", original_desired_access, 0x20, 0x20, true, 0xc42e9c48152b132d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_OB_PRE_DUPLICATE_HANDLE_INFORMATION.SourceProcess", source_process, 0x40, 0x40, true, 0xb30ff56c0f4f61ea)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_OB_PRE_DUPLICATE_HANDLE_INFORMATION.TargetProcess", target_process, 0x80, 0x40, true, 0xd431f78067060105)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif