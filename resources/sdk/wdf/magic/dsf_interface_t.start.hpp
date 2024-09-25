#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interface_t), "_WDF_DSF_INTERFACE.Interface", interface, 0x0, 0x0, true, 0x41f50ed7c245c86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*), "_WDF_DSF_INTERFACE.IoReportInterruptActive", io_report_interrupt_active, 0x100, 0x40, true, 0x5f0b73765dbca396)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*), "_WDF_DSF_INTERFACE.IoReportInterruptInactive", io_report_interrupt_inactive, 0x140, 0x40, true, 0x749d647369a4bbbd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_io_connect_interrupt_ex_t ), "_WDF_DSF_INTERFACE.IoConnectInterruptEx", io_connect_interrupt_ex, 0x180, 0x40, true, 0x3d646a74e7735a80)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_io_disconnect_interrupt_ex_t ), "_WDF_DSF_INTERFACE.IoDisconnectInterruptEx", io_disconnect_interrupt_ex, 0x1c0, 0x40, true, 0xa9a0067eb6e91ea3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif