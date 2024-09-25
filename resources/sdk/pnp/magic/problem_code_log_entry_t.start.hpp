#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PNP_PROBLEM_CODE_LOG_ENTRY.Timestamp", timestamp, 0x0, 0x0, false, 0x5ed7efa6878440d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pnp::problem_code_log_operation_t), "_PNP_PROBLEM_CODE_LOG_ENTRY.Operation", operation, 0x0, 0x0, false, 0xa4167c8b0852de21)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_PROBLEM_CODE_LOG_ENTRY.ProblemCode", problem_code, 0x0, 0x0, false, 0x5f8c67fedece60eb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PNP_PROBLEM_CODE_LOG_ENTRY.ProblemStatus", problem_status, 0x0, 0x0, false, 0x8565df4dc4ca440e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif