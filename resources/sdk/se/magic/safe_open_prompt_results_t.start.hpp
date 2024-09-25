#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum se::safe_open_prompt_experience_results_t), "_SE_SAFE_OPEN_PROMPT_RESULTS.Results", results, 0x0, 0x0, false, 0xbef76cff594f9d08)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_SE_SAFE_OPEN_PROMPT_RESULTS.Path", path, 0x0, 0x0, false, 0xcd173008e0e96ea5)
#else
#define _m00
#define _m01
#endif