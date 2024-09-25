#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIrpPreprocessInfo.ListEntry", list_entry, 0x0, 0x80, true, 0x89464709a7da3f44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIrpPreprocessInfo.ClassExtension", class_extension, 0x1580, 0x8, true, 0x66d20641a395f196)
#else
#define _m00
#define _m01
#endif