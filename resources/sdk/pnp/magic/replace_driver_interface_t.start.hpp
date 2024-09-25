#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_REPLACE_DRIVER_INTERFACE.Size", size, 0x0, 0x20, true, 0xa1e210ac96ed0c4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_REPLACE_DRIVER_INTERFACE.Version", version, 0x20, 0x20, true, 0xe9f8a6c884e9c66f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_REPLACE_DRIVER_INTERFACE.Flags", flags, 0x40, 0x20, true, 0x3f0cad04732165d2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_PNP_REPLACE_DRIVER_INTERFACE.Unload", unload, 0x80, 0x40, true, 0x5319b6ba525d1ba3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(preplace_begin_t ), "_PNP_REPLACE_DRIVER_INTERFACE.BeginReplace", begin_replace, 0xc0, 0x40, true, 0x3b10de720d4490d1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_PNP_REPLACE_DRIVER_INTERFACE.EndReplace", end_replace, 0x100, 0x40, true, 0x2b65a330a7a5dfec)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, int64_t, int64_t)>*), "_PNP_REPLACE_DRIVER_INTERFACE.MirrorPhysicalMemory", mirror_physical_memory, 0x140, 0x40, true, 0x61b63210ce10846b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(preplace_set_processor_id_t ), "_PNP_REPLACE_DRIVER_INTERFACE.SetProcessorId", set_processor_id, 0x180, 0x40, true, 0x198edd66ede7021e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_PNP_REPLACE_DRIVER_INTERFACE.Swap", swap, 0x1c0, 0x40, true, 0xc62ae97ad26f27d2)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_PNP_REPLACE_DRIVER_INTERFACE.InitiateHardwareMirror", initiate_hardware_mirror, 0x200, 0x40, true, 0xd3678fac7ba9d1c6)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_PNP_REPLACE_DRIVER_INTERFACE.MirrorPlatformMemory", mirror_platform_memory, 0x240, 0x40, true, 0x7fda54cef88b9a54)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(preplace_get_memory_destination_t ), "_PNP_REPLACE_DRIVER_INTERFACE.GetMemoryDestination", get_memory_destination, 0x280, 0x40, true, 0x6faee37f0efef5cd)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "_PNP_REPLACE_DRIVER_INTERFACE.EnableDisableHardwareQuiesce", enable_disable_hardware_quiesce, 0x2c0, 0x40, true, 0x71e0fe9d71a41c7f)
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
#define _m09
#define _m10
#define _m11
#define _m12
#endif