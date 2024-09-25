#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WHEAP_ERROR_RECORD_WRAPPER.WorkEntry", work_entry, 0x0, 0x80, true, 0x236690a0fb2cd472)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_RECORD_WRAPPER.Length", length, 0x80, 0x20, true, 0xd65bf9f4542719f2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_RECORD_WRAPPER.ProcessorNumber", processor_number, 0xa0, 0x20, true, 0x4109c07b7b8fae1b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wheap::error_record_wrapper_flags_t), "_WHEAP_ERROR_RECORD_WRAPPER.Flags", flags, 0xc0, 0x20, true, 0x2e7531bf6573f5b7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_WHEAP_ERROR_RECORD_WRAPPER.InUse", in_use, 0xe0, 0x20, true, 0x80358ec6cfdbd0ca)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wheap::error_source_t*), "_WHEAP_ERROR_RECORD_WRAPPER.ErrorSource", error_source, 0x100, 0x40, true, 0xbdf6ded2f1553368)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::error_record_t), "_WHEAP_ERROR_RECORD_WRAPPER.ErrorRecord", error_record, 0x140, 0x40, true, 0x4c2bf0c5b67cdbd8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif