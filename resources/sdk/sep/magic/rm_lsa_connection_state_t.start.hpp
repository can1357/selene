#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_RM_LSA_CONNECTION_STATE.LsaProcessHandle", lsa_process_handle, 0x0, 0x40, true, 0x82538d548282852)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_RM_LSA_CONNECTION_STATE.LsaCommandPortHandle", lsa_command_port_handle, 0x40, 0x40, true, 0xe45a1c99e65f6f3e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_RM_LSA_CONNECTION_STATE.SepRmThreadHandle", sep_rm_thread_handle, 0x80, 0x40, true, 0xde845ec2efb0b930)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_RM_LSA_CONNECTION_STATE.RmCommandPortHandle", rm_command_port_handle, 0xc0, 0x40, true, 0x14f0bf434b52f14e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_RM_LSA_CONNECTION_STATE.RmCommandServerPortHandle", rm_command_server_port_handle, 0x100, 0x40, true, 0x1599dd5b3c2f9813)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_RM_LSA_CONNECTION_STATE.LsaCommandPortSectionHandle", lsa_command_port_section_handle, 0x140, 0x40, true, 0x62f9a853e52abe8d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SEP_RM_LSA_CONNECTION_STATE.LsaCommandPortSectionSize", lsa_command_port_section_size, 0x180, 0x40, true, 0x500f75101b441071)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_RM_LSA_CONNECTION_STATE.LsaViewPortMemory", lsa_view_port_memory, 0x1c0, 0x40, true, 0x803a02a10932994f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_RM_LSA_CONNECTION_STATE.RmViewPortMemory", rm_view_port_memory, 0x200, 0x40, true, 0x2661ebdf094df05d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SEP_RM_LSA_CONNECTION_STATE.LsaCommandPortMemoryDelta", lsa_command_port_memory_delta, 0x240, 0x20, true, 0xd1fa4e0c91d1588d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEP_RM_LSA_CONNECTION_STATE.LsaCommandPortActive", lsa_command_port_active, 0x260, 0x8, true, 0x5db6502865cbcdc7)
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
#endif