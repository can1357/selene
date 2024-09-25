#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESS_MACHINE_INFORMATION.ProcessMachine", process_machine, 0x0, 0x0, false, 0x1c7c38b8351ef6d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESS_MACHINE_INFORMATION.Res0", res0, 0x0, 0x0, false, 0x28858e6eec0b02b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::machine_attributes_t), "_PROCESS_MACHINE_INFORMATION.MachineAttributes", machine_attributes, 0x0, 0x0, false, 0xa77690269e415f50)
#else
#define _m00
#define _m01
#define _m02
#endif