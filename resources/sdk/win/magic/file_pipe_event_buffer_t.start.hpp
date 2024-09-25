#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_EVENT_BUFFER.NamedPipeState", named_pipe_state, 0x0, 0x20, true, 0xf2306a0190a419dc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_EVENT_BUFFER.EntryType", entry_type, 0x20, 0x20, true, 0x9ad90133af37d9f6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_EVENT_BUFFER.ByteCount", byte_count, 0x40, 0x20, true, 0x22d343cbcda89f76)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_EVENT_BUFFER.KeyValue", key_value, 0x60, 0x20, true, 0xb01c60c771f9cf6f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_EVENT_BUFFER.NumberRequests", number_requests, 0x80, 0x20, true, 0x2e91b6abfceb49b6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif