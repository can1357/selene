#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS.KeyHandle", key_handle, 0x0, 0x40, true, 0x7ab33ea5c6c9e63d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS.ValueNamePointer", value_name_pointer, 0x40, 0x40, true, 0x9ec1e9e5f5c67133)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS.RequiredLengthPointer", required_length_pointer, 0x80, 0x40, true, 0xf7b3c373d92993c2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS.Buffer", buffer, 0xc0, 0x40, true, 0xead5457ab05a252a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS.BufferLength", buffer_length, 0x100, 0x20, true, 0xb2349f7bdf1215d1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS.Type", type, 0x120, 0x20, true, 0x2469a519f3c16c90)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS.AppendBuffer", append_buffer, 0x140, 0x40, true, 0xa474899e997076a7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS.AppendBufferLength", append_buffer_length, 0x180, 0x20, true, 0xc04e0f1071d8d51)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS.CreateIfDoesntExist", create_if_doesnt_exist, 0x1a0, 0x8, true, 0xad8c7c03f424511f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS.TruncateExistingValue", truncate_existing_value, 0x1a8, 0x8, true, 0x7f620dd4eeaa8922)
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
#endif