#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIRTUAL_EFI_RUNTIME_SERVICES.GetTime", get_time, 0x0, 0x40, true, 0xb88fd5ad8ecfa8e6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIRTUAL_EFI_RUNTIME_SERVICES.SetTime", set_time, 0x40, 0x40, true, 0x589a678a5d5ba6cc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIRTUAL_EFI_RUNTIME_SERVICES.GetWakeupTime", get_wakeup_time, 0x80, 0x40, true, 0xab4d42036f9080e1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIRTUAL_EFI_RUNTIME_SERVICES.SetWakeupTime", set_wakeup_time, 0xc0, 0x40, true, 0x83afe82c5e5b1a29)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIRTUAL_EFI_RUNTIME_SERVICES.SetVirtualAddressMap", set_virtual_address_map, 0x100, 0x40, true, 0xf45439b970a710f1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIRTUAL_EFI_RUNTIME_SERVICES.ConvertPointer", convert_pointer, 0x140, 0x40, true, 0x6a0ffa0f334b2b5a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIRTUAL_EFI_RUNTIME_SERVICES.GetVariable", get_variable, 0x180, 0x40, true, 0xfbf7bb14d39f03c6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIRTUAL_EFI_RUNTIME_SERVICES.GetNextVariableName", get_next_variable_name, 0x1c0, 0x40, true, 0x1e18861b2dae7607)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIRTUAL_EFI_RUNTIME_SERVICES.SetVariable", set_variable, 0x200, 0x40, true, 0xab681fb90f13a57)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIRTUAL_EFI_RUNTIME_SERVICES.GetNextHighMonotonicCount", get_next_high_monotonic_count, 0x240, 0x40, true, 0xc1c315db746441f2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIRTUAL_EFI_RUNTIME_SERVICES.ResetSystem", reset_system, 0x280, 0x40, true, 0x96715abfaf13355c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIRTUAL_EFI_RUNTIME_SERVICES.UpdateCapsule", update_capsule, 0x2c0, 0x40, true, 0x60e4dc75ff560f1f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIRTUAL_EFI_RUNTIME_SERVICES.QueryCapsuleCapabilities", query_capsule_capabilities, 0x300, 0x40, true, 0x3d541873cd50d84f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VIRTUAL_EFI_RUNTIME_SERVICES.QueryVariableInfo", query_variable_info, 0x340, 0x40, true, 0x10edd656a09f3991)
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
#define _m13
#endif