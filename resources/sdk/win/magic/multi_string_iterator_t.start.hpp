#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "MultiStringIterator._current", current, 0x0, 0x0, false, 0xd772509322b8487a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "MultiStringIterator._pastTheEnd", past_the_end, 0x0, 0x0, false, 0x3386c4b7e9a666f2)
#else
#define _m00
#define _m01
#endif