#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SETVIRTUALMACHINEDATA.hKmdVmWorkerProcess", h_kmd_vm_worker_process, 0x0, 0x40, true, 0xd2f62aa4d4f5275e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_DXGKARG_SETVIRTUALMACHINEDATA.pVmGuid", p_vm_guid, 0x40, 0x40, true, 0xe2e6a5c1b1f095b8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::virtualmachinedataflags_t), "_DXGKARG_SETVIRTUALMACHINEDATA.Flags", flags, 0x80, 0x20, true, 0xaedde39f61159cca)
#else
#define _m00
#define _m01
#define _m02
#endif