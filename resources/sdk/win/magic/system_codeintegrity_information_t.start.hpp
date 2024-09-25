#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CODEINTEGRITY_INFORMATION.Length", length, 0x0, 0x20, true, 0x1c63ce05c1e1e89a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CODEINTEGRITY_INFORMATION.CodeIntegrityOptions", code_integrity_options, 0x20, 0x20, true, 0x7aeb5680df756501)
#else
#define _m00
#define _m01
#endif