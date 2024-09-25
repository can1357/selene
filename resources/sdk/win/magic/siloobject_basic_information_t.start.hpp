#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SILOOBJECT_BASIC_INFORMATION.SiloId", silo_id, 0x0, 0x20, true, 0x5a754a3bd3c4224)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SILOOBJECT_BASIC_INFORMATION.SiloParentId", silo_parent_id, 0x20, 0x20, true, 0xcefbb8c15e47f203)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SILOOBJECT_BASIC_INFORMATION.NumberOfProcesses", number_of_processes, 0x40, 0x20, true, 0xf36823b430b42c44)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SILOOBJECT_BASIC_INFORMATION.IsInServerSilo", is_in_server_silo, 0x60, 0x8, true, 0x59a40eb4c554fbe2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif