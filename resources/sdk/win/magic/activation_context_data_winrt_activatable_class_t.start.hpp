#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_WINRT_ACTIVATABLE_CLASS.Size", size, 0x0, 0x20, true, 0x5e81c4eea6a4fbb5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_WINRT_ACTIVATABLE_CLASS.Flags", flags, 0x20, 0x20, true, 0x92ff614441686448)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_WINRT_ACTIVATABLE_CLASS.DllPathLength", dll_path_length, 0x40, 0x20, true, 0x322d5a4c39001b52)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_WINRT_ACTIVATABLE_CLASS.DllPathOffset", dll_path_offset, 0x60, 0x20, true, 0x3027c465d918d6ce)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_WINRT_ACTIVATABLE_CLASS.ThreadingModel", threading_model, 0x80, 0x20, true, 0xc4bda884716fa540)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif