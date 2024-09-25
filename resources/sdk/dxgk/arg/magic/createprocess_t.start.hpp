#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEPROCESS.hDxgkProcess", h_dxgk_process, 0x0, 0x40, true, 0x915f3c65dcd99a20)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEPROCESS.hKmdProcess", h_kmd_process, 0x40, 0x40, true, 0xebcd18a595f4b0ec)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::createprocessflags_t), "_DXGKARG_CREATEPROCESS.Flags", flags, 0x80, 0x20, true, 0xa6fdaf3842536a8a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEPROCESS.NumPasid", num_pasid, 0xa0, 0x20, true, 0xe2969751f40e0bfd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_DXGKARG_CREATEPROCESS.pPasid", p_pasid, 0xc0, 0x40, true, 0xf9e78dce6ea15e6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEPROCESS.hKmdVmWorkerProcess", h_kmd_vm_worker_process, 0x100, 0x40, true, 0x91943828cb5c985a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEPROCESS.ProcessNameLength", process_name_length, 0x140, 0x20, true, 0xd5893201c98a6954)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_DXGKARG_CREATEPROCESS.pProcessName", p_process_name, 0x180, 0x40, true, 0xc91df1497f85950b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif