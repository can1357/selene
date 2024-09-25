#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETDEVICESTATE.hDevice", h_device, 0x0, 0x20, true, 0xff48830cc00cf600)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::devicestate_type_t), "_D3DKMT_GETDEVICESTATE.StateType", state_type, 0x20, 0x20, true, 0x863cbf5580abd78c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::deviceexecution_state_t), "_D3DKMT_GETDEVICESTATE.ExecutionState", execution_state, 0x40, 0x20, true, 0x8021feebf84f1970)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::devicepresent_state_t), "_D3DKMT_GETDEVICESTATE.PresentState", present_state, 0x40, 0x40, true, 0xbd1a42d396d46e0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::devicereset_state_t), "_D3DKMT_GETDEVICESTATE.ResetState", reset_state, 0x40, 0x20, true, 0x14c9340e4a02477e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::devicepresent_state_dwm_t), "_D3DKMT_GETDEVICESTATE.PresentStateDWM", present_state_dwm, 0x40, 0x80, true, 0xfbf0d5a434ef38ed)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::devicepagefault_state_t), "_D3DKMT_GETDEVICESTATE.PageFaultState", page_fault_state, 0x40, 0x0, true, 0x4e34e5c8d541eede)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::devicepresent_queue_state_t), "_D3DKMT_GETDEVICESTATE.PresentQueueState", present_queue_state, 0x40, 0x40, true, 0xfacf6c94208c6df7)
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