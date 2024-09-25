#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FPGA_CONTROL_INTERFACE.Size", size, 0x0, 0x10, true, 0x74c7bc679138fa41)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FPGA_CONTROL_INTERFACE.Version", version, 0x10, 0x10, true, 0xeac1b7c676615397)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FPGA_CONTROL_INTERFACE.Context", context, 0x40, 0x40, true, 0x6577233af2072864)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_FPGA_CONTROL_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x24a16d884d67b056)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_FPGA_CONTROL_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x7aa75fc3dbf77d4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_FPGA_CONTROL_INTERFACE.BusScan", bus_scan, 0x100, 0x40, true, 0x626f3585673c9dee)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "_FPGA_CONTROL_INTERFACE.ControlLink", control_link, 0x140, 0x40, true, 0x893fe60e8389e0bb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "_FPGA_CONTROL_INTERFACE.ControlConfigSpace", control_config_space, 0x180, 0x40, true, 0xbe0a2603858fa8b7)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfpga_control_error_reporting_t ), "_FPGA_CONTROL_INTERFACE.ControlErrorReporting", control_error_reporting, 0x1c0, 0x40, true, 0x3a2b8f1244ef1ebd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif