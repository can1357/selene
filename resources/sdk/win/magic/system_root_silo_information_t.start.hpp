#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ROOT_SILO_INFORMATION.NumberOfSilos", number_of_silos, 0x0, 0x20, true, 0xe4042e88c05b2ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_SYSTEM_ROOT_SILO_INFORMATION.SiloIdList", silo_id_list, 0x20, 0x20, true, 0x3b155b2495cda818)
#else
#define _m00
#define _m01
#endif