#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CREATEPROCESSFLAGS.SystemProcess", system_process, 0x0, 0x1, true, 0x72a4b9e938e648ec, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CREATEPROCESSFLAGS.GdiProcess", gdi_process, 0x1, 0x1, true, 0xd03533ff831b39e2, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CREATEPROCESSFLAGS.VirtualMachineProcess", virtual_machine_process, 0x2, 0x1, true, 0x51e64251e60746ec, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CREATEPROCESSFLAGS.VirtualMachineWorkerProcess", virtual_machine_worker_process, 0x3, 0x1, true, 0x7ff862155e706e7b, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CREATEPROCESSFLAGS.SessionIsolatedContainer", session_isolated_container, 0x4, 0x1, true, 0xdfd7ac0e8c46b2fb, 1, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CREATEPROCESSFLAGS.Value", value, 0x0, 0x20, true, 0x7d981eb2eac3fff5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif