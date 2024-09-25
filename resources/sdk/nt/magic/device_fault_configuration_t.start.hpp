#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(piommu_device_fault_handler_t ), "_DEVICE_FAULT_CONFIGURATION.FaultHandler", fault_handler, 0x0, 0x40, true, 0x22a48229be9bc1e5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DEVICE_FAULT_CONFIGURATION.FaultContext", fault_context, 0x40, 0x40, true, 0xbe55960ab8b15892)
#else
#define _m00
#define _m01
#endif