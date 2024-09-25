#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_REGISTERED_INTERRUPT_CONTROLLER.ListEntry", list_entry, 0x0, 0x80, true, 0xa96c04a5c839be26)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_REGISTERED_INTERRUPT_CONTROLLER.InternalData", internal_data, 0x80, 0x40, true, 0x10f51488dcc8335d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_INTERRUPT_CONTROLLER.InternalDataSize", internal_data_size, 0xc0, 0x20, true, 0xc7162fa7648a4633)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interrupt_function_table_t), "_REGISTERED_INTERRUPT_CONTROLLER.FunctionTable", function_table, 0x100, 0xc0, true, 0xc6b5f8f2ede0240e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::known_controller_type_t), "_REGISTERED_INTERRUPT_CONTROLLER.KnownType", known_type, 0x6c0, 0x20, true, 0x79625e7faec658f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_INTERRUPT_CONTROLLER.Capabilities", capabilities, 0x6e0, 0x20, true, 0x6e954087ddb5369a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_INTERRUPT_CONTROLLER.Flags", flags, 0x700, 0x20, true, 0x2e891c8e254e068d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_INTERRUPT_CONTROLLER.MaxPriority", max_priority, 0x720, 0x20, true, 0x46a48ae37160a499)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_INTERRUPT_CONTROLLER.UnitId", unit_id, 0x740, 0x20, true, 0x69f90ec0e1c1845)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_REGISTERED_INTERRUPT_CONTROLLER.LinesHead", lines_head, 0x780, 0x80, true, 0x185c2c1d60be3b70)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_REGISTERED_INTERRUPT_CONTROLLER.OutputLinesHead", output_lines_head, 0x800, 0x80, true, 0x9033794befe1d2f4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_REGISTERED_INTERRUPT_CONTROLLER.MinLine", min_line, 0x880, 0x20, true, 0xee2093bf5e6c81cf)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_REGISTERED_INTERRUPT_CONTROLLER.MaxLine", max_line, 0x8a0, 0x20, true, 0xf5d3b8107d665e63)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_INTERRUPT_CONTROLLER.MaxClusterSize", max_cluster_size, 0x8c0, 0x20, true, 0x93142f196750c5ef)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_INTERRUPT_CONTROLLER.MaxClusters", max_clusters, 0x8e0, 0x20, true, 0x36c38773d2a5a7a8)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_INTERRUPT_CONTROLLER.InterruptReplayDataSize", interrupt_replay_data_size, 0x900, 0x20, true, 0x2ae0372360dbafda)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::interrupt_problem_t), "_REGISTERED_INTERRUPT_CONTROLLER.Problem", problem, 0x920, 0x20, true, 0x54019f2847374870)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_REGISTERED_INTERRUPT_CONTROLLER.ProblemStatus", problem_status, 0x940, 0x20, true, 0x961811c3de04c96d)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_REGISTERED_INTERRUPT_CONTROLLER.ProblemSourceFile", problem_source_file, 0x980, 0x40, true, 0x93250e06dc95a65e)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_INTERRUPT_CONTROLLER.ProblemSourceLine", problem_source_line, 0x9c0, 0x20, true, 0x3e55ed85ae32089f)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTERED_INTERRUPT_CONTROLLER.CustomProblem", custom_problem, 0x9e0, 0x20, true, 0xac8d9f5fb430c970)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_REGISTERED_INTERRUPT_CONTROLLER.CustomProblemStatus", custom_problem_status, 0xa00, 0x20, true, 0x6dac77065a105952)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_REGISTERED_INTERRUPT_CONTROLLER.ResourceId", resource_id, 0xa40, 0x80, true, 0x691a76fbe3dc602)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_REGISTERED_INTERRUPT_CONTROLLER.PowerHandle", power_handle, 0xac0, 0x40, true, 0xfa6a608e3cc208fd)
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
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif