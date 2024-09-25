#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION.Object", object, 0x0, 0x40, true, 0xecaf187a8d0e2bea)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::key_value_entry_t*), "_REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION.ValueEntries", value_entries, 0x40, 0x40, true, 0x92835859a084f6d5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION.EntryCount", entry_count, 0x80, 0x20, true, 0xba83713c1e2df1e9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION.ValueBuffer", value_buffer, 0xc0, 0x40, true, 0x9d4fc913c36f2d34)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION.BufferLength", buffer_length, 0x100, 0x40, true, 0x30c9f81ea5ba8e7f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION.RequiredBufferLength", required_buffer_length, 0x140, 0x40, true, 0x2e249363b3f5078c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION.CallContext", call_context, 0x180, 0x40, true, 0xda6195d59db57a0d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION.ObjectContext", object_context, 0x1c0, 0x40, true, 0x24e57e5e5e3959cd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif